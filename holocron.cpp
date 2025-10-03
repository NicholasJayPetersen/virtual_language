#include "holocron.h"

holocron::holocron(const char* n) : s(n) {}		//chat GPT advised adding const because otherwise it it cannot bind string literals
holocron& holocron::operator=(const char* n) { s = n; return *this; } //chatGPT advised chaging from a point return type to a reference for chaining purposes

