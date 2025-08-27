#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl level;
	if (ac != 2)
		return (0);
	level.complain(av[1]);
}