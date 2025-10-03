#include "parsec.h"

parsec::parsec(float n){num = n;}
parsec* parsec::operator=(float x) {num = x; return this;}
