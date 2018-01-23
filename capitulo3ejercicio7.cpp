/* Do exercise 6, but with three string values. So, if the user enters the values
Steinbeck, Hemingway, Fitzgerald, the output should be Fitzgerald,
Hemingway, Steinbeck. */
#include<iostream>
#include<string>

using namespace std;

int main()
{
	string mayor, menor, medio;
	string valor1, valor2, valor3;

	cout << "Ingresa tres valores: (persona1 persona2 persona 3)" << endl;
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