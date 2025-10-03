#ifndef HOLOCRON_H
#define HOLOCRON_H

#include <iostream>
#include <string>

class holocron{
	private:
		std::string s;
	public:
		holocron(const char* n);
		holocron& operator=(const char* n);
		std::string getString(){return s;} 
};

#endif
