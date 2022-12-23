#include "NotSet.h"

NotSet::NotSet(){
    std::cout << "Input filename: ";
    std::cin >> filename;
    std::cout << "Input phrase to change: ";
    std::cin >> s1;
    std::cout << "Input phrase to change to: ";
    std::cin >> s2;
}


void NotSet::open(){
    src_file.open(filename);
    if (!src_file)
        std::cout << "file can't be read(L in chat)\n";
}

void NotSet::read(){
    std::string line_poggers;
    while (getline(src_file, line_poggers))
        std::cout << line_poggers;
}

void NotSet::copy(){
    dest_file.open("dest_file.txt");
    std::string line_poggers;
    while (getline(src_file, line_poggers)){
        while (string_inside(line_poggers, s1) != -1)
            replace();
        dest_file << line_poggers << std::endl;
    }
}

int string_inside(std::string haystack, std::string needle)
{
	int haystack_ctr = 0;
	int needle_ctr = 0;
	while (haystack[haystack_ctr])
	{
		needle_ctr = 0;
		while (haystack[haystack_ctr + needle_ctr] == needle[needle_ctr])
		{
			if (needle_ctr == needle.length() - 1)
				return haystack_ctr;
			needle_ctr++;
		}
		haystack_ctr++;
	}
	return -1;
}

void NotSet::replace(){
    
}