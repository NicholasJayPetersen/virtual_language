#include "au.h"

au::au(int n){num = n;}
int au::getNum() const {return num;}
au& au::operator=(int x) {num = x; return *this;}
au& au::operator+=(int x) {num += x; return *this;}
au& au::operator+=(const au& other) {num += other.getNum(); return *this;}
au au::operator+(int x) const {return au(num + x);}
au au::operator+(const au& other) const {return au(num + other.getNum());}

