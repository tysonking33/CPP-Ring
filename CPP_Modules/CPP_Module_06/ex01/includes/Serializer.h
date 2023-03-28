#ifndef SERIALIZER_H
#define SERIALIZER_H

#include <cstdint>
#include <iostream>
#include "../includes/Data.h"

class Serializer{

    public:
        Serializer();
        Serializer(const Serializer& S);
        Serializer &operator=(const Serializer &src);

        uintptr_t serialize(Data* ptr);
        Data* deserialize(uintptr_t raw);

};

#endif