#include "Fixed.h"

Fixed::Fixed(){
	fixedPointValue = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed *src){
	fixedPointValue = src->fixedPointValue;
	std::cout << "Copy constructor called\n";
}

Fixed& Fixed::operator = (Fixed &obj){
	fixedPointValue = obj.fixedPointValue;
	std::cout << "Copy assignment operator called\n";
	return obj;
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
