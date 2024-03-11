#include "Point.hpp"

Point::Point(void): _x(0), _y(0)
{
    return ;
}

Point::Point(float const x, float const y) : _x(x), _y(y)
{
    return ;
}

Point::Point(Point const & src) : _x(src._x), _y(src._y)
{
    return ;
}

Point::~Point(void)
{
    return ;
}

Point & Point::operator =(Point const & rhs)
{
    this->_x = rhs._x;
    this->_y = rhs._y;
}

Fixed const Point::getX(void) const
{
    return (_x);
}

Fixed const Point::getY(void) const
{
    return (_y);
}

std::ostream & operator<<(std::ostream & o, Point const & rhs)
{
    o << "(" << rhs.getX().toFloat() << ", " << rhs.getY().toFloat() << ")";
    return (o);
}