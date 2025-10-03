#include "singularity.h"

singularity::singularity(long double n){num = n;}
singularity* singularity::operator=(long double x) {num = x; return this;}
