#include "SekiroGameplayTags.h"

namespace SekiroGameplayTags
{
	// Input Tags
	UE_DEFINE_GAMEPLAY_TAG(InputTag_MeleeAttack_Katana, "InputTag.MeleeAttack.Katana")
	UE_DEFINE_GAMEPLAY_TAG(InputTag_MeleeAttack_Katana_Combo_Start, "InputTag.MeleeAttack.Katana.Combo.Start")
	UE_DEFINE_GAMEPLAY_TAG(InputTag_MeleeAttack_Katana_Combo_End, "InputTag.MeleeAttack.Katana.Combo.End")
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Guard_Katana, "InputTag.Guard.Katana")
	
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Toggleable, "InputTag.Toggleable")
	UE_DEFINE_GAMEPLAY_TAG(InputTag_MustBeHeld, "InputTag.MustBeHeld")
	UE_DEFINE_GAMEPLAY_TAG(InputTag_EquipKatana, "InputTag.EquipKatana")

	
	// Player Tags
	UE_DEFINE_GAMEPLAY_TAG(PlayerTag_Weapon_Katana, "PlayerTag.Weapon.Katana")
	UE_DEFINE_GAMEPLAY_TAG(PlayerTag_Ability_Equip_Katana, "PlayerTag.Ability.Equip.Katana")
	UE_DEFINE_GAMEPLAY_TAG(PlayerTag_Ability_MeleeAttack_Katana, "PlayerTag.Ability.MeleeAttack.Katana")
	
	UE_DEFINE_GAMEPLAY_TAG(Player_Event_Eqip_Katana, "Player.Event.Equip.Katana")
	UE_DEFINE_GAMEPLAY_TAG(Player_Event_SuccessfulBlock, "Player.Event.SuccessfulBlock")
	UE_DEFINE_GAMEPLAY_TAG(Player_Event_ContinueCombo_Input, "Player.Event.ContinueCombo.Input")
	
	UE_DEFINE_GAMEPLAY_TAG(Player_Weapon_Katana, "Player.Weapon.Katana")
	UE_DEFINE_GAMEPLAY_TAG(Player_SetByCaller_AttackType_Light, "Player.SetByCaller.AttackType.Light")
	UE_DEFINE_GAMEPLAY_TAG(Player_SetByCaller_AttackType_Heavy, "Player.SetByCaller.AttackType.Heavy")
	
	UE_DEFINE_GAMEPLAY_TAG(Player_Status_Blocking, "Player.Status.Blocking")

	// Enemy Tags
	UE_DEFINE_GAMEPLAY_TAG(EnemyTag_Weapon_Katana, "EnemyTag.Weapon.Katana")
	UE_DEFINE_GAMEPLAY_TAG(Enemy_Status_UnBlocking, "Enemy.Status.UnBlocking")

	// Shared Tags
	UE_DEFINE_GAMEPLAY_TAG(Shard_Event_MeleeHit, "Shard.Event.MeleeHit")
	UE_DEFINE_GAMEPLAY_TAG(Shard_SetByCaller_Base_Damage, "Shard.SetByCaller.Base.Damage")
}
