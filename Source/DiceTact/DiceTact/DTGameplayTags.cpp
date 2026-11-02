#include "DTGameplayTags.h"

/// State
UE_DEFINE_GAMEPLAY_TAG(TAG_State_Dead, "State.Dead");

// Health
UE_DEFINE_GAMEPLAY_TAG(TAG_State_Health_Low, "State.Health.Low");
UE_DEFINE_GAMEPLAY_TAG(TAG_State_Health_Critical, "State.Health.Critical");

// Debuffs
UE_DEFINE_GAMEPLAY_TAG(TAG_State_Debuff_Slowed, "State.Debuff.Slowed");
UE_DEFINE_GAMEPLAY_TAG(TAG_State_Debuff_Rooted, "State.Debuff.Rooted");
UE_DEFINE_GAMEPLAY_TAG(TAG_State_Debuff_Stunned, "State.Debuff.Stunned");
UE_DEFINE_GAMEPLAY_TAG(TAG_State_Debuff_Marked, "State.Debuff.Marked");
UE_DEFINE_GAMEPLAY_TAG(TAG_State_Debuff_Taunted, "State.Debuff.Taunted");
UE_DEFINE_GAMEPLAY_TAG(TAG_State_Debuff_Silenced, "State.Debuff.Silenced");
UE_DEFINE_GAMEPLAY_TAG(TAG_State_Debuff_Chained, "State.Debuff.Chained");
UE_DEFINE_GAMEPLAY_TAG(TAG_State_Debuff_Afraid, "State.Debuff.Afraid");
UE_DEFINE_GAMEPLAY_TAG(TAG_State_Debuff_Burning, "State.Debuff.Burning");
UE_DEFINE_GAMEPLAY_TAG(TAG_State_Debuff_Burned, "State.Debuff.Burned");
UE_DEFINE_GAMEPLAY_TAG(TAG_State_Debuff_Freezing, "State.Debuff.Freezing");
UE_DEFINE_GAMEPLAY_TAG(TAG_State_Debuff_Frozen, "State.Debuff.Frozen");
UE_DEFINE_GAMEPLAY_TAG(TAG_State_Debuff_Bleeding, "State.Debuff.Bleeding");
UE_DEFINE_GAMEPLAY_TAG(TAG_State_Debuff_Poisoned, "State.Debuff.Poisoned");

// Buffs
UE_DEFINE_GAMEPLAY_TAG(TAG_State_Buff_Invulnerable, "State.Buff.Invulnerable");


/// Damage
// Delivery
UE_DEFINE_GAMEPLAY_TAG(TAG_Damage_Delivery_Ranged, "Damage.Delivery.Ranged");
UE_DEFINE_GAMEPLAY_TAG(TAG_Damage_Delivery_Melee, "Damage.Delivery.Melee");

// Type
UE_DEFINE_GAMEPLAY_TAG(TAG_Damage_Delivery_Blunt, "Damage.Delivery.Blunt");
UE_DEFINE_GAMEPLAY_TAG(TAG_Damage_Delivery_Piercing, "Damage.Delivery.Piercing");
UE_DEFINE_GAMEPLAY_TAG(TAG_Damage_Delivery_Slashing, "Damage.Delivery.Slashing");
UE_DEFINE_GAMEPLAY_TAG(TAG_Damage_Delivery_Magic, "Damage.Delivery.Magic");

// Source
UE_DEFINE_GAMEPLAY_TAG(TAG_Damage_Source_Enemy, "Damage.Source.Enemy");
UE_DEFINE_GAMEPLAY_TAG(TAG_Damage_Source_Trap, "Damage.Source.Trap");
UE_DEFINE_GAMEPLAY_TAG(TAG_Damage_Source_Dice, "Damage.Source.Dice");

// Element
UE_DEFINE_GAMEPLAY_TAG(TAG_Damage_Element_Fire, "Damage.Element.Fire");
UE_DEFINE_GAMEPLAY_TAG(TAG_Damage_Element_Ice, "Damage.Element.Ice");
UE_DEFINE_GAMEPLAY_TAG(TAG_Damage_Element_Lightning, "Damage.Element.Lightning");
UE_DEFINE_GAMEPLAY_TAG(TAG_Damage_Element_Poison, "Damage.Element.Poison");

/// AI
// Events

// Actions


/// Data
UE_DEFINE_GAMEPLAY_TAG(TAG_Data_CooldownDuration, "Data.CooldownDuration");
UE_DEFINE_GAMEPLAY_TAG(TAG_Data_DamageAmount, "Data.DamageAmount");
UE_DEFINE_GAMEPLAY_TAG(TAG_Data_DamageDuration, "Data.DamageDuration");
UE_DEFINE_GAMEPLAY_TAG(TAG_Data_StatusEffectDuration, "Data.StatusEffectDuration");
