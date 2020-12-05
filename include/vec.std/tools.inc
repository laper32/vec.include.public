#if defined _vec_std_tools
#endinput
#endif
#define _vec_std_tools

native void ToolsGetVelocity(int entity, float velocity[3]);
native void ToolsSetVelocity(int entity, float velocity[3], bool apply = true, bool stack = true);

native float ToolsGetSpeed(int entity);
native void ToolsGetAbsOrigin(int entity, float origin[3]);

native void ToolsGetAbsAngles(int entity, float angles[3]);

native int ToolsGetMyWeapons(int entity);

native int ToolsGetWeapon(int entity, int pos);

native int ToolsGetHealth(int entity);
native void ToolsSetHealth(int entity, int val);

native float ToolsGetLMV(int entity);
native void ToolsSetLMV(int entity, float val);

native int ToolsGetArmor(int entity);
native void ToolsSetArmor(int entity, int val);

native int ToolsGetTeam(int entity);
native void ToolsSetTeam(int entity, int team);

native bool ToolsGetNightVision(int entity, bool ownership = false);
native void ToolsSetNightVision(int entity, bool enable, bool ownership = false);

native bool ToolsGetDefuser(int entity);
native void ToolsSetDefuser(int entity, bool enable);

native bool ToolsGetHelmet(int entity);
native void ToolsSetHelmet(int entity, bool enable);

native bool ToolsGetHeavySuit(int entity);
native void ToolsSetHeavySuit(int entity, bool enable);

native int ToolsGetActiveWeapon(int entity);
//ToolsSetActiveWeapon

native int ToolsGetAddonBits(int entity);
native void ToolsSetAddonBits(int entity, int val);

native int ToolsGetObserverMode(int entity);
native int ToolsGetObserverTarget(int entity);

native int ToolsGetHitGroup(int entity);

native int ToolsGetScore(int entity, bool score = true);
native void ToolsSetScore(int entity, int val, bool score = true);

native int ToolsGetFrags(int entity);
native void ToolsSetFrags(int entity, int val);

native int ToolsGetDeaths(int entity);
native void ToolsSetDeaths(int entity, int val);

native void ToolsSetGravity(int entity, float val);

//ToolsSetSpot

native void ToolsSetDetecting(int entity, bool enable);

//ToolsSetHud

//ToolsSetArms

native void ToolsSetAttack(int entity, float val);

native void ToolsSetFlashLight(int entity, bool enable);

native void ToolsSetFov(int entity, int val = 90);

native void ToolsSetTextures(int entity, int body = -1, int skin = -1);

native int ToolsGetEffect(int entity);

native void ToolsSetEffect(int entity, int val);

//ToolsGetActivator

native void ToolsSetModelIndex(int entity, int model);

native int ToolsGetOwner(int entity);
//ToolsSetOwner

native int ToolsGetParent(int entity);
//ToolsSetParent

//ToolsGetRagdollIndex

native int ToolsGetCollisionGroup(int entity);
native void ToolsSetCollisionGroup(int entity, int val);

native void ToolsSetProgressBarTime(int entity, int duration);
native void ToolsResetProgressBarTime(int entity);
