#include <iostream>

int main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string* stringPTR = &brain;
	std::string& stringREF = brain;

	std::cout << "BRAIN VALUE = " << brain << std::endl;
	std::cout << "BRAIN ADR = " << &brain << std::endl << std::endl;

	std::cout << "PTR VALUE = " << *stringPTR << std::endl;
	std::cout << "PTR ADR = " << stringPTR << std::endl << std::endl;

	std::cout << "REF VALUE = " << stringREF << std::endl;
	std::cout << "REF ADR = " << &stringREF << std::endl << std::endl;
}