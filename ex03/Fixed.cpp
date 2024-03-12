#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
    return ;
}

Fixed::Fixed(int const nb)
{
    _value = nb << _bits;
    return ;
}

Fixed::Fixed(float const f) 
{
    _value = roundf(f * (1 << _bits));
    return ;
}

Fixed::Fixed(Fixed const & src)
{
	*this = src;
	return ;
}

Fixed::~Fixed()
{
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


float Fixed::toFloat(void) const
{
    return (static_cast<float>(_value) / (1 << _bits));
}

int Fixed::toInt(void) const
{
    return (_value >> _bits);
}

Fixed & Fixed::operator =(Fixed const & rhs)
{
    _value = rhs._value;
    return (*this);
}

Fixed Fixed::operator +(Fixed const & rhs) const
{
    return (Fixed(this->toFloat() + rhs.toFloat())); 
}

Fixed Fixed::operator -(Fixed const & rhs) const
{
    return (Fixed(this->toFloat() - rhs.toFloat())); 
}

Fixed Fixed::operator *(Fixed const & rhs) const
{
    return (Fixed(this->toFloat() * rhs.toFloat())); 
}

Fixed Fixed::operator /(Fixed const & rhs) const
{
    if (rhs == Fixed(0))
    {
        std::cout << "Division by zero is not possible" << std::endl;
        return (Fixed(0));
    }
    return (Fixed(this->toFloat() / rhs.toFloat())); 
}


Fixed & Fixed::operator ++(void)
{
    ++this->_value;
    return (*this);
}

Fixed Fixed::operator ++(int)
{
    Fixed tmp(*this);
    tmp._value = this->_value++;
    return (tmp);
}

Fixed & Fixed::operator --(void)
{
    --this->_value;
    return (*this);
}

Fixed Fixed::operator --(int)
{
    Fixed tmp(*this);
    tmp._value = this->_value--;
    return (tmp);
}

bool Fixed::operator >(Fixed const & rhs) const
{
    return (this->getRawBits() > rhs.getRawBits());
}

bool Fixed::operator >=(Fixed const & rhs) const
{
    return (this->getRawBits() >= rhs.getRawBits());
}

bool Fixed::operator <(Fixed const & rhs) const
{
    return (this->getRawBits() < rhs.getRawBits());
}

bool Fixed::operator <=(Fixed const & rhs) const
{
    return (this->getRawBits() <= rhs.getRawBits());
}

bool Fixed::operator ==(Fixed const & rhs) const
{
    return (this->getRawBits() == rhs.getRawBits());
}

bool Fixed::operator !=(Fixed const & rhs) const
{
    return (this->getRawBits() != rhs.getRawBits());
}

/*
Une fonction membre déclarée static a la particularité de pouvoir être appelée 
sans devoir instancier la classe.
*/
Fixed const & Fixed::min(Fixed const & r1, Fixed const & r2)
{
    if (r1 < r2)
        return (r1);
    return (r2);
}

Fixed const & Fixed::max(Fixed const & r1, Fixed const & r2)
{
    if (r1 > r2)
        return (r1);
    return (r2);
}

Fixed & Fixed::min(Fixed & r1, Fixed & r2)
{
    if (r1 < r2)
        return (r1);
    return (r2);
}

Fixed & Fixed::max(Fixed & r1, Fixed & r2)
{
    if (r1 > r2)
        return (r1);
    return (r2);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
    o << rhs.toFloat();
    return (o);
}