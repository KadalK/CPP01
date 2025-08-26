#include <iostream>
#include <fstream>
#include <string>

void findAndReplace(std::string search , std::string replace, std::string file)
{
//	int i = 0;
	size_t first = 0;
	std::string outfileName = file + "_replace";
	std::ifstream in(file.c_str());
	std::string read;
	getline(in, read);
	std::ofstream out(outfileName.c_str(), std::ofstream::out);
	while ((first = read.find(search.c_str(), first, search.length())) != read.npos)
	{
		read.erase(first, search.size());
		read.insert(first, replace);
	}
	out << read;
}

int main(int ac, char **av)
{
	if (ac != 4)
		return (-1);
	findAndReplace(av[1], av[2], av[3]);
	return (0);
}