#include "Fixed.h"

Fixed::Fixed(){
	fixedPointValue = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed *src){
	fixedPointValue = src->fixedPointValue;
	std::cout << "Copy constructor called\n";
}

Fixed& Fixed::operator = (const Fixed &obj){
	fixedPointValue = obj.fixedPointValue;
	std::cout << "Copy assignment operator called\n";
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

Fixed::Fixed(int const newConstIntNum){
	fixedPointValue = newConstIntNum;
}

Fixed::Fixed(float const newConstFloatNum){
	fixedPointValue = (int)roundf(newConstFloatNum);
}

float Fixed::toFloat( void ) const{
	return (float)this->fixedPointValue;
}

int Fixed::toInt( void ) const{
	return (int)this->fixedPointValue;
}

std::ostream &operator << (std::ostream &obj, const Fixed &value){
	obj << value.toFloat();
	return (obj);
}
