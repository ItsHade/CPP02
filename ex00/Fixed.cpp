#include "Fixed.hpp"

Fixed::Fixed() : _nb(0)
{
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
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

void Fixed::setRawBits(const int raw) : _nb(raw)
{
    return ;
}

