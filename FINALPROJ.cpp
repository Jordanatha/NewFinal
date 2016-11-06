//THIS FILE INCLUDES ALL THE FUNCTIONS THAT USED TO BE WORKED HERE//

#include <iostream>
#include <cmath>
#include <string>
#include "FINALPROJ.hpp"

using namespace std;

float PI = 3.14159265;

Calc :: Calc (){
	num = 0;
	num1 = 0;
	num2 = 0;
}

void Calc :: setFunction (string word1, string word2){
	// for the "Ans" feature //
	if(word1 == "Ans" || word1 == "ans"){
		num1 = total;
		num2 = stof(word2);
	}
	else if(word2 == "Ans" || word2 == "ans"){
		num2 = total;
		num1 = stof(word1);
	}
	else{
	this -> num1 = stof(word1);
	this -> num2 = stof(word2);
	}
}

double Calc :: getSumFunction (){
	total = num1 + num2;
	return total;
}

double Calc :: getMinFunction (){
	total = num1-num2;
	return total;
}

double Calc :: getDivisionFunction (){
	total = num1/num2;
	return total;
}

double Calc :: getMultiplyFunction (){
	total = num1*num2;
	return total;
}

void Calc :: setDegreeFunction (string word3){
	if(word3 == "Ans" || word3 == "ans"){
		num = total;
	}
	
	else {
	this -> num = stof(word3);
	}
}

double Calc :: getSinFunction(){
	total = sin (num * PI /180);
	return total;
}

double Calc :: getCosFunction (){
	total = cos (num * PI/180);
	return total;
}

double Calc :: getTanFunction(){
	total = tan (num * PI /180); 
	return total;
}

void Calc :: setPowerFunction (string word1, string word2){
	if(word1 == "Ans" || word1 == "ans"){
		num1 = total;
		num2 = stof(word2);
	}
	else if(word2 == "Ans" || word2 == "ans"){
		num2 = total;
		num1 = stof(word1);
	}
	else{
	this -> num1 = stof(word1);
	this -> num2 = stof(word2);
	}
}

double Calc :: getPowerFunction (){
	total = pow(num1,num2);
	return total;
}

void Calc :: setSqrtFunction(string word3){
	if(word3 == "Ans" || word3 == "ans"){
		num = total;
	}
	
	else {
	this -> num = stof(word3);
	this -> total = total;
	}
}

double Calc :: getSqrtFunction (){
	total = sqrt(num);
	return total;
}

void Calc :: setLogFunction (string word3){
	if(word3 == "Ans" || word3 == "ans"){
		num = total;
	}
	
	else {
	this -> num = stof(word3);
	this -> total = total;
	}
}
double Calc :: getLogFunction (){
	total = log10(num);
	return total;
}
