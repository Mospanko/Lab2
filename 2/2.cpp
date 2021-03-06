#include <iostream>
#include <string>
#include "Fraction.h"

/*2. Написать класс Fraction для представления обыкновенных дробей(как отношения
	двух целых чисел x / y).Перегрузить операторы + , -, *, / для дробей.Реализовать метод
	void reduce() для сокращения дроби, а также статические методы :
	int gcd(int n, int m) - функция для нахождения наибольшего общего делителя чисел n и m;

	void printAsFraction(double decimal_fraction)
	void printAsFraction(char* decimal_fraction)
	перегруженные методы вывода десятичной дроби в виде обыкновенной
	(например, при значении decimal_fraction = 0.43 на экране должно
	вывестись 43 / 100, при 0.25 – 1 / 4 и т.д.).

	Также реализовать в виде статического члена класса счетчик всех созданных на
	данный момент в программе экземпляров дробей.

	Продемонстрировать работу созданного класса.Создать несколько объектов дробей.
	Произвести операции сложения, вычитания, умножения и деления дробей.Вывести
	на экран результаты.Показать также результаты работы статических методов класса.*/

int main()
{
	Fraction a(1, 2);
	Fraction b(2, 3);
	Fraction c = a + b;
	Fraction d = a - b;
	Fraction e = a * b;
	Fraction f = a / b;
	a.printFraction();
	b.printFraction();
	c.printFraction();
	d.printFraction();
	e.printFraction();
	f.printFraction();
	std::cout << "\n";
	char test1[] = "0.25";
	double test2 = 0.25;
	Fraction::printAsFraction(test1);
	Fraction::printAsFraction(test2);
	std::cout << "Total fractions: " << a.getTotalFractions() << "\n";
}