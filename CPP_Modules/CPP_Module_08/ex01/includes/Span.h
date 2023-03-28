#ifndef SPAN_H
#define SPAN_H

/*

Develop a Span class that can store a maximum of N integers. N is an unsigned int
variable and will be the only parameter passed to the constructor.
This class will have a member function called addNumber() to add a single number
to the Span. It will be used in order to fill it. Any attempt to add a new element if there
are already N elements stored should throw an exception.
Next, implement two member functions: shortestSpan() and longestSpan()
They will respectively find out the shortest span or the longest span (or distance, if
you prefer) between all the numbers stored, and return it. If there are no numbers stored,
or only one, no span can be found. Thus, throw an exception.
Of course, you will write your own tests and they will be way more thorough than the
ones below. Test your Span at least with a minimum of 10 000 numbers. More would be
even better.

*/

#include <iostream>
#include <stack>
#include <vector>

class Span{
    public:
        std::vector <int>containered;
        int sizeUp;

        Span();
        Span(const Span& S);
        Span(unsigned int N);
        void addNumber(int newNumber);
        long int shortestSpan();
        long int longestSpan();
        void addNumber(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end);


        class full : public std::exception{
            public:
                virtual const char *what() const throw();
        };

        class empty : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        Span& operator=(const Span& source);
};

#endif