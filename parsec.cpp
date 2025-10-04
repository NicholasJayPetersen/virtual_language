#include "parsec.h"

parsec::parsec(float n){num = n;}
parsec* parsec::operator=(float x) {num = x; return this;}
//parsec* parsec::operator+(float x){return num += x};
//parsec* parsec::operator+=(parsec x){return num += x};
