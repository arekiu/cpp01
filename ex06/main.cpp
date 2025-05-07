#include "Harl.hpp"
#include <iostream>

int getLevelIndex(std::string level) {

	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++) {
		if (levels[i] == level)
		return (i);
	}
	return (-1);
}

int main(int argc, char *argv[]) {

	if (argc != 2) {
		std::cerr << "Usage: ./harlFilter <level>" << std::endl;
		return (1);
	}

	Harl harl;
	int levelIndex = getLevelIndex(argv[1]);

	switch (levelIndex) {
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			harl.complain("DEBUG");
			 // fallthrough
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			harl.complain("INFO");
			 // fallthrough
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			harl.complain("WARNING");
			 // fallthrough
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			harl.complain("ERROR");
			break;
		default:
		std::cout << "[ Nothing too important ]" << std::endl;
	}

	return (0);
}
