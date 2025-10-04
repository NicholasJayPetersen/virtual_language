#include "Space.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	au integer = 1;
	integer = 2;
	parsec aFloat = 1.5;
	aFloat = 3.5;
	megaparsec aDouble = 2.4958;
	aDouble = 3.234455;
	singularity aDecimal = 2.23849028340298340285;
	aDecimal = 5343456547.3245345678876543432;
	glyph character = 'a';
	character = 'b';	
	
	holocron daddyIssues = "string";
	daddyIssues = "I am your father";

	push | "May the force be with you.";
	push | force;
	push | daddyIssues | force;

	pull | daddyIssues;
	push | daddyIssues;
	
	//next step: overload arithemetic operators for each type
	aFloat += 3.5;
	
	integer += 1;
	
	aDouble += 4.3245;
	
	aDecimal += 2.435234;
	
	daddyIssues += " - Darth Vader";
	
	return 0;
}
