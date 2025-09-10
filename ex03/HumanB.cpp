#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB() {

}

HumanB::HumanB(std::string name, Weapon* type) : _name(name), _weapon(type) {
}

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {
}

HumanB::~HumanB() {

}

void HumanB::attack()
{
	if (this->_weapon)
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " can't attack because he dont have weapon" << std::endl;
}

void	HumanB::setWeapon(Weapon &type)
{
	this->_weapon = &type;
}