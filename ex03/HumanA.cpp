#include "Weapon.hpp"
#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon& type) : _name(name), _weapon(type) {

};

HumanA::~HumanA() {};

void HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType()  << std::endl;
}
