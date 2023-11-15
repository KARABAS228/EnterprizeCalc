// pch.h: это предварительно скомпилированный заголовочный файл.
// Перечисленные ниже файлы компилируются только один раз, что ускоряет последующие сборки.
// Это также влияет на работу IntelliSense, включая многие функции просмотра и завершения кода.
// Однако изменение любого из приведенных здесь файлов между операциями сборки приведет к повторной компиляции всех(!) этих файлов.
// Не добавляйте сюда файлы, которые планируете часто изменять, так как в этом случае выигрыша в производительности не будет.

#include<cmath>

#ifndef PCH_H
#define PCH_H

// Добавьте сюда заголовочные файлы для предварительной компиляции
int Exponentiation(int num, int exponent);
int Exponentiation(int num, double exponent);
double Exponentiation(double num, int exponent);
double Exponentiation(double num, double exponent);

int RemainderOfTheDivision(int num, int num2);
int RemainderOfTheDivision(int num1, double num2);
int RemainderOfTheDivision(double num1, double num2);

double Sqrt(int num);
double Sqrt(double num);

#endif //PCH_H
