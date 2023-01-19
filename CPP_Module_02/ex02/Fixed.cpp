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
	fixedPointValue = newConstIntNum << fractionalBitCount;
}

Fixed::Fixed(float const newConstFloatNum){
	std::cout << "cum\n";
	//fixedPointValue = roundf(newConstFloatNum * (1 << Fixed::fractionalBitCount));
	fixedPointValue = roundf( newConstFloatNum);
	std::cout << "the fixed Point value is :" << fixedPointValue << std::endl;
}

float Fixed::toFloat( void ) const{
	return ((float)(this->fixedPointValue / (float)(1 << fractionalBitCount)));
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
