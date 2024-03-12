#include "Point.hpp"


//a, b, c : Les sommets du triangle
//point le point a evaluer
//retourne true si le point est dans le triangle.
bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Point v0(c.getX().toFloat() - a.getX().toFloat(), c.getY().toFloat() - a.getY().toFloat());
    Point v1(b.getX().toFloat() - a.getX().toFloat(), b.getY().toFloat() - a.getY().toFloat());
    Point v2(point.getX().toFloat() - a.getX().toFloat(), point.getY().toFloat() - a.getY().toFloat());

    float dot00 = v0.getX().toFloat() * v0.getX().toFloat() + v0.getY().toFloat() * v0.getY().toFloat();
    float dot01 = v0.getX().toFloat() * v1.getX().toFloat() + v0.getY().toFloat() * v1.getY().toFloat();
    float dot02 = v0.getX().toFloat() * v2.getX().toFloat() + v0.getY().toFloat() * v2.getY().toFloat();
    float dot11 = v1.getX().toFloat() * v1.getX().toFloat() + v1.getY().toFloat() * v1.getY().toFloat();
    float dot12 = v1.getX().toFloat() * v2.getX().toFloat() + v1.getY().toFloat() * v2.getY().toFloat();

    float invDenom = 1 / (dot00 * dot11 - dot01 * dot01);
    float u = (dot11 * dot02 - dot01 * dot12) * invDenom;
    float v = (dot00 * dot12 - dot01 * dot02) * invDenom;

    return (u > 0) && (v > 0) && (u + v < 1);

}   