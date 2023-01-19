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
		Fixed& operator = (Fixed &obj);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		~Fixed();
};

#endif
