#pragma once
#include <iostream>
#include <string>
class Fraction
{
private:
	int n_;
	int m_;
	static int fractionCounter;
public:
	Fraction();
	Fraction(int n, int m); // x = n/m
	void setM(int m);
	void setN(int n);
	int getM();
	int getN();
	int getTotalFractions();

	Fraction operator +(const Fraction& term);
	Fraction operator -(const Fraction& subtrahend);
	Fraction operator *(const Fraction& factor);
	Fraction operator /(const Fraction& divisor);

	void reduce(); 
	static int gcd(int n, int m); 
	static void printAsFraction(double decimal_fraction); 
	static void printAsFraction(char* decimal_fraction); 
	void printFraction();
};