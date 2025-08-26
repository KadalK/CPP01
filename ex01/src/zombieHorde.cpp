#include "../inc/Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{

	Zombie* newZombies = new Zombie[N]; //error
	for (int i = 0; i < N; i++)
		newZombies[i].setName(name);
	return (newZombies);
}