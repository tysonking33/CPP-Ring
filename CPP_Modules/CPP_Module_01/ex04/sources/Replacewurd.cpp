#include "../includes/Replacewurd.h"

std::string Replacewurd::Openfile(std::string& fileName, std::string s1, std::string s2){
	std::string contents;

	mySrcFile.open(fileName);
	for (char ch; mySrcFile.get(ch); contents.push_back(ch)){}

	std::string new_contents;
	int s1_len = s1.length();
	int s2_len = s2.length();
	int src_ctr = 0;
	std::string substring_s1;
	while (contents[src_ctr])
	{
		substring_s1 = contents.substr(src_ctr, s1_len);
		if (substring_s1.compare(s1) == 0){
			for (int i = 0; i < s2_len; i++)
				new_contents += s2[i];
			src_ctr = src_ctr + s1_len;
		}
		else{
			new_contents.push_back(contents[src_ctr]);
			src_ctr++;
		}
	}
	mySrcFile.close();
	return new_contents;
}

