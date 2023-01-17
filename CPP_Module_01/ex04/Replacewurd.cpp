#include "Replacewurd.h"

std::string Replacewurd::Openfile(std::ifstream& fileName, std::string s1, std::string s2){
	std::string contents;

	for (char ch; fileName.get(ch); contents.push_back(ch)){}

	std::string new_contents;
	int s1_len = s1.length();
	int src_ctr = 0;
	std::string substring_s1;
	while (contents[src_ctr])
	{
		substring_s1 = contents.substr(src_ctr, s1_len);
		if (substring_s1.compare(s1) == 0){
			new_contents += s2;
			src_ctr = src_ctr + s1_len;
		}
		else{
			new_contents.push_back(contents[src_ctr]);
			src_ctr++;
		}
	}
	//for (char ch; is.get(ch); contents.push_back(ch)) {}
	
	return contents;
}
