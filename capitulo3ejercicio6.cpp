/* Write a program that prompts the user to enter three integer values, and
then outputs the values in numerical sequence separated by commas. So,
if the user enters the values 10 4 6, the output should be 4, 6, 10. If two
values are the same, they should just be ordered together. So, the input
4 5 4 should give 4, 4, 5. */
#include <iostream>
using namespace std;

int main()
{
	int mayor, menor, medio;
	int valor1, valor2, valor3;

	cout << "Ingresa tres valores: (5 4 3)" << endl;
	cin >> valor1 >> valor2 >> valor3;
	
	if (valor1 > valor2 && valor1 > valor3)
	{
		mayor = valor1;
	}
	else
	{
		mayor = valor3;
	}
	if (valor1 < valor2 && valor1 < valor3)
	{
		menor = valor1;
	}
	else
	{
		menor = valor3;
	}
	if (valor1 != mayor && valor1 != menor)
	{
		medio = valor1;
	}
		
    if (valor2 != valor3)
	{
		medio = valor2;
	}	
	else
	{
		medio = valor3;
	}
		


	cout << "=====        Resultados         =====" << endl;
	cout << "El resultado es: " << menor << ", " << medio << ", " << mayor << endl;
	
	cin.ignore();
	cin.get();
	return 0;
}






/* 

int main()
{
	int mayor, menor, medio;
	int valor1, valor2, valor3;

	cout << "Ingresa tres valores: (5 4 3)" << endl;
	cin >> valor1 >> valor2 >> valor3;

	if (valor1 > valor2 && valor1 > valor3)
	{
		mayor = valor1;
	}
	else
	{

		if (valor2 > valor3)
		{
			mayor = valor2;
			medio = valor3;
		}
		else
		{
			mayor = valor3;
			medio = valor3;
		}
		menor = valor1;
	}
	/*
	if (valor1 < valor2 && valor1 < valor3)
	{
	menor = valor1;
	}
	else
	{
	menor = valor3;
	}
	if (valor1 != mayor && valor1 != menor)
	{
		medio = valor1;
	}

	if (valor2 != valor3)
	{
		medio = valor2;
	}
	else
	{
		medio = valor3;
	}



	cout << "=====        Resultados         =====" << endl;
	cout << "El resultado es: " << menor << ", " << medio << ", " << mayor << endl;

	cin.ignore();
	cin.get();
	return 0;
}
*/