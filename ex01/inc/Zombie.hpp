#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <memory>
#include <iostream>


class Zombie {
private :
	std::string _name;
public :
	Zombie();
	Zombie(std::string name);
	~Zombie();
	const std::string& getName() const;
	void setName(const std::string& name);
	void announce();
};

Zombie*	zombieHorde( int N, std::string name );
void	randomChump(std::string name);

#endif