#ifndef EASYFIND_H
#define EASYFIND_H
/*

template <typename T>
T add(T num1, T num2) {
   return (num1 + num2);
}

Write a function template easyfind that accepts a type T. It takes two parameters.
The first one has type T and the second one is an integer.
Assuming T is a container of integers, this function has to find the first occurrence
of the second parameter in the first parameter.
If no occurrence is found, you can either throw an exception or return an error value
of your choice. If you need some inspiration, analyze how standard containers behave.

*/

template <typename T>
int easyfind(T containered, int number){
    int i;
    int containerSize = 0;

    i = 0;
    while (containered[containerSize])
        containerSize++;
    while((containered[i] != number) && (i < containerSize))
        i++;
    if (i >= containerSize)
        return -1;
    return i;
};

#endif
