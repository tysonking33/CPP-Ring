#include "../includes/Fixed.h"

Fixed::Fixed(){
	fixedPointValue = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &src){
    *this = src;
    std::cout << "Copy constructor called\n";
}

Fixed& Fixed::operator = (const Fixed &obj){
    if (this != &obj)
		this->fixedPointValue = obj.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called\n";
	return this->fixedPointValue;
}

void Fixed::setRawBits( int const raw ){
	std::cout << "setRawBits member function called\n";
	this->fixedPointValue = raw;
}

Fixed::~Fixed(){
	std::cout << "Destructor called\n";
}
