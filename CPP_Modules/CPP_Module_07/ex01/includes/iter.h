#ifndef ITER_H
#define ITER_H

#include <iostream>
/*
Implement a function template iter that takes 3 parameters and returns nothing.
• The first parameter is the address of an array.
• The second one is the length of the array.
• The third one is a function that will be call on every element of the array.
*/

template<typename T>
void nuffink_innit(T *array, size_t arrayLen, void (*onTheElements)(T &))
{
    if (array != NULL && onTheElements != NULL)
    {
        for (size_t i = 0; i < arrayLen; i++)
            onTheElements(array[i]);
    }

    for (size_t i = 0; i < arrayLen; i++){
        std::cout << array[i] << std::endl;
    }
}

#endif