#include "megaparsec.h"

megaparsec::megaparsec(double n){num = n;}
megaparsec* megaparsec::operator=(double x) {num = x; return this;}
