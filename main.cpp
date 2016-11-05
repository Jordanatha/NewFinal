#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include "FINALPROJ.hpp"
#include "FINALPROJ.cpp"

using namespace std;

int main (){
	
	Calc obj;
	Degree obj1;
	char choice;
	int number;
	float num, num1, num2;
	float total;
	string Num1, Num2;
	ofstream file;
	
	cout << "========= WELCOME TO MY CALCULATOR =========" << endl;
	do {
	cout << "Enter math operation" << endl ;
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
	cout << "Please input the number (1-10) : ";
	cin  >> number;
	cout << endl ;
	
	switch (number){
		case 1:
			cout << "Num 1 + Num 2 : " << endl;
			cin >> Num1;
			cin >> Num2;
			obj.setFunction (Num1, Num2);
			file.open ("History.txt");
			file << "The result is : " << obj.getSumFunction() << endl << endl;
			cout << "The result is : " << obj.getSumFunction() << endl << endl;
			file.close ();
			break;
			
		case 2:
			cout << "Num 1 - Num 2 : " << endl;
			cin >> Num1;
			cin >> Num2;
			obj.setFunction(Num1, Num2);
			file.open ("History.txt");
			file <<"The result is : " << obj.getMinFunction() << endl << endl;
			cout << "The result is : " << obj.getMinFunction() << endl << endl;
			file.close ();
			break;
			
		case 3:
			cout << "Num 1 : Num 2 :  " << endl;
			cin >> Num1;
			cin >> Num2;
			obj.setFunction(Num1, Num2);
			file.open ("History.txt");
			file << "The result is : " << obj.getDivisionFunction() << endl << endl;
			cout << "The result is : " << obj.getDivisionFunction() << endl << endl;
			file.close();
			break;
			
		case 4:
			cout << "Num 1 * Num 2 : " << endl;
			cin >> Num1;
			cin >> Num2;
			obj.setFunction(Num1, Num2);
			file.open ("History.txt");
			file << "The result is : " << obj.getMultiplyFunction() << endl << endl;
			cout << "The result is : " << obj.getMultiplyFunction() << endl << endl;
			file.close ();
			break;
			
		case 5:
			cout << "Enter Degree : ";
			cin >> num;
			obj1.setDegreeFunction(num, total);
			file.open ("History.txt");
			file << "Sin of (" << num << ") is : " << obj1.getSinFunction() << endl << endl;
			cout << "Sin of (" << num << ") is : " << obj1.getSinFunction() << endl << endl;
			file.close ();
			break;
			
		case 6:
			cout << "Enter Degree : ";
			cin >> num;
			obj1.setDegreeFunction(num, total);
			file.open ("History.txt");
			file << "Cos of (" << num << ") is : " << obj1.getCosFunction() << endl << endl;
			cout << "Cos of (" << num << ") is : " << obj1.getCosFunction() << endl << endl;
			file.close ();
			break;
			
		case 7:
			cout << "Enter Degree : ";
			cin >> num;
			obj1.setDegreeFunction(num, total);
			file.open ("History.txt");
			file << "Tan of  (" << num << ") is : " << obj1.getTanFunction() << endl << endl;
			cout << "Tan of  (" << num << ") is : " << obj1.getTanFunction() << endl << endl;
			file.close ();
			break;
			
		case 8:
			cout << "Number : ";
			cin >> num1;
			cout << "To the power of : ";
			cin >> num2;
			obj.setPowerFunction(num1, num2, total);
			file.open ("History.txt");
			file << "The result is : " << obj.getPowerFunction() << endl << endl;
			cout << "The result is : " << obj.getPowerFunction() << endl << endl;
			file.close ();
			break;
		
		case 9:
			cout << "Enter Number : ";
			cin >> num;
			obj.setSqrtFunction(num, total);
			file.open ("History.txt");
			file << "Squaret root of " << num << " is : " << obj.getSqrtFunction() << endl << endl;
			cout << "Squaret root of " << num << " is : " << obj.getSqrtFunction() << endl << endl;
			file.close ();
			break;
			 
		case 10:
			cout << "Enter Number : ";
			cin >> num;
			obj.setLogFunction(num, total);
			file.open ("History.txt");
			file << "Log (" << num << ") is : " << obj.getLogFunction() << endl << endl;
			cout << "Log (" << num << ") is : " << obj.getLogFunction() << endl << endl;
			file.close();
			break;
		
		default:
			cout << "There's no such number, sorry." << endl;
			cout <<  "---EXITING THE PROGRAM---";
			exit (0);
	}
	
	cout << "Do u want to add another equation? (Y/N) : ";
	cin >> choice;
}
	while (choice == 'y' || choice == 'Y');
}

