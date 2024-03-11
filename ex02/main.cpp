#include "Fixed.hpp"

int main( void ) 
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    Fixed res;

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;

    Fixed const tmp(10);
    res = b/tmp;
    std::cout << b << " / 10 is " << res << std::endl;
    Fixed const tmp2(0);
    res = b/tmp2;
    std::cout << "not possible: " << res << std::endl;

    std::cout << Fixed::max( a, b ) << std::endl;
    std::cout << Fixed::max(Fixed(10), a) << std::endl;

    return 0;
}