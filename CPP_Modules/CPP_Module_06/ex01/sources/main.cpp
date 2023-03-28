#include "../includes/Serializer.h"

int main(){
    Serializer *S = new Serializer();


    Data *cock = new Data();
    uintptr_t serialise_cock;

    cock->value = 30;
    serialise_cock = S->serialize(cock);

    Data *deserializeCock;
    deserializeCock = S->deserialize(serialise_cock);
    std::cout << "deserializeCock: " << deserializeCock->value << std::endl;

    return 0;
}