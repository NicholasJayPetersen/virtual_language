#include "glyph.h"

glyph::glyph(char n){a = n;}
glyph* glyph::operator=(char x) {a = x; return this;}
