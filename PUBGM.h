#include "Includes.h"
#include "SDK.hpp"
#include "Tools.h"
#include "base64/base64.h"
#include "Engine/Canvas.h"

using namespace SDK;

#include "UE4.h"


uintptr_t g_UE4 = 0;
uintptr_t GWorld_Offset, GUObjectArray_Offset, GNames_Offset, CanvasMap_Offset, AimBullet_Offset;

#define SLEEP_TIME 1000LL / 60LL

int g_screenWidth = 0, g_screenHeight = 0;
std::string g_Token, g_Auth;
std::map<std::string, u_long> hackConfig;

bool bPatternCompleted = false;
Canvas *m_Canvas = 0;
ASTExtraPlayerCharacter *g_LocalPlayer = 0;
ASTExtraPlayerController *g_PlayerController = 0;

// ================================================================================================================================ //
std::string getObjectPath(UObject *Object) {
    std::string s;
    for (auto super = Object->ClassPrivate; super; super = (UClass *) super->SuperStruct) {
        if (!s.empty())
            s += ".";
        s += super->GetName();
    }
    return s;
}

FVector WorldToScreen(FVector pos) {
    FVector resultPos = {0, 0, 0};
    if (CanvasMap_Offset) {
        auto canvasMap = *(uintptr_t *) (CanvasMap_Offset);
        if (canvasMap) {
            auto Canvas = *(uintptr_t *) (canvasMap + (0x8 * 3) + 0x8);
            if (Canvas) {
                FMatrix viewMatrix = *(FMatrix *) (Canvas + 0x200);

                float screenW = (viewMatrix.M[0][3] * pos.X) + (viewMatrix.M[1][3] * pos.Y) + (viewMatrix.M[2][3] * pos.Z + viewMatrix.M[3][3]);
                resultPos.Z = screenW;

                float screenY = (viewMatrix.M[0][1] * pos.X) + (viewMatrix.M[1][1] * pos.Y) + (viewMatrix.M[2][1] * pos.Z + viewMatrix.M[3][1]);
                float screenX = (viewMatrix.M[0][0] * pos.X) + (viewMatrix.M[1][0] * pos.Y) + (viewMatrix.M[2][0] * pos.Z + viewMatrix.M[3][0]);

                resultPos.Y = (g_screenHeight / 2) - (g_screenHeight / 2) * screenY / screenW;
                resultPos.X = (g_screenWidth / 2) + (g_screenWidth / 2) * screenX / screenW;
            }
        }
    }
    return resultPos;
}

// ================================================================================================================================ //
ASTExtraPlayerCharacter *GetTargetByDistance() {
    ASTExtraPlayerCharacter *result = 0;
    float max = std::numeric_limits<float>::infinity();

    UWorld *GWorld = *(UWorld **) (GWorld_Offset);
    if (GWorld) {
        ULevel *PersistentLevel = GWorld->PersistentLevel;
        if (GWorld->PersistentLevel) {
            TArray<AActor *> Actors = PersistentLevel->Actors;

            if (g_LocalPlayer) {
                for (int i = 0; i < Actors.Num(); i++) {
                    if (Actors[i] && Actors[i]->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                        auto Actor = (ASTExtraPlayerCharacter *) Actors[i];
                        if (Actor->PlayerKey == g_LocalPlayer->PlayerKey)
                            continue;

                        if (Actor->TeamID == g_LocalPlayer->TeamID)
                            continue;

                        if (Actor->bDead)
                            continue;

                        if (hackConfig["AIM::KNOCKED"]) {
                            if (Actor->Health == 0.0f)
                                continue;
                        }

                        float dist = g_LocalPlayer->GetDistanceTo(Actor);
                        if (dist < max) {
                            max = dist;
                            result = Actor;
                        }
                    }
                }
            }
        }
    }

    return result;
}


bool isInsideFOV(int x, int y) {
    if (!hackConfig["AIM::SIZE"])
        return true;

    int circle_x = g_screenWidth / 2;
    int circle_y = g_screenHeight / 2;
    int rad = hackConfig["AIM::SIZE"];
    return (x - circle_x) * (x - circle_x) + (y - circle_y) * (y - circle_y) <= rad * rad;
}

ASTExtraPlayerCharacter *GetTargetByCrosshairDistance() {
    ASTExtraPlayerCharacter *result = 0;
    float max = std::numeric_limits<float>::infinity();

    UWorld *GWorld = *(UWorld **) (GWorld_Offset);
    if (GWorld) {
        ULevel *PersistentLevel = GWorld->PersistentLevel;
        if (GWorld->PersistentLevel) {
            TArray<AActor *> Actors = PersistentLevel->Actors;

            if (g_LocalPlayer) {
                for (int i = 0; i < Actors.Num(); i++) {
                    if (Actors[i] && Actors[i]->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                        auto Actor = (ASTExtraPlayerCharacter *) Actors[i];

                        if (Actor->PlayerKey == g_LocalPlayer->PlayerKey)
                            continue;

                        if (Actor->TeamID == g_LocalPlayer->TeamID)
                            continue;

                        if (Actor->bDead)
                            continue;

                        if (hackConfig["AIM::KNOCKED"]) {
                            if (Actor->Health == 0.0f)
                                continue;
                        }

                        auto Root = Actor->GetBonePos("Root");
                        auto Head = Actor->GetBonePos("Head");

                        FVector RootSc = WorldToScreen(Root);
                        FVector HeadSc = WorldToScreen(Head);
                        if (RootSc.Z > 0 && HeadSc.Z > 0) { 
                            float height = abs(HeadSc.Y - RootSc.Y);
                            float width = height * 0.65f;

                            FVector middlePoint = {HeadSc.X + (width / 2), HeadSc.Y + (height / 2), 0};
                            if ((middlePoint.X >= 0 && middlePoint.X <= g_screenWidth) && (middlePoint.Y >= 0 && middlePoint.Y <= g_screenHeight)) {
                                FVector2D v2Middle = FVector2D((float) (g_screenWidth / 2), (float) (g_screenHeight / 2));
                                FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);

                                if (isInsideFOV((int) middlePoint.X, (int) middlePoint.Y)) {
                                    float dist = FVector2D::Distance(v2Middle, v2Loc);

                                    if (dist < max) {
                                        max = dist;
                                        result = Actor;
                                    }
                                }
								
                            }
                        }
                    }
                }
            }
        }
    }

    return result;
}


                                                                     
// ================================================================================================================================ //
void native_onCanvasDraw(JNIEnv *env, jobject obj, jobject canvas, int screenWidth, int screenHeight, float screenDensity) {
    static Canvas *m_Canvas = 0;
    if (!m_Canvas) {
        m_Canvas = new Canvas(env, screenWidth, screenHeight, screenDensity);
    }

    m_Canvas->UpdateCanvas(canvas);
    g_screenWidth = screenWidth;
    g_screenHeight = screenHeight;
}

// ================================================================================================================================ //
void *Memory_Thread(void *) {
    uint8_t shellCode_AimBullet[] = {0x14, 0x10, 0x9F, 0xE5, 0x14, 0x20, 0x9F, 0xE5, 0x14, 0x30, 0x9F, 0xE5, 0x00, 0x10, 0x80, 0xE5, 0x04, 0x20, 0x80, 0xE5, 0x08, 0x30, 0x80, 0xE5, 0x1E, 0xFF, 0x2F, 0xE1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
    uint8_t origCode_AimBullet[40]{0x00};

    while (true) {
        auto t1 = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();

        if (bPatternCompleted) {

            ASTExtraPlayerCharacter *localPlayer = 0;
            ASTExtraPlayerController *localPlayerController = 0;

            UWorld *GWorld = *(UWorld **) (GWorld_Offset);
            if (GWorld) {
                UNetDriver *NetDriver = GWorld->NetDriver;
                if (NetDriver) {
                    UNetConnection *ServerConnection = NetDriver->ServerConnection;
                    if (ServerConnection) {
                        localPlayerController = (ASTExtraPlayerController *) ServerConnection->PlayerController;
                    }
                }

                if (localPlayerController) {
                    ULevel *PersistentLevel = GWorld->PersistentLevel;
                    if (PersistentLevel) {
                        TArray<AActor *> Actors = PersistentLevel->Actors;

                        for (int i = 0; i < Actors.Num(); i++) {
                            if (Actors[i] && Actors[i]->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                                auto Player = (ASTExtraPlayerCharacter *) Actors[i];
                                if (Player->PlayerKey == ((ASTExtraPlayerController *) localPlayerController)->PlayerKey) {
                                    localPlayer = Player;
                                    break;
                                }
                            }
                        }
                    }
                }
            }
           
            g_LocalPlayer = localPlayer;
            g_PlayerController = localPlayerController;

            if (g_LocalPlayer && g_PlayerController) {
                if (hackConfig["AIM::AIMBULLET"]) {
                    static bool bAimBulletPatch = false;
                    bool bAimBulletOK = false;

                    UCharacterWeaponManagerComponent *WeaponManagerComponent = g_LocalPlayer->WeaponManagerComponent;
                    if (WeaponManagerComponent) {
                        ASTExtraShootWeapon *CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                        if (CurrentWeaponReplicated) {
                            UShootWeaponEntity *ShootWeaponEntityComponent = CurrentWeaponReplicated->ShootWeaponEntityComp;
                            if (ShootWeaponEntityComponent) {
                                bool bReady = hackConfig["AIM::TRIGGER"] == 0;
                                if (hackConfig["AIM::TRIGGER"] == 1) {
                                    bReady = g_LocalPlayer->bIsWeaponFiring;
                                }
                                if (hackConfig["AIM::TRIGGER"] == 2) {
                                    bReady = g_LocalPlayer->bIsGunADS;
                                }
                                if (hackConfig["AIM::TRIGGER"] == 3) {
                                    bReady = (g_LocalPlayer->bIsWeaponFiring && g_LocalPlayer->bIsGunADS);
                                }
                                if (hackConfig["AIM::TRIGGER"] == 4) {
                                    bReady = (g_LocalPlayer->bIsWeaponFiring || g_LocalPlayer->bIsGunADS);
                                }
                                if (bReady) {
                                    ASTExtraPlayerCharacter *Target = 0;
                                    if (hackConfig["AIM::TARGET"] == 0) {
                                        Target = GetTargetByDistance();
                                    }
                                    if (hackConfig["AIM::TARGET"] == 1) {
                                        Target = GetTargetByCrosshairDistance();
                                    }
                                    if (Target) {
                                        FVector targetAimPos = Target->GetBonePos("Head");
                                        if (hackConfig["AIM::LOCATION"] == 1) {
                                            targetAimPos = Target->GetBonePos("spine_02");
                                        }

                                        if (hackConfig["AIM::PREDICTION"]) {
                                            ASTExtraVehicleBase *CurrentVehicle = Target->CurrentVehicle;
                                            if (CurrentVehicle) {
                                                FVector LinearVelocity = CurrentVehicle->ReplicatedMovement.LinearVelocity;

                                                float dist = g_LocalPlayer->GetDistanceTo(Target);
                                                auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;

                                                targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(LinearVelocity, timeToTravel));
                                            } else {
                                                FVector Velocity = Target->GetVelocity();

                                                float dist = g_LocalPlayer->GetDistanceTo(Target);
                                                auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;

                                                targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(Velocity, timeToTravel));
                                            }
                                        }

                                        if (hackConfig["AIM::AIMBULLET"]) {
                                            if (origCode_AimBullet[0] == 0x00) {
                                                Tools::Read((void *) (AimBullet_Offset), origCode_AimBullet, sizeof(origCode_AimBullet));
                                            }

                                            if (*(uint8_t *) (AimBullet_Offset) == 0xF0) {
                                                if (Tools::Write((void *) (AimBullet_Offset), shellCode_AimBullet, sizeof(shellCode_AimBullet))) {
                                                    bAimBulletPatch = true;
                                                }
                                            }

                                            if (bAimBulletPatch) {
                                                if (Tools::Write((void *) (AimBullet_Offset + 0x1C), &targetAimPos, sizeof(FVector))) {
                                                    bAimBulletOK = true;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if (origCode_AimBullet[0] != 0x00) {
                        if (bAimBulletPatch && !bAimBulletOK) {
                            Tools::Write((void *) (AimBullet_Offset), origCode_AimBullet, sizeof(origCode_AimBullet));
                            bAimBulletPatch = false;
                        }
                    }
                }
            }
        }
        auto td = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count() - t1;
        std::this_thread::sleep_for(std::chrono::milliseconds(std::max(std::min(0LL, SLEEP_TIME - td), SLEEP_TIME)));
    }
    return 0;
}
// ================================================================================================================================ //
void *Init_Thread(void *) {
    while (!g_UE4) {
        g_UE4 = Tools::GetBaseAddress("libUE4.so");
        sleep(1);
    }

    LOGI("libUE4.so: %p", g_UE4);

    GWorld_Offset = Tools::FindPattern("libUE4.so", "?? ?? ?? E5 00 60 8F E0 ?? ?? ?? E5 04 00 80 E0");
    if (GWorld_Offset) {
        GWorld_Offset += *(uintptr_t *) ((GWorld_Offset + *(uint8_t *) (GWorld_Offset) + 0x8)) + 0x18;
        LOGI("GWorld_Offset: %p", GWorld_Offset - g_UE4);
    } else {
        LOGI("Failed to search GWorld pattern!");
    }

    GUObjectArray_Offset = Tools::FindPattern("libUE4.so", "?? ?? ?? E5 1F 01 C2 E7 04 00 84 E5 00 20 A0 E3");
    if (GUObjectArray_Offset) {
        GUObjectArray_Offset += *(uintptr_t *) ((GUObjectArray_Offset + *(uint8_t *) (GUObjectArray_Offset) + 0x8)) + 0x18;
        LOGI("GUObjectArray_Offset: %p", GUObjectArray_Offset - g_UE4);
    } else {
        LOGI("Failed to search GUObjectArray pattern!");
    }

    GNames_Offset = Tools::FindPattern("libUE4.so", "?? ?? ?? E5 00 00 8F E0 ?? ?? ?? E5 04 00 A0 E1 10 8C BD E8");
    if (GNames_Offset) {
        GNames_Offset += *(uintptr_t *) ((GNames_Offset + *(uint8_t *) (GNames_Offset) + 0x8)) + 0x10;
        LOGI("GNames_Offset: %p", GNames_Offset - g_UE4);
    } else {
        LOGI("Failed to search GNames pattern!");
    }

    CanvasMap_Offset = Tools::FindPattern("libUE4.so", "?? ?? ?? E5 24 10 4B E2 18 40 0B E5 00 20 A0 E3");
    if (CanvasMap_Offset) {
        CanvasMap_Offset += *(uintptr_t *) ((CanvasMap_Offset + *(uint8_t *) (CanvasMap_Offset) + 0x8)) + 0x1C;
        LOGI("CanvasMap_Offset: %p", CanvasMap_Offset - g_UE4);
    } else {
        LOGI("Failed to search CanvasMap pattern!");
    }

    AimBullet_Offset = Tools::FindPattern("libUE4.so", "F0 4F 2D E9 1C B0 8D E2 04 D0 4D E2 06 8B 2D ED D0 D0 4D E2 0C 70 8B E2 44 C0 4B E2 01 50 A0 E1 00 40 A0 E1 83 00 97 E8 08 60 9B E5 4C 00 8C E8 50 20 4B E2 83 00 82 E8 ?? ?? 95 E5");
    LOGI("AimBullet_Offset: %p", AimBullet_Offset - g_UE4);

    unsigned long page_size = sysconf(_SC_PAGESIZE);
    unsigned long size = page_size * sizeof(uintptr_t);
    if (mprotect((void *) ((uintptr_t) AimBullet_Offset - ((uintptr_t) AimBullet_Offset % page_size) - page_size), (size_t) size, PROT_EXEC | PROT_READ | PROT_WRITE) != 0) {
        LOGI("mprotect failed! Feature may not be working!");
    } else {
        LOGI("mprotect succeeded!");
    }

    FName::GNames = *(TNameEntryArray **) (GNames_Offset);
    UObject::GUObjectArray = (FUObjectArray *) (GUObjectArray_Offset);

    bPatternCompleted = true;

    pthread_t t;
    pthread_create(&t, 0, Memory_Thread, 0);

    return 0;
}

void native_Init(JNIEnv *env, jclass clazz, jobject mContext) {
    pthread_t t;
    pthread_create(&t, 0, Init_Thread, 0);
}
