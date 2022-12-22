#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>

class Zombie{
    private:
        std::string name;

    public:
        void announce( void );
        void set_name(std::string new_name);
        void get_name( void );
        ~Zombie();

}