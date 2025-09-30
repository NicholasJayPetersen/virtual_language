#include <string>

class Space{
	
};

class au{
	private:
		int num;
	public:
		au(int n){num = n;}
		au* operator=(int x) {num = x; return this;}
};

class parsec{
	private:
		float num;
	public:
		parsec(float n){num = n;}
		parsec* operator=(float x) {num = x; return this;}
};

class megaparsec{
	private:
		double num;
	public:
		megaparsec(double n){num = n;}
		megaparsec* operator=(double x) {num = x; return this;}
};

class singularity{
	private:
		long double num;
	public:
		singularity(long double n){num = n;}
		singularity* operator=(long double x) {num = x; return this;}
};

class glyph{
	private:
		char a;
	public:
		glyph(char n){a = n;}
		glyph* operator=(char x) {a = x; return this;}
};

class holocron{
	private:
		std::string s;
	public:
		holocron(std::string n){s = n;}
		holocron( char* n) {s = n;}
		holocron* operator=(std::string x) {s = x; return this;}
};
