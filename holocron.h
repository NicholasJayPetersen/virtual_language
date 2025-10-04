#ifndef HOLOCRON_H
#define HOLOCRON_H

#include <iostream>
#include <string>

class holocron{
	friend std::ostream& operator<<(std::ostream& output, holocron h);
	friend std::istream& operator>>(std::istream& input, holocron& h);
	private:
		std::string s;
	public:
		holocron(const char* n);
		holocron& operator=(const char* n);
		std::string getString(){return s;} 
};



#endif
