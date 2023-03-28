#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <stack>
#include <iostream>

template <class T>
class MutantStack: public std::stack<T>{

    public:
        /*struct iterator
        {
            public:
                using iterator_category = std::forward_iterator_tag;
                using difference_type   = std::ptrdiff_t;
                using value_type        = T;
                using pointer           = T*;  // or also value_type*
                using reference         = T&;  // or also value_type&
                iterator(pointer ptr) : m_ptr(ptr) {}

                reference operator*() const { return *m_ptr; }
                pointer operator->() { return m_ptr; }

                // Prefix increment
                iterator& operator++() { m_ptr++; return *this; }

                // Postfix increment
                iterator operator++(int) { iterator tmp = *this; ++(*this); return tmp; }

                friend bool operator== (const iterator& a, const iterator& b) { return a.m_ptr == b.m_ptr; };
                friend bool operator!= (const iterator& a, const iterator& b) { return a.m_ptr != b.m_ptr; };

            private:
                pointer m_ptr;
        };*/

        MutantStack<T>(){}

        MutantStack<T> &operator=(const MutantStack<T> &source){
            *this = source;
            return *this;
        }

        MutantStack(MutantStack<T> const &source){
            *this = source;
        }

	    typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin() { return this->c.begin()/*iterator(&sause[0])*/; }
        iterator end()   { return this->c.end()/*iterator(&sause[200])*/; } // 200 is out of bounds

        ~MutantStack(){
            std::cout << "oopsie poopsie MutantStack has been destroyed, UWU\n";
        }

};

#endif