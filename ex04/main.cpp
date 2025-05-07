#include "FileChanger.hpp"
#include <iostream>

int	main(int argc, char* argv[]) {

	if (argc != 4)
	{
		std::cerr << "Invalidad number of arguments.\n\
		Usage: ./<program> <filename> <s1> <s2>" << std::endl;
		return (1);
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	if (s1.empty()) {
		std::cerr << "Error: s1 cannot be empty." << std::endl;
		return 1;
	}

	FileChanger changer(filename, s1, s2);
	changer.processFile();
}
