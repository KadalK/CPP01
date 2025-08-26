#include "../inc/Zombie.hpp"
#include "../inc/Zombie.hpp"

int main()
{
	Zombie* Bernard = newZombie("maxou");
	Bernard->announce();
	randomChump("fabish");
	delete Bernard;
	return (0);
}