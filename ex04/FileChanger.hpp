#ifndef FILECHANGER_HPP
#define FILECHANGER_HPP

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class FileChanger {
	private:
			std::string	_filename;
			std::string	_s1;
			std::string	_s2;

	public:
			FileChanger(const std::string& filename, const std::string& s1, const std::string& s2);
			void processFile();
};

#endif
