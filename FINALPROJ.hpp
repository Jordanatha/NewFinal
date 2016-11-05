#ifndef FINALPROJ_hpp
#define FINALPROJ_hpp
#include <string>
#include <iostream>
using namespace std;

class Calc {
		protected :
		float num;	
		float num1;
		float num2;
		float total = 0;					
		
	public :
		Calc ();
		// to set the basic calculation : + - * :
		void setFunction (string, string);
		// to set the power calculation : ^
		void setPowerFunction (int, int, float);
		// to set the square root calculation
		void setSqrtFunction (int, float);
		// to set the logarithm calculation
		void setLogFunction (float, float);
		// to return sum result from numbers that user input in the main function
		double getSumFunction ();
		// to return min result from numbers that user input in the main function
		double getMinFunction ();
		// to return division result from numbers that user input in the main function
		double getDivisionFunction ();
		// to return multiplication result from numbers that user input in the main function
		double getMultiplyFunction ();
		// to return power result from numbers that user input in the main function 
		double getPowerFunction ();
		// to return the square root result from numbers that user input in the main function
		double getSqrtFunction ();
		// to return the logarithm result from numbers that user input in the main function
		double getLogFunction ();
};

class Degree : public Calc {
	public :
		
	// to set the degree calculation : sin(x), cos(x), tan(x)
	void setDegreeFunction (float, float);
	// to return the sin(x) result from number that user input in the main function
	double getSinFunction ();
	// to return the cos(x) result from number that user input in the main function
	double getCosFunction ();
	// to return the tan(x) result from number that user input in the main function
	double getTanFunction ();
};

#endif
