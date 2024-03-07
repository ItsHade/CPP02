#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>

class Fixed {

public :
    
    Fixed();
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
    


private : 
    int fixed;
    const static int bits = 8;
};

#endif