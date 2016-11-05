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

void Degree :: setDegreeFunction (float num, float total){
	this -> num = num;
	this -> total = total;
}

double Degree :: getSinFunction(){
	total = sin (num * PI /180);
	return total;
}

double Degree :: getCosFunction (){
	total = cos (num * PI/180);
	return total;
}

double Degree :: getTanFunction(){
	total = tan (num * PI /180); 
	return total;
}

void Calc :: setPowerFunction (int num1, int num2, float total){
	this -> num1 = num1;
	this -> num2 = num2;
	this -> total = total;
}

double Calc :: getPowerFunction (){
	total = pow(num1,num2);
	return total;
}

void Calc :: setSqrtFunction(int num, float total){
	this -> num = num;
	this -> total = total;
}

double Calc :: getSqrtFunction (){
	total = sqrt(num);
	return total;
}

void Calc :: setLogFunction (float num, float total){
	this -> num = num;
	this -> total = total;
}
double Calc :: getLogFunction (){
	total = log10(num);
	return total;
}
