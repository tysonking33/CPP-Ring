#include "../includes/Fixed.h"

Fixed::Fixed(){
	fixedPointValue = 0;
	std::cout << "fixed point value is: " << fixedPointValue << " Default constructor called\n";
}

Fixed::Fixed(Fixed *src){
	this->fixedPointValue = src->fixedPointValue;
	std::cout << "fixed point value is: " << fixedPointValue << " Copy constructor called\n";
}

Fixed& Fixed::operator = (const Fixed &obj){
	this->fixedPointValue = obj.fixedPointValue;
	std::cout << "fixed point value is: " << fixedPointValue << " Copy assignment operator called\n";
	return *this;
}

int Fixed::getRawBits( void ) const{
	return this->fixedPointValue;
	std::cout << "fixed point value is: " << fixedPointValue << " getRawBits member function called\n";
}

void Fixed::setRawBits( int const raw ){
	this->fixedPointValue = raw;
	std::cout << "fixed point value is: " << fixedPointValue << " setRawBits member function called\n";
}

Fixed::~Fixed(){
	std::cout << "Destructor called\n";
}

Fixed::Fixed(int const newConstIntNum): fixedPointValue( newConstIntNum << fractionalBitCount){
	std::cout << "fixed point value is: " << fixedPointValue << " Int constructor called\n";
}

Fixed::Fixed(float const newConstFloatNum): fixedPointValue(roundf(newConstFloatNum*(1 << fractionalBitCount))){
	std::cout << "fixed point value is: " << fixedPointValue << " Float constructor called\n";
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
	std::cout << " << overload\n";
	return (obj);
}

bool Fixed::operator>(const Fixed &ref){
	return ((fixedPointValue > ref.fixedPointValue) ? true : false);
}

bool Fixed::operator<(const Fixed &ref){
	return ((fixedPointValue < ref.fixedPointValue) ? true : false);
}

bool Fixed::operator<=(const Fixed &ref){
	return ((fixedPointValue <= ref.fixedPointValue) ? true : false);
}

bool Fixed::operator>=(const Fixed &ref){
	return ((fixedPointValue >= ref.fixedPointValue) ? true : false);
}

bool Fixed::operator!=(const Fixed &ref){
	return ((fixedPointValue != ref.fixedPointValue) ? true : false);
}

bool Fixed::operator==(const Fixed &ref){
	return ((fixedPointValue == ref.fixedPointValue) ? true : false);
}

Fixed Fixed::operator+(const Fixed &ref){
	Fixed temp(fixedPointValue + ref.fixedPointValue);
	return temp;
}

Fixed Fixed::operator-(const Fixed &ref){
	Fixed temp(fixedPointValue - ref.fixedPointValue);
	return temp;
}

Fixed Fixed::operator*(const Fixed &ref){
	Fixed temp(fixedPointValue * ref.fixedPointValue);
	return temp;
}

Fixed Fixed::operator/(const Fixed &ref){
	Fixed temp(fixedPointValue / ref.fixedPointValue);
	return temp;
}

Fixed Fixed::operator++()
{
	fixedPointValue++;
	return *this;
}

const Fixed Fixed::operator++(int){
	Fixed temp = *this;
	fixedPointValue++;
	return temp;
}

Fixed Fixed::operator--(){
	fixedPointValue--;
	return *this;
}

const Fixed Fixed::operator--(int){
	Fixed temp = *this;
	fixedPointValue--;
	return temp;
}

Fixed Fixed::min(Fixed &a, Fixed &b){
	if (a.getRawBits() <= b.getRawBits())
		return a;
	else
		return b;
}

Fixed Fixed::min(const Fixed &a, const Fixed &b){
	if (a.getRawBits() <= b.getRawBits())
		return a;
	else
		return b;
}

Fixed Fixed::max(Fixed &a, Fixed &b){
	if (a.getRawBits() >= b.getRawBits())
		return a;
	else
		return b;
}

Fixed Fixed::max(const Fixed &a, const Fixed &b){
	if (a.getRawBits() >= b.getRawBits())
		return a;
	else
		return b;
}


Fixed::Fixed(Fixed const &ref)
{
	*this = ref;
}
