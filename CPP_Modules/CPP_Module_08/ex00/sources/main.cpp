#include "../includes/easyfind.h"

#include <iostream>
#include <vector>

int main(){
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(12);
    vec.push_back(49);
    vec.push_back(28);
    vec.push_back(39);
    vec.push_back(9);
    std::cout << easyfind(vec, 1) << std::endl;
    std::cout << easyfind(vec, 9) << std::endl;
    std::cout << easyfind(vec, 90) << std::endl;
    std::cout << easyfind(vec, 0) << std::endl;

    return 0;
}