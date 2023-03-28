#ifndef REPLACEWURD_H
#define REPLACEWURD_H

#include <iostream>
#include <fstream>
#include <string>

class Replacewurd{
	public:

		std::string fileName;
		std::ifstream mySrcFile;
		std::ofstream myDestFile;
		std::string Openfile(std::string& fileName, std::string s1, std::string s2);

};

#endif
