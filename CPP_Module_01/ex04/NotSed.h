#ifndef NOTSET_H
#define NOTSET_H

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

class NotSet{
private:
    std::string s1;
    std::string s2;
    std::string filename;
    ifstream src_file;
    ofstream dest_file;
public:
    NotSet();
    void open();
    void read();
    void copy();
    void replace();
    ~NotSet();
}

#endif