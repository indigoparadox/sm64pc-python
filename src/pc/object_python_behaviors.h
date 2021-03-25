
#include "behavior_data.h"

#define OBJECTS_ENCAPSULATE( bhv ) \
    pBhvNative = PyCapsule_New((void *)bhv, "objects.Behavior._native_behavior", NULL); \
    if (PyErr_Occurred()) { \
        fprintf(stderr, "during behavior constant:\n"); \
        PyErr_Print(); \
        return NULL; \
    } \
    Py_INCREF(pBhvNative); \
    pBhvArgs = PyTuple_New(1); \
    PyTuple_SetItem(pBhvArgs, 0, pBhvNative); \
    pBhv = PyObject_CallObject((PyObject *)&PyObjectBehaviorType, pBhvArgs); \
    if (0 > PyModule_AddObject(pObjects, #bhv, pBhv)) { \
        Py_XDECREF(pBhvNative); \
        Py_XDECREF(pBhv); \
        Py_XDECREF(pBhvArgs); \
        Py_DECREF(pObjects); \
        return NULL; \
    } \
    Py_XDECREF(pBhvArgs);

#define OBJECTS_ADD_BEHAVIORS() \
    OBJECTS_ENCAPSULATE( bhvStarDoor ); \
    OBJECTS_ENCAPSULATE( bhvMrI ); \
    OBJECTS_ENCAPSULATE( bhvMrIBody ); \
    OBJECTS_ENCAPSULATE( bhvMrIParticle ); \
    OBJECTS_ENCAPSULATE( bhvPurpleParticle ); \
    OBJECTS_ENCAPSULATE( bhvGiantPole ); \
    OBJECTS_ENCAPSULATE( bhvPoleGrabbing ); \
    OBJECTS_ENCAPSULATE( bhvThiHugeIslandTop ); \
    OBJECTS_ENCAPSULATE( bhvThiTinyIslandTop ); \
    OBJECTS_ENCAPSULATE( bhvCapSwitchBase ); \
    OBJECTS_ENCAPSULATE( bhvCapSwitch ); \
    OBJECTS_ENCAPSULATE( bhvKingBobomb ); \
    OBJECTS_ENCAPSULATE( bhvBobombAnchorMario ); \
    OBJECTS_ENCAPSULATE( bhvBetaChestBottom ); \
    OBJECTS_ENCAPSULATE( bhvBetaChestLid ); \
    OBJECTS_ENCAPSULATE( bhvBubbleParticleSpawner ); \
    OBJECTS_ENCAPSULATE( bhvBubbleMaybe ); \
    OBJECTS_ENCAPSULATE( bhvSmallWaterWave ); \
    OBJECTS_ENCAPSULATE( bhvSmallWaterWave398 ); \
    OBJECTS_ENCAPSULATE( bhvWaterAirBubble ); \
    OBJECTS_ENCAPSULATE( bhvSmallParticle ); \
    OBJECTS_ENCAPSULATE( bhvPlungeBubble ); \
    OBJECTS_ENCAPSULATE( bhvSmallParticleSnow ); \
    OBJECTS_ENCAPSULATE( bhvSmallParticleBubbles ); \
    OBJECTS_ENCAPSULATE( bhvFishGroup ); \
    OBJECTS_ENCAPSULATE( bhvCannon ); \
    OBJECTS_ENCAPSULATE( bhvCannonBarrel ); \
    OBJECTS_ENCAPSULATE( bhvCannonBaseUnused ); \
    OBJECTS_ENCAPSULATE( bhvChuckya ); \
    OBJECTS_ENCAPSULATE( bhvChuckyaAnchorMario ); \
    OBJECTS_ENCAPSULATE( bhvRotatingPlatform ); \
    OBJECTS_ENCAPSULATE( bhvTower ); \
    OBJECTS_ENCAPSULATE( bhvBulletBillCannon ); \
    OBJECTS_ENCAPSULATE( bhvWfBreakableWallRight ); \
    OBJECTS_ENCAPSULATE( bhvWfBreakableWallLeft ); \
    OBJECTS_ENCAPSULATE( bhvKickableBoard ); \
    OBJECTS_ENCAPSULATE( bhvTowerDoor ); \
    OBJECTS_ENCAPSULATE( bhvRotatingCounterClockwise ); \
    OBJECTS_ENCAPSULATE( bhvWfRotatingWoodenPlatform ); \
    OBJECTS_ENCAPSULATE( bhvKoopaShellUnderwater ); \
    OBJECTS_ENCAPSULATE( bhvExitPodiumWarp ); \
    OBJECTS_ENCAPSULATE( bhvFadingWarp ); \
    OBJECTS_ENCAPSULATE( bhvWarp ); \
    OBJECTS_ENCAPSULATE( bhvWarpPipe ); \
    OBJECTS_ENCAPSULATE( bhvWhitePuffExplosion ); \
    OBJECTS_ENCAPSULATE( bhvSpawnedStar ); \
    OBJECTS_ENCAPSULATE( bhvSpawnedStarNoLevelExit ); \
    OBJECTS_ENCAPSULATE( bhvMrIBlueCoin ); \
    OBJECTS_ENCAPSULATE( bhvCoinInsideBoo ); \
    OBJECTS_ENCAPSULATE( bhvCoinFormationSpawn ); \
    OBJECTS_ENCAPSULATE( bhvCoinFormation ); \
    OBJECTS_ENCAPSULATE( bhvOneCoin ); \
    OBJECTS_ENCAPSULATE( bhvYellowCoin ); \
    OBJECTS_ENCAPSULATE( bhvTemporaryYellowCoin ); \
    OBJECTS_ENCAPSULATE( bhvThreeCoinsSpawn ); \
    OBJECTS_ENCAPSULATE( bhvTenCoinsSpawn ); \
    OBJECTS_ENCAPSULATE( bhvSingleCoinGetsSpawned ); \
    OBJECTS_ENCAPSULATE( bhvCoinSparkles ); \
    OBJECTS_ENCAPSULATE( bhvGoldenCoinSparkles ); \
    OBJECTS_ENCAPSULATE( bhvWallTinyStarParticle ); \
    OBJECTS_ENCAPSULATE( bhvVertStarParticleSpawner ); \
    OBJECTS_ENCAPSULATE( bhvPoundTinyStarParticle ); \
    OBJECTS_ENCAPSULATE( bhvHorStarParticleSpawner ); \
    OBJECTS_ENCAPSULATE( bhvPunchTinyTriangle ); \
    OBJECTS_ENCAPSULATE( bhvTriangleParticleSpawner ); \
    OBJECTS_ENCAPSULATE( bhvDoorWarp ); \
    OBJECTS_ENCAPSULATE( bhvDoor ); \
    OBJECTS_ENCAPSULATE( bhvGrindel ); \
    OBJECTS_ENCAPSULATE( bhvThwomp2 ); \
    OBJECTS_ENCAPSULATE( bhvThwomp ); \
    OBJECTS_ENCAPSULATE( bhvTumblingBridgePlatform ); \
    OBJECTS_ENCAPSULATE( bhvWfTumblingBridge ); \
    OBJECTS_ENCAPSULATE( bhvBbhTumblingBridge ); \
    OBJECTS_ENCAPSULATE( bhvLllTumblingBridge ); \
    OBJECTS_ENCAPSULATE( bhvFlame ); \
    OBJECTS_ENCAPSULATE( bhvAnotherElavator ); \
    OBJECTS_ENCAPSULATE( bhvRrElevatorPlatform ); \
    OBJECTS_ENCAPSULATE( bhvHmcElevatorPlatform ); \
    OBJECTS_ENCAPSULATE( bhvWaterMist ); \
    OBJECTS_ENCAPSULATE( bhvBreathParticleSpawner ); \
    OBJECTS_ENCAPSULATE( bhvBreakBoxTriangle ); \
    OBJECTS_ENCAPSULATE( bhvWaterMist2 ); \
    OBJECTS_ENCAPSULATE( bhvMistCircParticleSpawner ); \
    OBJECTS_ENCAPSULATE( bhvDirtParticleSpawner ); \
    OBJECTS_ENCAPSULATE( bhvSnowParticleSpawner ); \
    OBJECTS_ENCAPSULATE( bhvWind ); \
    OBJECTS_ENCAPSULATE( bhvEndToad ); \
    OBJECTS_ENCAPSULATE( bhvEndPeach ); \
    OBJECTS_ENCAPSULATE( bhvUnusedParticleSpawn ); \
    OBJECTS_ENCAPSULATE( bhvUkiki ); \
    OBJECTS_ENCAPSULATE( bhvUkikiCageChild ); \
    OBJECTS_ENCAPSULATE( bhvUkikiCageStar ); \
    OBJECTS_ENCAPSULATE( bhvUkikiCage ); \
    OBJECTS_ENCAPSULATE( bhvBitfsSinkingPlatforms ); \
    OBJECTS_ENCAPSULATE( bhvBitfsSinkingCagePlatform ); \
    OBJECTS_ENCAPSULATE( bhvDddMovingPole ); \
    OBJECTS_ENCAPSULATE( bhvBitfsTiltingInvertedPyramid ); \
    OBJECTS_ENCAPSULATE( bhvSquishablePlatform ); \
    OBJECTS_ENCAPSULATE( bhvCutOutObject ); \
    OBJECTS_ENCAPSULATE( bhvBetaMovingFlamesSpawn ); \
    OBJECTS_ENCAPSULATE( bhvBetaMovingFlames ); \
    OBJECTS_ENCAPSULATE( bhvRrRotatingBridgePlatform ); \
    OBJECTS_ENCAPSULATE( bhvFlamethrower ); \
    OBJECTS_ENCAPSULATE( bhvFlamethrowerFlame ); \
    OBJECTS_ENCAPSULATE( bhvBouncingFireball ); \
    OBJECTS_ENCAPSULATE( bhvBouncingFireballFlame ); \
    OBJECTS_ENCAPSULATE( bhvBowserShockWave ); \
    OBJECTS_ENCAPSULATE( bhvFireParticleSpawner ); \
    OBJECTS_ENCAPSULATE( bhvBlackSmokeMario ); \
    OBJECTS_ENCAPSULATE( bhvBlackSmokeBowser ); \
    OBJECTS_ENCAPSULATE( bhvBlackSmokeUpward ); \
    OBJECTS_ENCAPSULATE( bhvBetaFishSplashSpawner ); \
    OBJECTS_ENCAPSULATE( bhvSpindrift ); \
    OBJECTS_ENCAPSULATE( bhvTowerPlatformGroup ); \
    OBJECTS_ENCAPSULATE( bhvWfSlidingTowerPlatform ); \
    OBJECTS_ENCAPSULATE( bhvWfElevatorTowerPlatform ); \
    OBJECTS_ENCAPSULATE( bhvWfSolidTowerPlatform ); \
    OBJECTS_ENCAPSULATE( bhvLeafParticleSpawner ); \
    OBJECTS_ENCAPSULATE( bhvTreeSnow ); \
    OBJECTS_ENCAPSULATE( bhvTreeLeaf ); \
    OBJECTS_ENCAPSULATE( bhvAnotherTiltingPlatform ); \
    OBJECTS_ENCAPSULATE( bhvSquarishPathMoving ); \
    OBJECTS_ENCAPSULATE( bhvPiranhaPlantBubble ); \
    OBJECTS_ENCAPSULATE( bhvPiranhaPlantWakingBubbles ); \
    OBJECTS_ENCAPSULATE( bhvFloorSwitchAnimatesObject ); \
    OBJECTS_ENCAPSULATE( bhvFloorSwitchGrills ); \
    OBJECTS_ENCAPSULATE( bhvFloorSwitchHardcodedModel ); \
    OBJECTS_ENCAPSULATE( bhvFloorSwitchHiddenObjects ); \
    OBJECTS_ENCAPSULATE( bhvHiddenObject ); \
    OBJECTS_ENCAPSULATE( bhvBreakableBox ); \
    OBJECTS_ENCAPSULATE( bhvPushableMetalBox ); \
    OBJECTS_ENCAPSULATE( bhvHeaveHo ); \
    OBJECTS_ENCAPSULATE( bhvHeaveHoThrowMario ); \
    OBJECTS_ENCAPSULATE( bhvCcmTouchedStarSpawn ); \
    OBJECTS_ENCAPSULATE( bhvUnusedPoundablePlatform ); \
    OBJECTS_ENCAPSULATE( bhvBetaTrampolineTop ); \
    OBJECTS_ENCAPSULATE( bhvBetaTrampolineSpring ); \
    OBJECTS_ENCAPSULATE( bhvJumpingBox ); \
    OBJECTS_ENCAPSULATE( bhvBooCage ); \
    OBJECTS_ENCAPSULATE( bhvStub ); \
    OBJECTS_ENCAPSULATE( bhvIgloo ); \
    OBJECTS_ENCAPSULATE( bhvBowserKey ); \
    OBJECTS_ENCAPSULATE( bhvGrandStar ); \
    OBJECTS_ENCAPSULATE( bhvBetaBooKey ); \
    OBJECTS_ENCAPSULATE( bhvAlphaBooKey ); \
    OBJECTS_ENCAPSULATE( bhvBulletBill ); \
    OBJECTS_ENCAPSULATE( bhvWhitePuffSmoke ); \
    OBJECTS_ENCAPSULATE( bhvBowserTailAnchor ); \
    OBJECTS_ENCAPSULATE( bhvBowser ); \
    OBJECTS_ENCAPSULATE( bhvBowserBodyAnchor ); \
    OBJECTS_ENCAPSULATE( bhvBowserFlameSpawn ); \
    OBJECTS_ENCAPSULATE( bhvTiltingBowserLavaPlatform ); \
    OBJECTS_ENCAPSULATE( bhvFallingBowserPlatform ); \
    OBJECTS_ENCAPSULATE( bhvBlueBowserFlame ); \
    OBJECTS_ENCAPSULATE( bhvFlameFloatingLanding ); \
    OBJECTS_ENCAPSULATE( bhvBlueFlamesGroup ); \
    OBJECTS_ENCAPSULATE( bhvFlameBouncing ); \
    OBJECTS_ENCAPSULATE( bhvFlameMovingForwardGrowing ); \
    OBJECTS_ENCAPSULATE( bhvFlameBowser ); \
    OBJECTS_ENCAPSULATE( bhvFlameLargeBurningOut ); \
    OBJECTS_ENCAPSULATE( bhvBlueFish ); \
    OBJECTS_ENCAPSULATE( bhvTankFishGroup ); \
    OBJECTS_ENCAPSULATE( bhvCheckerboardElevatorGroup ); \
    OBJECTS_ENCAPSULATE( bhvCheckerboardPlatformSub ); \
    OBJECTS_ENCAPSULATE( bhvBowserKeyUnlockDoor ); \
    OBJECTS_ENCAPSULATE( bhvBowserKeyCourseExit ); \
    OBJECTS_ENCAPSULATE( bhvInvisibleObjectsUnderBridge ); \
    OBJECTS_ENCAPSULATE( bhvWaterLevelPillar ); \
    OBJECTS_ENCAPSULATE( bhvDddWarp ); \
    OBJECTS_ENCAPSULATE( bhvMoatGrills ); \
    OBJECTS_ENCAPSULATE( bhvClockMinuteHand ); \
    OBJECTS_ENCAPSULATE( bhvClockHourHand ); \
    OBJECTS_ENCAPSULATE( bhvMacroUkiki ); \
    OBJECTS_ENCAPSULATE( bhvStub1D0C ); \
    OBJECTS_ENCAPSULATE( bhvLllRotatingHexagonalPlatform ); \
    OBJECTS_ENCAPSULATE( bhvLllSinkingRockBlock ); \
    OBJECTS_ENCAPSULATE( bhvStub1D70 ); \
    OBJECTS_ENCAPSULATE( bhvLllMovingOctagonalMeshPlatform ); \
    OBJECTS_ENCAPSULATE( bhvSnowBall ); \
    OBJECTS_ENCAPSULATE( bhvLllRotatingBlockWithFireBars ); \
    OBJECTS_ENCAPSULATE( bhvLllRotatingHexFlame ); \
    OBJECTS_ENCAPSULATE( bhvLllWoodPiece ); \
    OBJECTS_ENCAPSULATE( bhvLllFloatingWoodBridge ); \
    OBJECTS_ENCAPSULATE( bhvVolcanoFlames ); \
    OBJECTS_ENCAPSULATE( bhvLllRotatingHexagonalRing ); \
    OBJECTS_ENCAPSULATE( bhvLllSinkingRectangularPlatform ); \
    OBJECTS_ENCAPSULATE( bhvLllSinkingSquarePlatforms ); \
    OBJECTS_ENCAPSULATE( bhvLllTiltingInvertedPyramid ); \
    OBJECTS_ENCAPSULATE( bhvKoopaShell ); \
    OBJECTS_ENCAPSULATE( bhvKoopaShellFlame ); \
    OBJECTS_ENCAPSULATE( bhvToxBox ); \
    OBJECTS_ENCAPSULATE( bhvPiranhaPlant ); \
    OBJECTS_ENCAPSULATE( bhvLllHexagonalMesh ); \
    OBJECTS_ENCAPSULATE( bhvLllBowserPuzzlePiece ); \
    OBJECTS_ENCAPSULATE( bhvLllBowserPuzzle ); \
    OBJECTS_ENCAPSULATE( bhvTuxiesMother ); \
    OBJECTS_ENCAPSULATE( bhvPenguinBaby ); \
    OBJECTS_ENCAPSULATE( bhvSmallPenguin ); \
    OBJECTS_ENCAPSULATE( bhvFish2 ); \
    OBJECTS_ENCAPSULATE( bhvFish3 ); \
    OBJECTS_ENCAPSULATE( bhvLargeFishGroup ); \
    OBJECTS_ENCAPSULATE( bhvFish ); \
    OBJECTS_ENCAPSULATE( bhvWdwExpressElevator ); \
    OBJECTS_ENCAPSULATE( bhvWdwExpressElevatorPlatform ); \
    OBJECTS_ENCAPSULATE( bhvChirpChirp ); \
    OBJECTS_ENCAPSULATE( bhvChirpChirpUnused ); \
    OBJECTS_ENCAPSULATE( bhvBub ); \
    OBJECTS_ENCAPSULATE( bhvExclamationBox ); \
    OBJECTS_ENCAPSULATE( bhvRotatingExclamationMark ); \
    OBJECTS_ENCAPSULATE( bhvSoundSpawner ); \
    OBJECTS_ENCAPSULATE( bhvRockSolid ); \
    OBJECTS_ENCAPSULATE( bhvBowserSubDoor ); \
    OBJECTS_ENCAPSULATE( bhvBowsersSub ); \
    OBJECTS_ENCAPSULATE( bhvSushiShark ); \
    OBJECTS_ENCAPSULATE( bhvSushiSharkCollisionChild ); \
    OBJECTS_ENCAPSULATE( bhvJrbSlidingBox ); \
    OBJECTS_ENCAPSULATE( bhvShipPart3 ); \
    OBJECTS_ENCAPSULATE( bhvInSunkenShip3 ); \
    OBJECTS_ENCAPSULATE( bhvSunkenShipPart ); \
    OBJECTS_ENCAPSULATE( bhvSunkenShipPart2 ); \
    OBJECTS_ENCAPSULATE( bhvInSunkenShip ); \
    OBJECTS_ENCAPSULATE( bhvInSunkenShip2 ); \
    OBJECTS_ENCAPSULATE( bhvMistParticleSpawner ); \
    OBJECTS_ENCAPSULATE( bhvWhitePuff1 ); \
    OBJECTS_ENCAPSULATE( bhvWhitePuff2 ); \
    OBJECTS_ENCAPSULATE( bhvWhitePuffSmoke2 ); \
    OBJECTS_ENCAPSULATE( bhvPurpleSwitchHiddenBoxes ); \
    OBJECTS_ENCAPSULATE( bhvBlueCoinSwitch ); \
    OBJECTS_ENCAPSULATE( bhvHiddenBlueCoin ); \
    OBJECTS_ENCAPSULATE( bhvOpenableCageDoor ); \
    OBJECTS_ENCAPSULATE( bhvOpenableGrill ); \
    OBJECTS_ENCAPSULATE( bhvWaterLevelDiamond ); \
    OBJECTS_ENCAPSULATE( bhvInitializeChangingWaterLevel ); \
    OBJECTS_ENCAPSULATE( bhvTweesterSandParticle ); \
    OBJECTS_ENCAPSULATE( bhvTweester ); \
    OBJECTS_ENCAPSULATE( bhvMerryGoRoundBooManager ); \
    OBJECTS_ENCAPSULATE( bhvPlaysMusicTrackWhenTouched ); \
    OBJECTS_ENCAPSULATE( bhvAnimatedTexture ); \
    OBJECTS_ENCAPSULATE( bhvBooInCastle ); \
    OBJECTS_ENCAPSULATE( bhvBooWithCage ); \
    OBJECTS_ENCAPSULATE( bhvBalconyBigBoo ); \
    OBJECTS_ENCAPSULATE( bhvMerryGoRoundBigBoo ); \
    OBJECTS_ENCAPSULATE( bhvGhostHuntBigBoo ); \
    OBJECTS_ENCAPSULATE( bhvCourtyardBooTriplet ); \
    OBJECTS_ENCAPSULATE( bhvBoo ); \
    OBJECTS_ENCAPSULATE( bhvMerryGoRoundBoo ); \
    OBJECTS_ENCAPSULATE( bhvGhostHuntBoo ); \
    OBJECTS_ENCAPSULATE( bhvHiddenStaircaseStep ); \
    OBJECTS_ENCAPSULATE( bhvBooBossSpawnedBridge ); \
    OBJECTS_ENCAPSULATE( bhvBbhTiltingTrapPlatform ); \
    OBJECTS_ENCAPSULATE( bhvHauntedBookshelf ); \
    OBJECTS_ENCAPSULATE( bhvMeshElevator ); \
    OBJECTS_ENCAPSULATE( bhvMerryGoRound ); \
    OBJECTS_ENCAPSULATE( bhvInsideCannon ); \
    OBJECTS_ENCAPSULATE( bhvBetaBowserAnchor ); \
    OBJECTS_ENCAPSULATE( bhvStaticCheckeredPlatform ); \
    OBJECTS_ENCAPSULATE( bhvStar ); \
    OBJECTS_ENCAPSULATE( bhvStaticObject ); \
    OBJECTS_ENCAPSULATE( bhvCastleFloorTrap ); \
    OBJECTS_ENCAPSULATE( bhvFloorTrapInCastle ); \
    OBJECTS_ENCAPSULATE( bhvTree ); \
    OBJECTS_ENCAPSULATE( bhvSparkle ); \
    OBJECTS_ENCAPSULATE( bhvSparkleSpawn ); \
    OBJECTS_ENCAPSULATE( bhvSparkleParticleSpawner ); \
    OBJECTS_ENCAPSULATE( bhvScuttlebug ); \
    OBJECTS_ENCAPSULATE( bhvScuttlebugSpawn ); \
    OBJECTS_ENCAPSULATE( bhvWhompKingBoss ); \
    OBJECTS_ENCAPSULATE( bhvSmallWhomp ); \
    OBJECTS_ENCAPSULATE( bhvWaterSplash ); \
    OBJECTS_ENCAPSULATE( bhvWaterDroplet ); \
    OBJECTS_ENCAPSULATE( bhvWaterDropletSplash ); \
    OBJECTS_ENCAPSULATE( bhvBubbleSplash ); \
    OBJECTS_ENCAPSULATE( bhvIdleWaterWave ); \
    OBJECTS_ENCAPSULATE( bhvObjectWaterSplash ); \
    OBJECTS_ENCAPSULATE( bhvShallowWaterWave ); \
    OBJECTS_ENCAPSULATE( bhvShallowWaterSplash ); \
    OBJECTS_ENCAPSULATE( bhvObjectWaveTrail ); \
    OBJECTS_ENCAPSULATE( bhvWaveTrail ); \
    OBJECTS_ENCAPSULATE( bhvTinyStrongWindParticle ); \
    OBJECTS_ENCAPSULATE( bhvStrongWindParticle ); \
    OBJECTS_ENCAPSULATE( bhvSLSnowmanWind ); \
    OBJECTS_ENCAPSULATE( bhvSLWalkingPenguin ); \
    OBJECTS_ENCAPSULATE( bhvYellowBall ); \
    OBJECTS_ENCAPSULATE( bhvMario ); \
    OBJECTS_ENCAPSULATE( bhvToadMessage ); \
    OBJECTS_ENCAPSULATE( bhvUnlockDoorStar ); \
    OBJECTS_ENCAPSULATE( bhvWarps60 ); \
    OBJECTS_ENCAPSULATE( bhvWarps64 ); \
    OBJECTS_ENCAPSULATE( bhvWarps68 ); \
    OBJECTS_ENCAPSULATE( bhvWarps6C ); \
    OBJECTS_ENCAPSULATE( bhvDeathWarp ); \
    OBJECTS_ENCAPSULATE( bhvWarps74 ); \
    OBJECTS_ENCAPSULATE( bhvWarps78 ); \
    OBJECTS_ENCAPSULATE( bhvWarps7C ); \
    OBJECTS_ENCAPSULATE( bhvPaintingDeathWarp ); \
    OBJECTS_ENCAPSULATE( bhvWarps84 ); \
    OBJECTS_ENCAPSULATE( bhvWarps88 ); \
    OBJECTS_ENCAPSULATE( bhvWarps8C ); \
    OBJECTS_ENCAPSULATE( bhvWarps90 ); \
    OBJECTS_ENCAPSULATE( bhvWarps94 ); \
    OBJECTS_ENCAPSULATE( bhvRandomAnimatedTexture ); \
    OBJECTS_ENCAPSULATE( bhvYellowBackgroundInMenu ); \
    OBJECTS_ENCAPSULATE( bhvMenuButton ); \
    OBJECTS_ENCAPSULATE( bhvMenuButtonManager ); \
    OBJECTS_ENCAPSULATE( bhvActSelectorStarType ); \
    OBJECTS_ENCAPSULATE( bhvActSelector ); \
    OBJECTS_ENCAPSULATE( bhvMovingYellowCoin ); \
    OBJECTS_ENCAPSULATE( bhvMovingBlueCoin ); \
    OBJECTS_ENCAPSULATE( bhvBlueCoinSliding ); \
    OBJECTS_ENCAPSULATE( bhvBlueCoinJumping ); \
    OBJECTS_ENCAPSULATE( bhvSeaweed ); \
    OBJECTS_ENCAPSULATE( bhvSeaweedBundle ); \
    OBJECTS_ENCAPSULATE( bhvBobomb ); \
    OBJECTS_ENCAPSULATE( bhvBobombFuseSmoke ); \
    OBJECTS_ENCAPSULATE( bhvBobombBuddy ); \
    OBJECTS_ENCAPSULATE( bhvBobombBuddyOpensCannon ); \
    OBJECTS_ENCAPSULATE( bhvCannonClosed ); \
    OBJECTS_ENCAPSULATE( bhvWhirlpool ); \
    OBJECTS_ENCAPSULATE( bhvJetStream ); \
    OBJECTS_ENCAPSULATE( bhvMessagePanel ); \
    OBJECTS_ENCAPSULATE( bhvSignOnWall ); \
    OBJECTS_ENCAPSULATE( bhvHomingAmp ); \
    OBJECTS_ENCAPSULATE( bhvCirclingAmp ); \
    OBJECTS_ENCAPSULATE( bhvButterfly ); \
    OBJECTS_ENCAPSULATE( bhvHoot ); \
    OBJECTS_ENCAPSULATE( bhvBetaHoldableObject ); \
    OBJECTS_ENCAPSULATE( bhvCarrySomething1 ); \
    OBJECTS_ENCAPSULATE( bhvCarrySomething2 ); \
    OBJECTS_ENCAPSULATE( bhvCarrySomething3 ); \
    OBJECTS_ENCAPSULATE( bhvCarrySomething4 ); \
    OBJECTS_ENCAPSULATE( bhvCarrySomething5 ); \
    OBJECTS_ENCAPSULATE( bhvCarrySomething6 ); \
    OBJECTS_ENCAPSULATE( bhvObjectBubble ); \
    OBJECTS_ENCAPSULATE( bhvObjectWaterWave ); \
    OBJECTS_ENCAPSULATE( bhvExplosion ); \
    OBJECTS_ENCAPSULATE( bhvBobombBullyDeathSmoke ); \
    OBJECTS_ENCAPSULATE( bhvSmoke ); \
    OBJECTS_ENCAPSULATE( bhvBobombExplosionBubble ); \
    OBJECTS_ENCAPSULATE( bhvBobombExplosionBubble3600 ); \
    OBJECTS_ENCAPSULATE( bhvRespawner ); \
    OBJECTS_ENCAPSULATE( bhvSmallBully ); \
    OBJECTS_ENCAPSULATE( bhvBigBully ); \
    OBJECTS_ENCAPSULATE( bhvBigBullyWithMinions ); \
    OBJECTS_ENCAPSULATE( bhvSmallChillBully ); \
    OBJECTS_ENCAPSULATE( bhvBigChillBully ); \
    OBJECTS_ENCAPSULATE( bhvJetStreamRingSpawner ); \
    OBJECTS_ENCAPSULATE( bhvJetStreamWaterRing ); \
    OBJECTS_ENCAPSULATE( bhvMantaRayWaterRing ); \
    OBJECTS_ENCAPSULATE( bhvMantaRayRingManager ); \
    OBJECTS_ENCAPSULATE( bhvBowserBomb ); \
    OBJECTS_ENCAPSULATE( bhvBowserBombExplosion ); \
    OBJECTS_ENCAPSULATE( bhvBowserBombSmoke ); \
    OBJECTS_ENCAPSULATE( bhvCelebrationStar ); \
    OBJECTS_ENCAPSULATE( bhvCelebrationStarSparkle ); \
    OBJECTS_ENCAPSULATE( bhvStarKeyCollectionPuffSpawner ); \
    OBJECTS_ENCAPSULATE( bhvLllDrawbridgeSpawner ); \
    OBJECTS_ENCAPSULATE( bhvLllDrawbridge ); \
    OBJECTS_ENCAPSULATE( bhvSmallBomp ); \
    OBJECTS_ENCAPSULATE( bhvLargeBomp ); \
    OBJECTS_ENCAPSULATE( bhvWfSlidingPlatform ); \
    OBJECTS_ENCAPSULATE( bhvMoneybag ); \
    OBJECTS_ENCAPSULATE( bhvMoneybagHidden ); \
    OBJECTS_ENCAPSULATE( bhvPitBowlingBall ); \
    OBJECTS_ENCAPSULATE( bhvFreeBowlingBall ); \
    OBJECTS_ENCAPSULATE( bhvBowlingBall ); \
    OBJECTS_ENCAPSULATE( bhvTtmBowlingBallSpawner ); \
    OBJECTS_ENCAPSULATE( bhvBobBowlingBallSpawner ); \
    OBJECTS_ENCAPSULATE( bhvThiBowlingBallSpawner ); \
    OBJECTS_ENCAPSULATE( bhvRrCruiserWing ); \
    OBJECTS_ENCAPSULATE( bhvSpindel ); \
    OBJECTS_ENCAPSULATE( bhvSslMovingPyramidWall ); \
    OBJECTS_ENCAPSULATE( bhvPyramidElevator ); \
    OBJECTS_ENCAPSULATE( bhvPyramidElevatorTrajectoryMarkerBall ); \
    OBJECTS_ENCAPSULATE( bhvPyramidTop ); \
    OBJECTS_ENCAPSULATE( bhvPyramidTopFragment ); \
    OBJECTS_ENCAPSULATE( bhvPyramidPillarTouchDetector ); \
    OBJECTS_ENCAPSULATE( bhvWaterfallSoundLoop ); \
    OBJECTS_ENCAPSULATE( bhvVolcanoSoundLoop ); \
    OBJECTS_ENCAPSULATE( bhvCastleFlagWaving ); \
    OBJECTS_ENCAPSULATE( bhvBirdsSoundLoop ); \
    OBJECTS_ENCAPSULATE( bhvAmbientSounds ); \
    OBJECTS_ENCAPSULATE( bhvSandSoundLoop ); \
    OBJECTS_ENCAPSULATE( bhvHiddenAt120Stars ); \
    OBJECTS_ENCAPSULATE( bhvSnowmansBottom ); \
    OBJECTS_ENCAPSULATE( bhvSnowmansHead ); \
    OBJECTS_ENCAPSULATE( bhvSnowmansBodyCheckpoint ); \
    OBJECTS_ENCAPSULATE( bhvBigSnowmanWhole ); \
    OBJECTS_ENCAPSULATE( bhvBigBoulder ); \
    OBJECTS_ENCAPSULATE( bhvBigBoulderGenerator ); \
    OBJECTS_ENCAPSULATE( bhvWingCap ); \
    OBJECTS_ENCAPSULATE( bhvMetalCap ); \
    OBJECTS_ENCAPSULATE( bhvNormalCap ); \
    OBJECTS_ENCAPSULATE( bhvVanishCap ); \
    OBJECTS_ENCAPSULATE( bhvStar ); \
    OBJECTS_ENCAPSULATE( bhvStarSpawnCoordinates ); \
    OBJECTS_ENCAPSULATE( bhvHiddenRedCoinStar ); \
    OBJECTS_ENCAPSULATE( bhvRedCoin ); \
    OBJECTS_ENCAPSULATE( bhvBowserCourseRedCoinStar ); \
    OBJECTS_ENCAPSULATE( bhvHiddenStar ); \
    OBJECTS_ENCAPSULATE( bhvHiddenStarTrigger ); \
    OBJECTS_ENCAPSULATE( bhvTtmRollingLog ); \
    OBJECTS_ENCAPSULATE( bhvLllVolcanoFallingTrap ); \
    OBJECTS_ENCAPSULATE( bhvLllRollingLog ); \
    OBJECTS_ENCAPSULATE( bhv1upWalking ); \
    OBJECTS_ENCAPSULATE( bhv1upRunningAway ); \
    OBJECTS_ENCAPSULATE( bhv1upSliding ); \
    OBJECTS_ENCAPSULATE( bhv1Up ); \
    OBJECTS_ENCAPSULATE( bhv1upJumpOnApproach ); \
    OBJECTS_ENCAPSULATE( bhvHidden1up ); \
    OBJECTS_ENCAPSULATE( bhvHidden1upTrigger ); \
    OBJECTS_ENCAPSULATE( bhvHidden1upInPole ); \
    OBJECTS_ENCAPSULATE( bhvHidden1upInPoleTrigger ); \
    OBJECTS_ENCAPSULATE( bhvHidden1upInPoleSpawner ); \
    OBJECTS_ENCAPSULATE( bhvControllablePlatform ); \
    OBJECTS_ENCAPSULATE( bhvControllablePlatformSub ); \
    OBJECTS_ENCAPSULATE( bhvBreakableBoxSmall ); \
    OBJECTS_ENCAPSULATE( bhvSlidingSnowMound ); \
    OBJECTS_ENCAPSULATE( bhvSnowMoundSpawn ); \
    OBJECTS_ENCAPSULATE( bhvWdwSquareFloatingPlatform ); \
    OBJECTS_ENCAPSULATE( bhvWdwRectangularFloatingPlatform ); \
    OBJECTS_ENCAPSULATE( bhvJrbFloatingPlatform ); \
    OBJECTS_ENCAPSULATE( bhvArrowLift ); \
    OBJECTS_ENCAPSULATE( bhvOrangeNumber ); \
    OBJECTS_ENCAPSULATE( bhvMantaRay ); \
    OBJECTS_ENCAPSULATE( bhvFallingPillar ); \
    OBJECTS_ENCAPSULATE( bhvFallingPillarHitbox ); \
    OBJECTS_ENCAPSULATE( bhvPillarBase ); \
    OBJECTS_ENCAPSULATE( bhvJrbFloatingBox ); \
    OBJECTS_ENCAPSULATE( bhvDecorativePendulum ); \
    OBJECTS_ENCAPSULATE( bhvTreasureChestsShip ); \
    OBJECTS_ENCAPSULATE( bhvTreasureChestsJrb ); \
    OBJECTS_ENCAPSULATE( bhvTreasureChests ); \
    OBJECTS_ENCAPSULATE( bhvTreasureChestBottom ); \
    OBJECTS_ENCAPSULATE( bhvTreasureChestTop ); \
    OBJECTS_ENCAPSULATE( bhvMips ); \
    OBJECTS_ENCAPSULATE( bhvYoshi ); \
    OBJECTS_ENCAPSULATE( bhvKoopa ); \
    OBJECTS_ENCAPSULATE( bhvKoopaRaceEndpoint ); \
    OBJECTS_ENCAPSULATE( bhvKoopaFlag ); \
    OBJECTS_ENCAPSULATE( bhvPokey ); \
    OBJECTS_ENCAPSULATE( bhvPokeyBodyPart ); \
    OBJECTS_ENCAPSULATE( bhvSwoop ); \
    OBJECTS_ENCAPSULATE( bhvFlyGuy ); \
    OBJECTS_ENCAPSULATE( bhvGoomba ); \
    OBJECTS_ENCAPSULATE( bhvGoombaTripletSpawner ); \
    OBJECTS_ENCAPSULATE( bhvChainChomp ); \
    OBJECTS_ENCAPSULATE( bhvChainChompChainPart ); \
    OBJECTS_ENCAPSULATE( bhvWoodenPost ); \
    OBJECTS_ENCAPSULATE( bhvChainChompGate ); \
    OBJECTS_ENCAPSULATE( bhvWigglerHead ); \
    OBJECTS_ENCAPSULATE( bhvWigglerBody ); \
    OBJECTS_ENCAPSULATE( bhvEnemyLakitu ); \
    OBJECTS_ENCAPSULATE( bhvCameraLakitu ); \
    OBJECTS_ENCAPSULATE( bhvCloud ); \
    OBJECTS_ENCAPSULATE( bhvCloudPart ); \
    OBJECTS_ENCAPSULATE( bhvSpiny ); \
    OBJECTS_ENCAPSULATE( bhvMontyMole ); \
    OBJECTS_ENCAPSULATE( bhvMontyMoleHole ); \
    OBJECTS_ENCAPSULATE( bhvMontyMoleRock ); \
    OBJECTS_ENCAPSULATE( bhvPlatformOnTrack ); \
    OBJECTS_ENCAPSULATE( bhvTrackBall ); \
    OBJECTS_ENCAPSULATE( bhvSeesawPlatform ); \
    OBJECTS_ENCAPSULATE( bhvFerrisWheelAxle ); \
    OBJECTS_ENCAPSULATE( bhvFerrisWheelPlatform ); \
    OBJECTS_ENCAPSULATE( bhvWaterBombSpawner ); \
    OBJECTS_ENCAPSULATE( bhvWaterBomb ); \
    OBJECTS_ENCAPSULATE( bhvWaterBombShadow ); \
    OBJECTS_ENCAPSULATE( bhvTTCRotatingSolid ); \
    OBJECTS_ENCAPSULATE( bhvTTCPendulum ); \
    OBJECTS_ENCAPSULATE( bhvTTCTreadmill ); \
    OBJECTS_ENCAPSULATE( bhvTTCMovingBar ); \
    OBJECTS_ENCAPSULATE( bhvTTCCog ); \
    OBJECTS_ENCAPSULATE( bhvTTCPitBlock ); \
    OBJECTS_ENCAPSULATE( bhvTTCElevator ); \
    OBJECTS_ENCAPSULATE( bhvTTC2DRotator ); \
    OBJECTS_ENCAPSULATE( bhvTTCSpinner ); \
    OBJECTS_ENCAPSULATE( bhvMrBlizzard ); \
    OBJECTS_ENCAPSULATE( bhvMrBlizzardSnowball ); \
    OBJECTS_ENCAPSULATE( bhvSlidingPlatform2 ); \
    OBJECTS_ENCAPSULATE( bhvOctagonalPlatformRotating ); \
    OBJECTS_ENCAPSULATE( bhvAnimatesOnFloorSwitchPress ); \
    OBJECTS_ENCAPSULATE( bhvActivatedBackAndForthPlatform ); \
    OBJECTS_ENCAPSULATE( bhvRecoveryHeart ); \
    OBJECTS_ENCAPSULATE( bhvWaterBombCannon ); \
    OBJECTS_ENCAPSULATE( bhvCannonBarrelBubbles ); \
    OBJECTS_ENCAPSULATE( bhvUnagi ); \
    OBJECTS_ENCAPSULATE( bhvUnagiSubobject ); \
    OBJECTS_ENCAPSULATE( bhvDorrie ); \
    OBJECTS_ENCAPSULATE( bhvHauntedChair ); \
    OBJECTS_ENCAPSULATE( bhvMadPiano ); \
    OBJECTS_ENCAPSULATE( bhvFlyingBookend ); \
    OBJECTS_ENCAPSULATE( bhvBookendSpawn ); \
    OBJECTS_ENCAPSULATE( bhvHauntedBookshelfManager ); \
    OBJECTS_ENCAPSULATE( bhvBookSwitch ); \
    OBJECTS_ENCAPSULATE( bhvFirePiranhaPlant ); \
    OBJECTS_ENCAPSULATE( bhvSmallPiranhaFlame ); \
    OBJECTS_ENCAPSULATE( bhvFireSpitter ); \
    OBJECTS_ENCAPSULATE( bhvFlyguyFlame ); \
    OBJECTS_ENCAPSULATE( bhvSnufit ); \
    OBJECTS_ENCAPSULATE( bhvSnufitBalls ); \
    OBJECTS_ENCAPSULATE( bhvHorizontalGrindel ); \
    OBJECTS_ENCAPSULATE( bhvEyerokBoss ); \
    OBJECTS_ENCAPSULATE( bhvEyerokHand ); \
    OBJECTS_ENCAPSULATE( bhvKlepto ); \
    OBJECTS_ENCAPSULATE( bhvBird ); \
    OBJECTS_ENCAPSULATE( bhvRacingPenguin ); \
    OBJECTS_ENCAPSULATE( bhvPenguinRaceFinishLine ); \
    OBJECTS_ENCAPSULATE( bhvPenguinRaceShortcutCheck ); \
    OBJECTS_ENCAPSULATE( bhvCoffinSpawner ); \
    OBJECTS_ENCAPSULATE( bhvCoffin ); \
    OBJECTS_ENCAPSULATE( bhvClamShell ); \
    OBJECTS_ENCAPSULATE( bhvSkeeter ); \
    OBJECTS_ENCAPSULATE( bhvSkeeterWave ); \
    OBJECTS_ENCAPSULATE( bhvSwingPlatform ); \
    OBJECTS_ENCAPSULATE( bhvDonutPlatformSpawner ); \
    OBJECTS_ENCAPSULATE( bhvDonutPlatform ); \
    OBJECTS_ENCAPSULATE( bhvDDDPole ); \
    OBJECTS_ENCAPSULATE( bhvRedCoinStarMarker ); \
    OBJECTS_ENCAPSULATE( bhvTripletButterfly ); \
    OBJECTS_ENCAPSULATE( bhvBubba ); \
    OBJECTS_ENCAPSULATE( bhvBeginningLakitu ); \
    OBJECTS_ENCAPSULATE( bhvBeginningPeach ); \
    OBJECTS_ENCAPSULATE( bhvEndBirds1 ); \
    OBJECTS_ENCAPSULATE( bhvEndBirds2 ); \
    OBJECTS_ENCAPSULATE( bhvIntroScene ); \
    OBJECTS_ENCAPSULATE( bhvUnusedFakeStar );

/* OBJECTS_ENCAPSULATE( bhvUnused05A8 ); \
    OBJECTS_ENCAPSULATE( bhvCheepCheep ); \
    OBJECTS_ENCAPSULATE( bhvFishCommon ); \
    OBJECTS_ENCAPSULATE( bhvSomeGfx ); \
    OBJECTS_ENCAPSULATE( bhvPlaysSound ); \
OBJECTS_ENCAPSULATE( bhvUnused0DFC ); \
OBJECTS_ENCAPSULATE( bhvUnused0E40 ); \
OBJECTS_ENCAPSULATE( bhvUnused1820 ); \
OBJECTS_ENCAPSULATE( bhvUnused1F30 ); \
OBJECTS_ENCAPSULATE( bhvUnused20E0 ); \
OBJECTS_ENCAPSULATE( bhvUnused243C ); \
OBJECTS_ENCAPSULATE( bhvUnused2A10 ); \
OBJECTS_ENCAPSULATE( bhvUnused2A54 ); \ */
