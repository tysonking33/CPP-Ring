#ifndef WHATEVER_H
#define WHATEVER_H

#include <iostream>

/*
swap: Swaps the values of two given arguments. Does not return anything.

min: Compares the two values passed in its arguments and returns the smallest
one. If the two of them are equal, then it returns the second one.

max: Compares the two values passed in its arguments and returns the greatest one.
If the two of them are equal, then it returns the second one.   */


template<typename T>
void swap(T &x, T &y)
{
    T temp = x;
    x = y;
    y = temp;
}

template<typename U>
U min(U &x, U &y)
{
    if (x < y)
        return x;
    else
        return y;
}

template<typename V>
V max(V &x, V &y)
{
    if (x > y)
        return x;
    else
        return y;
}

#endif