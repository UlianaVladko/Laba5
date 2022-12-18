#include "Magic.h"

MagicWeapon::MagicWeapon() : Weapon(), bonusDamage(0) {}

MagicWeapon::MagicWeapon(string name, float damage, float bonusDamage, float weight, KindOfWeapon weaponkind) : Weapon(name, damage, weight, weaponkind), bonusDamage(bonusDamage) {}

float MagicWeapon::getbonusDamage() {return this->bonusDamage;}

ostream& operator<<(ostream& output, MagicWeapon& weapon)
{
	output << weapon.getweaponkindName() <<" \"" << weapon.getName() << "\": damage = " << weapon.getDamage() << ", bonus damage = " << weapon.getbonusDamage() << ", weight = " << weapon.getWeight()<<endl;

	return output;
}

