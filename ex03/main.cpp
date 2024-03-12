#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(const Point a, const Point b, const Point c, const Point point);

int main( void ) 
{
    Point a(1.0f, 1.0f);
    Point b(1.0f, 0.0f);
    Point c(0.0f, 0.0f);

    Point inPoint(0.5f, 0.1f);
    Point outPoint(2.0f, 2.0f);
    Point onPoint(1.0f, 0.5f);
    Point cornerPoint(0.7f, 0.5f);

    std::cout << "If numbers matches it means that bsp works:" << std::endl;
    std::cout << "1 : " << bsp(a, b, c, inPoint) << std::endl;
    std::cout << "0 : " << bsp(a, b, c, outPoint) << std::endl;
    std::cout << "0 : " << bsp(a, b, c, onPoint) << std::endl;
    std::cout << "1 : " << bsp(a, b, c, cornerPoint) << std::endl;

    return 0;
}