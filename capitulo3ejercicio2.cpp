//Capitulo 3 - Ejercicio 2
#include<iostream>
#include<math.h>
/* Write a program in C++ that converts from miles to kilometers. Your
program should have a reasonable prompt for the user to enter a number
of miles. Hint: There are 1.609 kilometers to the mile */

using namespace std;

int convertidor(int a, int b)
{
	int result;
	int Valor1 = 0;
	
	cout << "==================================================" << endl;
	cout << "===     Convertidor de millas a kilometros     ===" << endl;
	cout << "==================================================" << endl;
	cout << "Ingrese las millas: " << endl;
	cin >> Valor1;

	result = Valor1 / 0.62137;

	return result;
}

int main()
{
	cout << "La convercion de las millas a kilometros es: " << convertidor(0, 0) << endl;

	cin.ignore();
	cin.get();
	return 0;
}