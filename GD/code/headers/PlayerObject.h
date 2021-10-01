#include "includes.h"

class PlayerObject : GameObject, AnimatedSpriteDelegate
{
	float m_fUnkDash;
	float m_fRotationButBackwards;
	double m_fUnkSlopeVel;
	bool m_bPlacedStreakPoint;
	cocos2d::CCNode* m_pCollisionNode;
	cocos2d::CCDictionary* m_pCollisionDict2;
	cocos2d::CCDictionary* m_pCollisionDict1;
	float m_fAutoCheckPointInterval;
	float m_fUnkCheckpoint;
	bool m_bAutoCheckpointEnabled;
	GameObject* m_pObject;
	GameObject* m_pCollidedObject;
	int m_nCurrentIcon;
	float m_fUnkCollisionFloat;
	float m_fUnkCollisionFloat2;
	bool m_bHasCollided;
	cocos2d::CCSprite* m_pDashSprite;
	int m_nCollisionObjUID;
	int m_nCollisionObjUID2;
	bool m_bRollModeRolling;
	bool m_bNotOnSlope;
	GameObject* m_pCollidedSlope;
	GameObject* m_pSlope;
	float m_fUnkSlopeColisionSlope;
	int m_nSlopeUniqueID;
	bool m_bGoingDown;
	cocos2d::CCArray* m_pParticleArray;
	bool m_bGlow;
	bool m_bVisibility;
	bool m_bIsHidden;
	GhostTrailEffect* m_pGhostTrail;
	cocos2d::CCSprite* m_pIcon;
	cocos2d::CCSprite* m_pIconSecondary;
	cocos2d::CCSprite* m_pIconWhitener;
	cocos2d::CCSprite* m_pIconExtra;
	cocos2d::CCSprite* m_pVehicle;
	cocos2d::CCSprite* m_pVehicleSecondary;
	cocos2d::CCSprite* m_pVehicleExtras;
	cocos2d::CCSprite* m_pVehicleWhitener;
	cocos2d::CCSprite* m_pVehicleExtra;
	cocos2d::CCSprite* m_pShipGlow;
	cocos2d::CCMotionStreak* m_pTrail;
	HardStreak* m_pWaveTrail;
	HardStreak* m_pHardStreak;
	double m_dXAcceleration;
	double m_dJumpAcceleration;
	double m_dGravity;
	float m_fParticleLife;
	float m_fSafeModeTime;
	bool m_bUnk;
	bool m_bUnk2;
	bool m_bUnk3;
	bool m_bUnk4;
	bool m_bJumped;
	bool m_bParticleActive;
	bool m_bUnk5;
	bool m_bUnk6;
	bool m_bUnk7;
	double m_dUnk;
	double m_dUnk2;
	double m_dTimeCopy;
	double m_dTimeCopy2;
	float m_fUnkFlash;
	float m_fUnkFlash2;
	cocos2d::ccColor3B m_cFirstColour;
	cocos2d::ccColor3B m_cSecondColour;
	double m_dSafeSpiderTime;
	bool m_bUnk8;
	bool m_bUnk9;
	bool m_bSwitchWaveTrailCol;
	bool m_bPracticeDeathEffect;
	float m_fUnk;
	double m_dUnk3;
	double m_dUnk4;
	bool m_bUnk10;
	GameObject* m_pObject1;
	CheckpointObject* m_pPendingCheckpoint;
	int m_nCheckpointTotal;
	GJRobotSprite* m_pRobotSprite;
	GJRobotSprite* m_pSpiderSprite;
	bool m_bSpecialGroundHit;
	cocos2d::CCParticleSystem* m_pParticles;
	cocos2d::CCParticleSystem* m_pFlipParticles;
	cocos2d::CCParticleSystem* m_pDragEffect;
	cocos2d::CCParticleSystem* m_pShipDragParticles;
	cocos2d::CCParticleSystem* m_pBurstEffect;
	cocos2d::CCParticleSystem* m_pBurstEffect2;
	cocos2d::CCParticleSystem* m_pDashParticles;
	bool m_bHitGroundBool;
	cocos2d::CCParticleSystem* m_pLandEffectParticle;
	cocos2d::CCParticleSystem* m_pLandEffectParticle2;
	float m_pParticleAngle;
	float m_fParticleGravity;
	int m_nStreakID;
	float m_fStreakStroke;
	bool dword180;
	bool field_5AD;
	float dword184;
	float dword188;
	float dword18C;
	bool dword190;
	bool field_5BD;
	bool m_bBumpPlayer;
	bool m_bSlopeFlippedX;
	float m_fCollisionTop;
	float m_fCollisionBottom;
	bool dword19C;
	cocos2d::ccColor3B m_cFirstColourCopy;
	cocos2d::ccColor3B m_cSecondColourCopy;
	bool m_bTookDamage;
	bool m_bUpKeyDown;
	bool m_bUpKeyPressed;
	bool field_5D3;
	bool dword1A8;
	bool field_5D5;
	bool field_5D6;
	int m_nJumpHeightSeed;
	int m_nJumpHeightRand;
	int m_nJumpHeight;
	DWORD dword1B8;
	double m_dYAccel;
	bool m_bOnSlope;
	bool m_bWasOnSlope;
	float m_fSlopeYVelocity;
	bool m_bFlyMode;
	bool m_bBirdMode;
	bool m_bRollMode;
	bool m_bDartMode;
	bool m_bRobotMode;
	bool m_bSpiderMode;
	bool m_bGravity;
	bool m_bTouchedRing;
	bool m_bCanJump;
	bool m_bDashing;
	float m_fPlayerScale;
	float m_fTimeMod;
	cocos2d::CCPoint m_obLastPos;
	cocos2d::CCPoint m_onPortalPos;
	cocos2d::CCLayer* m_pGameLayer;
	bool m_bOnGround;
	bool m_bJumping;
	bool m_bLocked;
	cocos2d::CCPoint m_obLastGroundPos;
	cocos2d::CCArray* m_pTouchedRings;
	GameObject* m_pLastActivatedPortal;
	bool m_bHasJumped;
	bool m_bHasRingJumped;
	cocos2d::ccColor3B m_cColour;
	cocos2d::ccColor3B m_cColour2;
	cocos2d::CCPoint m_obRealPlayerPos;
	bool m_bIsSecondPlayer;
	bool m_bTwoPlayer;
	double m_dTime;
	bool m_bDisableEffects;
	float m_fMeteringValue;
	float m_fGroundHeight;
	float m_fLastYVelocity;
	bool m_bDefaultMiniIcon;
	bool m_bSwitchSpiderTeleportCol;
	bool m_bSwitchFireDashCol;
	float m_fOldYPositions[200];
	float m_fSpecialTime;
	int m_nStateBlockDash;
	DWORD dword560;
	int m_nStateBlockJump;
	int m_nStateBlockWave;
	int m_nStateBlockHead;
};
