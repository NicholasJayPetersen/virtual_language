#ifndef AU_H
#define AU_H

#include<iostream>

class au{
	private:
		int num;
	public:
		au(int n);
	    int getNum() const;
	
	    au& operator=(int x);
	
	    au& operator+=(int x);
	    au& operator+=(const au& other);
	
	    au operator+(int x) const;
	    au operator+(const au& other) const;
};


#endif
