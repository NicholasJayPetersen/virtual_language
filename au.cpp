#include "au.h"

au::au(int n){num = n;}
au* au::operator=(int x) {num = x; return this;}
