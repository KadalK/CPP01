#include "../inc/Zombie.hpp"

int main()
{
	int n = 4;
	Zombie* horde = zombieHorde(n, "Fabish"); //error
	for (int i = 0; i < n; i++)
		horde[i].announce();
	delete[] horde;
}