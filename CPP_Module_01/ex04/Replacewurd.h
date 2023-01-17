#ifndef REPLACEWURD_H
#define REPLACEWURD_H

#include <iostream>
#include <fstream>
#include <string>

class Replacewurd{
	private:
		std::string fileName;
		std::ifstream mySrcFile;
		std::ofstream myDestFile;
	public:
		std::string Openfile(std::ifstream& fileName, std::string s1, std::string s2);
		void find_and_replace(std::string& file_contents, const std::string& morn, const std::string& night);
};

#endif
