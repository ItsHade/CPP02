#include "Fixed.hpp"

Fixed::Fixed(): _nb(0)
{
    std::cout << "Default constructor called" << std::endl;
    return ;
}



Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

int Fixed::getRawBits(void) const
{
    return (_nb);
}

void Fixed::setRawBits(const int raw) _nb(raw)
{
    return ;
}

