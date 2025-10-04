#ifndef PULL_H
#define PULL_H

#include <iostream>

class Pull{	
	public:
		template<typename T>
	    Pull& operator|(T& value) {
	        std::cin >> value;
	        return *this;
	    }
};

extern Pull pull;

#endif
