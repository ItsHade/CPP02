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

	Fixed & operator =(Fixed const & rhs);
    Fixed   operator +(Fixed const & rhs) const;
    Fixed   operator -(Fixed const & rhs) const;
    Fixed   operator *(Fixed const & rhs) const;
    Fixed   operator /(Fixed const & rhs) const;

    Fixed & operator ++(void);
    Fixed   operator ++(int);
    Fixed & operator --(void);
    Fixed   operator --(int);

    bool operator >(Fixed const & rhs) const;
    bool operator <(Fixed const & rhs) const;
    bool operator >=(Fixed const & rhs) const;
    bool operator <=(Fixed const & rhs) const;
    bool operator ==(Fixed const & rhs) const;
    bool operator !=(Fixed const & rhs) const;

    static Fixed const & min(Fixed const & r1, Fixed const & r2);
    static Fixed const & max(Fixed const & r1, Fixed const & r2);
    static Fixed & min(Fixed & r1, Fixed & r2);
    static Fixed & max(Fixed & r1, Fixed & r2);

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
