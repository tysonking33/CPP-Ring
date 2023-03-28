#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

using namespace std;

class Fixed{
	private:
		int fixedPointValue;
		static const int fractionalBitCount = 8;
	public:
		Fixed();
		Fixed(const Fixed &src);
		Fixed& operator = (const Fixed &obj);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		~Fixed();
};

#endif
