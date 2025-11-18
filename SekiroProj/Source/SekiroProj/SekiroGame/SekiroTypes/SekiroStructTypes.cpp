#include "SekiroTypes/SekiroStructTypes.h"

bool FSekiroSamuraiAbilitySet::IsValid() const
{
	return InputTag.IsValid() && AbilityToGrant != nullptr;
}
