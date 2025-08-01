#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name, Weapon *weapon)
    : _name(name), _weapon(weapon) {}

HumanB::~HumanB(void) {}

void HumanB::setWeapon(Weapon &weapon) {
    _weapon = &weapon;
}

void HumanB::attack(void) const {
    if (_weapon)
        std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
    else
        std::cout << _name << " has no weapon" << std::endl;
}
