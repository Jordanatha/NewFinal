#include <iostream>
#include <cmath>

using namespace std;

float PI = 3.14159265;

class Calc {
		private :
		float num;
		float num1;
		float num2;
		
	public :
		Calc ();
		void setSumFunction (float, float);
		void setMinFunction (float, float);
		void setDivisionFunction (float, float);
		void setMultiplyFunction (float, float);
		void setSinFunction (float);
		void setCosFunction (float);
		void setTanFunction (float);
		void setPowerFunction (int, int);
		void setSqrtFunction (int);
		void setLogFunction (float);
		
		double getSumFunction ();
		double getMinFunction ();
		double getDivisionFunction ();
		double getMultiplyFunction ();
		double getSinFunction ();
		double getCosFunction ();
		double getTanFunction ();
		double getPowerFunction ();
		double getSqrtFunction ();
		double getLogFunction ();
};

Calc :: Calc (){
	num = 0;
	num1 = 0;
	num2 = 0;
}

void Calc :: setSumFunction (float num1, float num2){
	this -> num1 = num1;
	this -> num2 = num2;
}

double Calc :: getSumFunction (){
	return num1 + num2;
}

void Calc :: setMinFunction (float num1, float num2){
	this -> num1 = num1;
	this -> num2 = num2;
}

double Calc :: getMinFunction (){
	return num1 - num2;
}

void Calc :: setDivisionFunction (float num1, float num2){
	this -> num1 = num1;
	this -> num2 = num2;
}

double Calc :: getDivisionFunction (){
	return num1 / num2;
}

void Calc :: setMultiplyFunction (float num1, float num2){
	this -> num1 = num1;
	this -> num2 = num2;
}

double Calc :: getMultiplyFunction (){
	return num1 * num2;
}

void Calc :: setSinFunction (float num){
	this -> num = num;
}

double Calc :: getSinFunction(){
	return sin (num * PI /180);
}

void Calc :: setCosFunction (float num){
	this -> num;
}

double Calc :: getCosFunction (){
	return cos (num * PI/180);
}

void Calc :: setTanFunction (float num){
	this -> num;
}

double Calc :: getTanFunction(){
	return tan (num * PI /180);
}

void Calc :: setPowerFunction (int num1, int num2){
	this -> num1 = num1;
	this -> num2 = num2;
}

double Calc :: getPowerFunction (){
	return pow(num1,num2);
}

void Calc :: setSqrtFunction(int num){
	this -> num = num;
}

double Calc :: getSqrtFunction (){
	return sqrt(num);
}

void Calc :: setLogFunction (float num){
	this -> num = num;
}

double Calc :: getLogFunction (){
	return log10(num);
}

int main (){
	
	Calc obj;
	char choice;
	int number;
	int num, num1, num2;
	
	cout << "Given these math operations :" << endl ;
	cout << "1. +" << endl;
	cout << "2. -" << endl;
	cout << "3. :" << endl;
	cout << "4. x" << endl;
	cout << "5. sin(x)" << endl;
	cout << "6. cos(x)" << endl;
	cout << "7. tan(x)" << endl;
	cout << "8. Power (^)" << endl;
	cout << "9. Square root" << endl;
	cout << "10. Logaritm" << endl;
	cout << "Please input the number : ";
	cin  >> number;
	cout << endl ;
	
	switch (number){
		case 1:
			cout << "Please input 2 numbers to sum : " << endl;
			cin >> num1 >> num2;
			cout << endl;
			obj.setSumFunction (num1, num2);
			cout << "The result is : " << obj.getSumFunction() << endl << endl;
			break;
			
		case 2:
			cout << "Please input 2 numbers to substract : " << endl;
			cin >> num1 >> num2;
			cout << endl;
			obj.setMinFunction(num1, num2);
			cout << "The result is : " << obj.getMinFunction() << endl << endl;
			break;
			
		case 3:
			cout << "Please input 2 numbers to divide : " << endl;
			cin >> num1 >> num2;
			cout << endl;
			obj.setDivisionFunction(num1, num2);
			cout << "The result is : " << obj.getDivisionFunction() << endl << endl;
			break;
			
		case 4:
			cout << "Please input 2 numbers to multiply : " << endl;
			cin >> num1 >> num2;
			cout << endl;
			obj.setMultiplyFunction(num1, num2);
			cout << "The result is : " << obj.getMultiplyFunction() << endl << endl;
			break;
			
		case 5:
			cout << "Please input degree : ";
			cin >> num;
			cout << endl;
			obj.setSinFunction(num);
			cout << "Sin of (" << num << ") is : " << obj.getSinFunction() << endl << endl;
			break;
			
		case 6:
			cout << "Please input degree : ";
			cin >> num;
			cout << endl;
			obj.setCosFunction(num);
			cout << "Cos of (" << num << ") is : " << obj.getCosFunction() << endl << endl;
			break;
			
		case 7:
			cout << "Please input degree : ";
			cin >> num;
			cout << endl;
			obj.setTanFunction(num);
			cout << "Tan of  (" << num << ") is : " << obj.getTanFunction() << endl << endl;
			break;
			
		case 8:
			cout << "Number : ";
			cin >> num1;
			cout << "To the power of : ";
			cin >> num2;
			obj.setPowerFunction(num1, num2);
			cout << "The result is : " << obj.getPowerFunction() << endl << endl;
			break;
		
		case 9:
			 cout << "Number : ";
			 cin >> num;
			 obj.setSqrtFunction(num);
			 cout << "Squaret root of " << num << " is : " << obj.getSqrtFunction() << endl << endl;
			 break;
			
	}
	
	
}


