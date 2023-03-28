#include "../includes/Span.h"

Span::Span():sizeUp(0){
    std::cout << "Default Span constructor called\n";
}

Span::Span(unsigned int N):sizeUp(N){
std::cout << "Span constructor called\n";
}

Span::Span(const Span& S):containered(S.containered), sizeUp(0){
    std::cout << "Copy Span constructor called\n";
}

void Span::addNumber(int newNumber){
    if ((int)containered.size() >= sizeUp)
        throw Span::full();
    containered.push_back(newNumber);
}

long int Span::shortestSpan(){
    int max = 2147483646;
    if ((int)containered.size() == 0){
        throw Span::empty();
    }
    else{
        for (int i = 0; i <= (int)containered.size(); i++){
            for (int j = i+1 ; j < (int)containered.size(); j++){
                if (abs(containered[i] - containered[j]) < max){
                    max = abs(containered[i] - containered[j]);
                }
            }
        }
    }
    return max;
}

long int Span::longestSpan(){
    int min = 0;
    if ((int)containered.size() == 0)
        throw Span::empty();
    else{
        for (int i = 0; i <= (int)containered.size(); i++){
            for (int j = i+1 ; j < (int)containered.size(); j++){
                if (abs(containered[i] - containered[j]) > min){
                    min = abs(containered[i] - containered[j]);
                }
            }
        }
    }
    return min;
}

void Span::addNumber(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end){
    int size = std::distance(begin, end);
    sizeUp = sizeUp + size;
	if (size > static_cast<int>(size))
		throw Span::full();
    containered.insert(containered.end(), begin, end);
    /*for (int i = 0; i < 100; i++)
        std::cout << containered[i] << std::endl;
    std::cout << "fininish\n";*/
}


Span& Span::operator=(const Span& source){
    std::cout << "Assignment Span operator called\n";
    if (this->containered.empty())
        delete[] &this->containered;
    if (source.sizeUp != 0){
        this->sizeUp = source.sizeUp;
        for (int i = 0; i < source.sizeUp; i++){
            this->containered.push_back(source.containered[i]);
        }
    }
    return *this;
}

const char *Span::full::what() const throw(){
    return ("boi we full");
}

const char *Span::empty::what() const throw(){
    return ("boi spam's empty");
}