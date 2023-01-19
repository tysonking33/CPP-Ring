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
		std::ostream & operator<<(std::ostream &obj, const Fixed &value);
};

#endif
