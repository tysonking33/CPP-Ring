#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

/*
Construction with no parameter: Creates an empty array.
• Construction with an unsigned int n as a parameter: Creates an array of n elements
initialized by default.
Tip: Try to compile int * a = new int(); then display *a.
• Construction by copy and assignment operator. In both cases, modifying either the
original array or its copy after copying musn’t affect the other array.
• You MUST use the operator new[] to allocate memory. Preventive allocation (al-
locating memory in advance) is forbidden. Your program must never access non-
allocated memory.
• Elements can be accessed through the subscript operator: [ ].
• When accessing an element with the [ ] operator, if its index is out of bounds, an
std::exception is thrown.
• A member function size() that returns the number of elements in the array. This
member function takes no parameter and musn’t modify the current instance
*/

template <typename T>
class Array{
    public:
        T *arraynus;
        int arraySize;

        Array():arraySize(0){
            this->arraynus = new T[this->arraySize];
            //this->arraynus = NULL;
        }

        Array(unsigned int n):arraySize(n){
            this->arraynus = new T[this->arraySize];
            for (unsigned int i = 0; i < n; i++)
                this->arraynus[i] = 0;
        }

        Array(const Array& p1):arraySize(p1.size())
        {
            this->arraynus = NULL;
            *this = p1;
        }

        T &operator[](unsigned int index) const
        {
            if (index >= this->size() || this->arraynus == NULL){
                std::cout << "index: " << index << " this size "<< this->size() <<std::endl;
                throw Array<T>::outtaBounds();
            }
            return this->arraynus[index];
        }

        unsigned int size() const{
            return this->arraySize;
        }

        Array& operator=(const Array& source){
            if (this->arraynus != NULL)
                delete[] this->arraynus;
            if (source.size() != 0){
                this->arraySize = source.size();
                this->arraynus = new T[this->arraySize];
                for (unsigned int i = 0; i < this->size(); i++){
                    this->arraynus[i] = source.arraynus[i];
                }
            }
            return *this;
        }

        class outtaBounds : public std::exception
        {
            public:
                virtual const char *what() const throw(){
                    return ("outta bounds babbbayyyyy");
                }
        };

        ~Array(){
            if (this->arraynus != NULL)
                delete[] this->arraynus;
        }
};

#endif