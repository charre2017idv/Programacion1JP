// Capitulo 3 - Ejercico 5
/* Modify the program above to ask the user to enter floating-point values
and store them in double variables. Compare the outputs of the two programs
for some inputs of your choice. Are the results the same? Should
they be? What’s the difference? */
#include<iostream>

using namespace std;

int calculatodo(int Valor1, int Valor2)
{


	float mayor;
	float menor;
	float suma;
	float resta;
	float multiplicacion;
	float division;

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
	cout << "El resultado de la division es: " << division << endl;
	return suma, resta, multiplicacion;
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