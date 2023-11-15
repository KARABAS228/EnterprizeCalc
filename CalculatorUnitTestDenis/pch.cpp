// pch.cpp: файл исходного кода, соответствующий предварительно скомпилированному заголовочному файлу

#include "pch.h"

// При использовании предварительно скомпилированных заголовочных файлов необходим следующий файл исходного кода для выполнения сборки.

int Exponentiation(int num, int exponent)
{
	return (num*exponent);
}
int Exponentiation(int num, double exponent)
{
	return num*exponent;
}
double Exponentiation(double num, int exponent)
{
	return num*exponent;
}
double Exponentiation(double num, double exponent)
{
	return num*exponent;
}

int RemainderOfTheDivision(int num1, int num2)
{
	int a = num1 / num2;
	double b = num1 / num2;
	return b-a;
}
int RemainderOfTheDivision(int num1, double num2)
{
	int a = num1 / num2;
	double b = num1 / num2;
	return b - a;
}
int RemainderOfTheDivision(double num1, double num2)
{
	int a = num1 / num2;
	double b = num1 / num2;
	return b - a;
}

double Sqrt(int num)
{
	
	return pow(num,0.5);
}

double Sqrt(double num)
{
	return pow(num, 0.5);;
}

