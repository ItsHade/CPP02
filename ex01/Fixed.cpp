#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(int const nb)
{
    std::cout << "Int constructor called" << std::endl;
    _value = nb << _bits;
    return ;
}

Fixed::Fixed(float const f) 
{
    std::cout << "Float constructor called" << std::endl;
    _value = roundf(f * (1 << _bits));
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

float Fixed::toFloat(void) const
{
    return (static_cast<float>(_value) / (1 << _bits));
}

int Fixed::toInt(void) const
{
    return (_value >> _bits);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
    o << rhs.toFloat();
    return (o);
}