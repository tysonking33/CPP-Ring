#include "../includes/iter.h"

void doubleCock(int &source){
    std::cout << "source " << source << std::endl;
    source = source * 2;
    std::cout << "source " << source << std::endl;
    std::cout << "\n\n\n";
}

void deezNutz(char &source){
    source = 'D';
}


int main(){
    int array[5] = {1,2,3,3,4};
    nuffink_innit(array, 5, doubleCock);

    char whhooooo[5] = {'A', 'B', 'C', 'D', 'E'};
    nuffink_innit(whhooooo, 5, deezNutz);

    return 0;
}