#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
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
    std::cout << "getRawBits member function called" << std::endl;
    return (_value);
}

void Fixed::setRawBits(const int raw)
{
    this->_value = raw;
    return ;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_value = rhs.getRawBits();
    return (*this);
}