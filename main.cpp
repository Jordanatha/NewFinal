#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <iomanip>
#include "FINALPROJ.hpp"
#include "FINALPROJ.cpp"

using namespace std;

int main (){
	
	Calc obj;
	char choice;
	int number;
	float num, num1, num2;
	float total;
	string Num1, Num2 , Num;
	ofstream file;

	cout << setw(80) << "========= WELCOME TO MY CALCULATOR =========" << endl << endl;
	
	// MENU.
	do {
	cout << "Enter math operation" << endl ;
	cout << "1.  +" << endl;
	cout << "2.  -" << endl;
	cout << "3.  :" << endl;
	cout << "4.  x" << endl;
	cout << "5.  sin(x)" << endl;
	cout << "6.  cos(x)" << endl;
	cout << "7.  tan(x)" << endl;
	cout << "8.  Power (^)" << endl;
	cout << "9.  Square root" << endl;
	cout << "10. Logaritm" << endl;
	cout << "11. Exit" << endl;
	cout << "Please input the number (1-10) : ";
	cin  >> number;
	cout << endl ;
	// connects each number with each function and save to the "History.txt"
	switch (number){
		case 1:
			cout << "Num 1 + Num 2 : " << endl;
			cin >> Num1;
			cin >> Num2;
			obj.setFunction (Num1, Num2);
			file.open ("History.txt", ios :: app);
			file << "Num1 + Num2 = " << obj.getSumFunction() << endl << endl;
			cout << "The result is : " << obj.getSumFunction() << endl << endl;
			file.close ();
			break;
			
		case 2:
			cout << "Num 1 - Num 2 : " << endl;
			cin >> Num1;
			cin >> Num2;
			obj.setFunction(Num1, Num2);
			file.open ("History.txt", ios :: app);
			file <<"Num 1 - Num 2 = " << obj.getMinFunction() << endl << endl;
			cout << "The result is : " << obj.getMinFunction() << endl << endl;
			file.close ();
			break;
			
		case 3:
			cout << "Num 1 : Num 2 :  " << endl;
			cin >> Num1;
			cin >> Num2;
			obj.setFunction(Num1, Num2);
			file.open ("History.txt", ios :: app);
			file << "Num 1 : Num 2 = " << obj.getDivisionFunction() << endl << endl;
			cout << "The result is : " << obj.getDivisionFunction() << endl << endl;
			file.close();
			break;
			
		case 4:
			cout << "Num 1 * Num 2 : " << endl;
			cin >> Num1;
			cin >> Num2;
			obj.setFunction(Num1, Num2);
			file.open ("History.txt", ios :: app);
			file << "Num 1 * Num 2 = " << obj.getMultiplyFunction() << endl << endl;
			cout << "The result is : " << obj.getMultiplyFunction() << endl << endl;
			file.close ();
			break;
			
		case 5:
			cout << "Enter Degree : ";
			cin >> Num;
			obj.setDegreeFunction(Num);
			file.open ("History.txt", ios :: app);
			file << "Sin of (" << Num << ") is : " << obj.getSinFunction() << endl << endl;
			cout << "Sin of (" << Num << ") is : " << obj.getSinFunction() << endl << endl;
			file.close ();
			break;
			
		case 6:
			cout << "Enter Degree : ";
			cin >> Num;
			obj.setDegreeFunction(Num);
			file.open ("History.txt", ios :: app);
			file << "Cos of (" << Num << ") is : " << obj.getCosFunction() << endl << endl;
			cout << "Cos of (" << Num << ") is : " << obj.getCosFunction() << endl << endl;
			file.close ();
			break;
			
		case 7:
			cout << "Enter Degree : ";
			cin >> Num;
			obj.setDegreeFunction(Num);
			file.open ("History.txt", ios :: app);
			file << "Tan of  (" << Num << ") is : " << obj.getTanFunction() << endl << endl;
			cout << "Tan of  (" << Num << ") is : " << obj.getTanFunction() << endl << endl;
			file.close ();
			break;
			
		case 8:
			cout << "Number : ";
			cin >> Num1;
			cout << "To the power of : ";
			cin >> Num2;
			obj.setPowerFunction(Num1, Num2);
			file.open ("History.txt", ios :: app);
			file << Num1 << " to the power of " << Num2 << " is : " << obj.getPowerFunction() << endl << endl;
			cout << "The result is : " << obj.getPowerFunction() << endl << endl;
			file.close ();
			break;
		
		case 9:
			cout << "Enter Number : ";
			cin >> Num;
			obj.setSqrtFunction(Num);
			file.open ("History.txt", ios :: app);
			file << "Squaret root of " << Num << " is : " << obj.getSqrtFunction() << endl << endl;
			cout << "Squaret root of " << Num << " is : " << obj.getSqrtFunction() << endl << endl;
			file.close ();
			break;
			 
		case 10:
			cout << "Enter Number : ";
			cin >> Num;
			obj.setLogFunction(Num);
			file.open ("History.txt", ios :: app);
			file << "Log (" << Num << ") is : " << obj.getLogFunction() << endl << endl;
			cout << "Log (" << Num << ") is : " << obj.getLogFunction() << endl << endl;
			file.close();
			break;
		
		case 11:
			cout << "Press ENTER to exit.";
			cin.ignore();
			cin.get();
			exit (0);
		
		default:
			cout << "There's no such number, sorry." << endl;
			cout <<  "Press ENTER to exit.";
			cin.ignore();
			cin.get();
			exit (0);
	}
	
	cout << "Do u want to add another equation? (Y/N) : ";
	cin >> choice;
	cout << endl;
	
	while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N'){
		cout << "Error. Wrongly input the choice, please input either Y/N : ";
		cin >> choice;
		cout << endl;
	}
}
	while (choice == 'y' || choice == 'Y');
	if (choice == 'N' || choice == 'n'){
		cout << setw (78) << "Thank You For Using MY CALCULATOR!! :)";
	}

return 0;
}

