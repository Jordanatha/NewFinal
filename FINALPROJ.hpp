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
		void setFunction (string, string);
		void setPowerFunction (int, int, float);
		void setSqrtFunction (int, float);
		void setLogFunction (float, float);
		double getSumFunction ();
		double getMinFunction ();
		double getDivisionFunction ();
		double getMultiplyFunction ();
		double getPowerFunction ();
		double getSqrtFunction ();
		double getLogFunction ();
};

class Degree : public Calc {
	public :
		
	void setDegreeFunction (float, float);
	double getSinFunction ();
	double getCosFunction ();
	double getTanFunction ();
};

#endif
