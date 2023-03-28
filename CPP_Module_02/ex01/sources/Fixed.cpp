#include "../includes/Fixed.h"

Fixed::Fixed(){
	fixedPointValue = 0;
	std::cout << " Default constructor called\n";
}

Fixed::Fixed(const Fixed &src){
	*this = src;
    std::cout << "Copy constructor called\n";
}

Fixed& Fixed::operator = (const Fixed &obj){
	this->fixedPointValue = obj.fixedPointValue;
	std::cout << " Copy assignment operator called\n";
	return *this;
}

int Fixed::getRawBits( void ) const{
	return this->fixedPointValue;
	std::cout << " getRawBits member function called\n";
}

void Fixed::setRawBits( int const raw ){
	this->fixedPointValue = raw;
	std::cout << " setRawBits member function called\n";
}

Fixed::Fixed(int const newConstIntNum): fixedPointValue( newConstIntNum << fractionalBitCount){
	std::cout << " Int constructor called\n";
}

Fixed::Fixed(float const newConstFloatNum): fixedPointValue(roundf(newConstFloatNum*(1 << fractionalBitCount))){
	std::cout << " Float constructor called\n";
}

float Fixed::toFloat( void ) const{
    float floatValue = (float)(this->fixedPointValue / (float)(1 << fractionalBitCount));
	return (floatValue);
}

int Fixed::toInt( void ) const{
	return (this->fixedPointValue >> fractionalBitCount);
}

std::ostream& operator<<(std::ostream& obj, Fixed const& value){
	obj << value.toFloat();
	return (obj);
}

Fixed::~Fixed(){
	std::cout << "Destructor called\n";
}