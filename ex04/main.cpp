#include <iostream>
#include <fstream>
#include <cstring>

void findAndReplace(std::string file, std::string search , std::string replace)
{
	size_t first = 0;
	std::string outfileName = file + ".replace";
	std::ifstream in(file.c_str());
	std::string read;
	getline(in, read);
	std::ofstream out(outfileName.c_str(), std::ofstream::out);
	if (search != replace)
	{
		while ((first = read.find(search.c_str(), first, search.length())) != read.npos)
		{
				read.erase(first, search.size());
				read.insert(first, replace);
		}
	}
	out << read;
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Usage : <filename> <string 1> <string 2>" << std::endl;
		return (-1);
	}
	findAndReplace(av[1], av[2], av[3]);
	return (0);
}