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
        while (string_inside(&line_poggers) != TRUE)
            replace();
        dest_file << line_poggers << std::endl;
    }
}

void NotSet::replace(){

}