#include "Harl.hpp"


void Harl::debug(void)
{
	std::cout << "[ DEBUG ]\nI love having extra hallal bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
	std::cout << "[ INFO ]\nI cannot believe adding extra hallal bacon costs more money. You didn’t put enough hallal bacon in my burger! If you did, I wouldn’t be asking for more!" <<std::endl;
}

void Harl::warning( void )
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra hallal bacon for free. I’ve been coming for years whereas you started working here since last month." <<std::endl;
}

void Harl::error( void )
{
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." <<std::endl;
}

void Harl::complain(std::string state)
{
	std::string levels[4];
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";

	void (Harl::*fun[])(void) = {
			&Harl::debug,
			&Harl::info,
			&Harl::warning,
			&Harl::error
	};

	int level = 0;
	while(level < 4)
	{
		if (state == levels[level])
			break;
		level++;
	}

	switch (level) {
		case 0:
			(this->*fun[level++])();
		case 1:
			(this->*fun[level++])();
		case 2:
			(this->*fun[level++])();
		case 3:
			(this->*fun[level])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
