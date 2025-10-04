#ifndef PARSEC_H
#define PARSEC_H

class parsec{
	private:
		float num;
	public:
		parsec(float n);
		parsec* operator=(float x);
		parsec* operator+(float x);
		parsec* operator+=(parsec x);
};

#endif
