#include "../includes/Serializer.h"

Serializer::Serializer(){
    std::cout << "Default Serializer constructor called\n";
}
Serializer::Serializer(const Serializer& S){
    std::cout << "Copy Serializer constructor called\n";
}

Serializer &Serializer::operator=(const Serializer &src){
    std::cout << "Serializer Assignation operator called" << std::endl;
    if (this == &src)
        return *this;
    // nothing to assign in this class, all constants
    return *this;
}

/*
uintptr_t serialize(Data* ptr);
    It takes a pointer and converts it to the unsigned integer type uintptr_t.
Data* deserialize(uintptr_t raw);
    It takes an unsigned integer parameter and converts it to a pointer to Data
*/

uintptr_t Serializer::serialize(Data* ptr){
    return (reinterpret_cast<std::uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw){
    return (reinterpret_cast<Data*>(raw));
}

