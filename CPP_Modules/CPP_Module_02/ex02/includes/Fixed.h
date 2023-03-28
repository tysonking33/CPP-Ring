#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed{
	private:
		int fixedPointValue;
		static const int fractionalBitCount = 8;
	public:
		Fixed();
		Fixed(Fixed *src);
		Fixed& operator = (const Fixed &obj);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		~Fixed();

		Fixed(int const newConstIntNum);
		Fixed(float const newConstFloatNum);
		float toFloat( void ) const;
		int toInt( void ) const;

		bool operator>(const Fixed &ref);
		bool operator<(const Fixed &ref);
		bool operator<=(const Fixed &ref);
		bool operator>=(const Fixed &ref);
		bool operator==(const Fixed &ref);
		bool operator!=(const Fixed &ref);

		Fixed operator+(const Fixed &ref);
		Fixed operator-(const Fixed &ref);
		Fixed operator*(const Fixed &ref);
		Fixed operator/(const Fixed &ref);

		Fixed operator++();
		const Fixed operator++(int);
		Fixed operator--();
		const Fixed operator--(int);
		
		static Fixed min(Fixed &a, Fixed &b);
		static Fixed min(const Fixed &a, const Fixed &b);
		static Fixed max(Fixed &a, Fixed &b);
		static Fixed max(const Fixed &a, const Fixed &b);


		Fixed(Fixed const &ref);
};
std::ostream & operator << (std::ostream &obj, Fixed const& value);

#endif
