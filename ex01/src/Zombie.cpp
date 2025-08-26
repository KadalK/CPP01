#include "../inc/Zombie.hpp"

#include "../inc/Zombie.hpp"

Zombie::Zombie(): _name("Default") {

}

Zombie::Zombie(std::string name): _name(name) {

}

Zombie::~Zombie() {

}

const std::string& Zombie::getName() const
{
	return(this->_name);
}

void Zombie::setName(const std::string& name)
{
	this->_name = name;
}

void Zombie::announce()
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}