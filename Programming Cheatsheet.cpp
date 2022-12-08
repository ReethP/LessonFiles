#include <iostream>
#include <string>
using namespace std;

int main(){



	cout << "------Data types------" << endl;
	// Datatypes
	// int - stores whole numbers
	int wholeNumber = 3;
	cout << "An integer: " << wholeNumber << endl;

	// float - stores numbers with decimal places (up to 7 decimal digits)
	float floatNumber = 3.159265;
	cout << "A float: " << floatNumber << endl;

	// double - also stores numbers with decimal places (up to 15 decimal digits)
	double doubleNumber = 3.159265867782;
	cout << "A double: " << doubleNumber << endl;

	// char - stores single characters (surrounded by single quotes)
	char characterExample = 'A';
	cout << "A character: " << characterExample << endl;

	// string - stores whole words or text (surrounded by double quotes)
	string stringExample = "Hello World!";
	cout << "A string: " << stringExample << endl;


	// bool - stores 2 values only, true or false
	bool booleanExample = true;
	cout << "A boolean: " << booleanExample << endl << endl << endl;


	// these datatypes are stored into things called variables
	// there are certain rules when making variables
	//  - they HAVE to start with a letter (can be small or big letter)
	//  - they CAN have any number of letters or numbers
	//  - they CAN'T have special characters in them
	//  - they CAN'T start with a number
	int numberExample = 5, secondNumberExample;
//   ^        ^         ^           ^
//datatype  variable  value     also a variable! Declared without a value
//           name




	cout << "------Constants------" << endl;
	// Constants
	// Variables with values that we NEVER want to change and you can't change
	const float accelerationDueToGravity = 9.8;
	const double firstTenDigitsofPi = 3.1415926535; 
	//Remember we're using double here because it has more than 7 decimal digits!

	// Constants CAN'T be changed but remember that the values stored in variables CAN be changed

	int changingNumber = 1;
	cout << "The value of the variable changingNumber is: " << changingNumber << endl;

	// Change the value of the variable
	changingNumber = 5;
	cout << "The value of the variable changingNumber is: " << changingNumber << endl << endl;

	// Do operations on the variable 
	int total = 5;

	cout << "The value of total before the operation is: " << total << endl;
	total = total + 10
	//        5   + 10
	cout << "The value of total after the operation is: " << total << endl << endl << endl;





	cout << "------Operators------" << endl;
	// Just a quick review on the basic operators!
	// + addition
	// - subtraction
	// * multiplication
	// / division
	// % modulo - performs a division between the two numbers and returns the remainder
	// 5 % 3 is the same as 5 divided by 3 remainder 2. Since modulo only returns the remainder
	// 5 % 3 = 2
	
	// Note: Remember that ints can ONLY store WHOLE numbers. If you decide
	// to divide two numbers where the answer ISN'T a whole number it will
	// lose the decimal places! 

	int divisionExample = 7, divisionExampleSecond = 4;
	cout << "7 divided by 4 is: " << divisionExample/divisionExampleSecond << endl;

	// So in order to have correct answers, use floats or doubles
	float properDivisionExample = 7, properDivisionSecond = 4;
	cout << "7 divided by 4 is: " << properDivisionExample/properDivisionSecond << endl << endl << endl;





	cout << "------Comparison Operators------" << endl;

	// These type of operators return either a 0 or a 1 (1 for true
	// and 0 for false). Basically a true or a false and its very
	// very useful for knowing if something is going to be true or not

	// The operators return true if...
	// x == y if x is equal to y
	// x != y if the two values are not the same
	// x > y if the x is greater than the right
	// x < y if the x is less than the left
	// x >= y if x is greater than or equal to y
	// x <= y if x is less than or equal to y

	int compFirst = 5, compSecond 3;
	cout << "Five is equal to 3" << compFirst == compSecond << endl;
	cout << "Five is not equal to 3" << compFirst != compSecond << endl;
	cout << "Five greater than 3" << compFirst > compSecond << endl;
	cout << "Five less than 3" << compFirst < compSecond << endl;
	cout << "Five is greater than or equal to 3" << compFirst >= compSecond << endl;
	cout << "Five is less than or equal to 3" << compFirst <= compSecond << endl;



	// 	AND       &&
	//   T  F
	// T T  F
	// F F  F
	// 

	// 	OR        ||
	//   T  F
	// T T  T
	// F T  F
	// 







}