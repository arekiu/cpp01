#include "FileChanger.hpp"

FileChanger::FileChanger(const std::string &filename, const std::string &s1, const std::string &s2)
	: _filename(filename), _s1(s1), _s2(s2) {}

void FileChanger::processFile() {

	std::ifstream	inputFile(this->_filename.c_str()); //input file stream
	if (!inputFile) {
		std::cerr << "Error: Cannot open file '" << this->_filename << "'" << std::endl;
		return;
	}

	std::ostringstream	oss; //oss: convention for output string stream
	oss << inputFile.rdbuf();
	std::string	content = oss.str();
	inputFile.close();

	std::string	result;
	size_t	pos = 0;
	while (true) {
		size_t	found = content.find(this->_s1, pos);
		if (found == std::string::npos) { //no position
			result += content.substr(pos);
			break ;
		}
		result += content.substr(pos, found - pos);
		result += this->_s2;
		pos = found + this->_s1.length();
	}

	std::ofstream	outputFile((this->_filename + ".replace").c_str());
	if (!outputFile) {
		std::cerr << "Error creating file" << std::endl;
		return ;
	}
	outputFile << result;
	outputFile.close();
}
