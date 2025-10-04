#include "push.h"
#include "au.h" 
Push push; 

std::string force = "\n";

Push& Push::operator|(const au& a) 
{
    std::cout << a.getNum();
    return *this;
}
