#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

class Fixed {

public :

    Fixed(void);
    Fixed(int const nb);
    Fixed (float const f);

	Fixed(Fixed const & src);
    ~Fixed(void);
	Fixed & operator=(Fixed const & rhs);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
    
private :

    int _value;
    const static int _bits = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);


#endif
