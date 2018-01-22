// Capitulo 3 - Ejercico 4
/* Write a program that prompts the user to enter two integer values. Store
these values in int variables named val1 and val2. Write your program to
determine the smaller, larger, sum, difference, product, and ratio of these
values and report them to the user */
#include<iostream>

using namespace std;

int calculatodo(int Valor1, int Valor2)
{


	int mayor;
	int menor;
	int suma;
	int resta;
	int multiplicacion;
	int division;
	cout << "=====================================" << endl;
	cout << "Ingresa el primer valor: " << endl;
	cin >> Valor1;
	cout << "Ingresa el segundo valor: " << endl;
	cin >> Valor2;

	if (Valor1 > Valor2)
	{
		mayor = Valor1;
		menor = Valor2;
	}
	else
	{
		menor = Valor1;
		mayor = Valor2;
	}

	suma = Valor1 + Valor2;
	resta = Valor1 - Valor2;
	multiplicacion = Valor1 * Valor2;
	division = Valor1 / Valor2;
	cout << "=====        Resultados         =====" << endl;
	cout << "El mayor es: " << mayor << endl;
	cout << "El menor es: " << menor << endl;
	cout << "El resultado de la suma es: " << suma << endl;
	cout << "El resultado de la resta es: " << resta << endl;
	cout << "El resulado de la multiplicacion es: " << multiplicacion << endl;
	cout << "EL resultado de la division es: " << division << endl;
	return suma, resta, multiplicacion, division;
}



int main()
{
	cout << "=====================================" << endl;
	cout << "==== Bienvenido a la calculadora ====" << endl;
	cout << "=====================================" << endl;
	cout << "- Calcula todo (1)" << endl;

	int opcion = 0;
	cout << "Escriba el numero de la funcion: " << endl;
	cin >> opcion;
	if (opcion == 1)
		cout << calculatodo(0, 0) << endl;

	cin.ignore();
	cin.get();
	return 0;
}