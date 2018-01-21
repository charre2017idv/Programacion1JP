#include <iostream>
using namespace std;

/* Esta funcion realiza la operacion de suma
con la declaracion  de dos valores a y b */


int suma(int a, int b)
{
	int result;
	int valorA = 0;
	int valorB = 0;
	// Operacion de suma
	cout << "== SUMA ==" << endl;
	cout << "Ingresa el primer valor de la suma: " << endl;
	cin >> valorA;
	cout << "Ingresa el segundo valor de la suma: " << endl;
	cin >> valorB;

	result = valorA + valorB;
	cout << "\0" << endl;
	if (!cin)
	{
		cout << "Es necesario escribir un numero" << endl;
		cin.clear();
		cin.ignore();
		cin.get();
	}
	return result;
}

/* Esta funcion realiza la operacion de multiplicacion
con la declaracion  de dos valores c y d */
int multiplicacion(int a, int  b)
{
	int result;
	int valorA = 0;
	int valorB = 0;
	// Operacion de multiplicacion
	cout << "== MULTIPLICACION ==" << endl;

	cout << "Ingrese el primer valor de la multiplicacion: " << endl;
	cin >> valorA;
	cout << "Ingrese el segundo valor de la multiplicacion: " << endl;
	cin >> valorB;


	cout << "\0" << endl;
	result = valorA * valorB;
	if (!cin)
	{
		cout << "Es necesario escribir un numero" << endl;
		cin.clear();
		cin.ignore();
		cin.get();
	}
	return result;
}

/* Esta funcion realiza la operacion de la division
con la declaracion  de dos valores e y f */
int division(int a, int b)
{
	int result;
	int valorA = 0;
	int valorB = 0;

	// Operacion de division
	cout << "== DIVISION ==" << endl;

	cout << "Ingrese el divisor de la division: " << endl;
	cin >> valorA;
	cout << "Ingrese el dividendo de la division: " << endl;
	cin >> valorB;

	cout << "\0" << endl;
	result = valorA / valorB;
	if (!cin)
	{
		cout << "Es necesario escribir un numero" << endl;
		cin.clear();
		cin.ignore();
		cin.get();
	}
	return result;
}

/* Esta funcion realiza la operacion de modulo
con la declaracion  de dos valores g y h */
int modulo(int a, int b)
{
	int result;
	int valorA = 0;
	int valorB = 0;
	// Operacion de modulo
	cout << "== MODULO ==" << endl;

	cout << "Ingrese el divisor de la division: " << endl;
	cin >> valorA;
	cout << "Ingrese el valor del dividendo: " << endl;
	cin >> valorB;


	cout << "\0" << endl;

	result = valorA % valorB;
	if (!cin)
	{
		cout << "Es necesario escribir un numero" << endl;
		cin.clear();
		cin.ignore();
		cin.get();
	}
	return result;
}

/* Esta funcion realiza la operacion de resta
con la declaracion  de dos valores i y j */
int resta(int a, int b)
{
	int result;
	int valorA = 0;
	int valorB = 0;
	// Operacion de resta
	cout << "== RESTA ==" << endl;

	cout << "Ingrese el primer valor de la resta: " << endl;
	cin >> valorA;
	cout << "Ingrese el segundo valor de la resta: " << endl;
	cin >> valorB;
	cout << "\0" << endl;
	result = valorA - valorB;
	if (!cin)
	{
		cout << "Es necesario escribir un numero" << endl;
		cin.clear();
		cin.ignore();
		cin.get();
	}
	return result;
}

/* Esta funcion realiza la operacion de suma
con la declaracion  de dos valores numero y potencia */
int potencia(int numero, int potencia)
{
	int result;
	int valorNum = 0;
	int valorPot = 0;
	// Operacion de potencia 
	cout << "== POTENCIA ==" << endl;

	cout << "Ingrese el numero: " << endl;
	cin >> numero;
	cout << "Ingrese la potencia: " << endl;
	cin >> potencia;

	cout << "\0" << endl;
	result = pow(numero, potencia);
	if (!cin)
	{
		cout << "Es necesario escribir un numero" << endl;
		cin.clear();
		cin.ignore();
		cin.get();
	}
	return result;
}


/* Aqui se inicializaran las funciones */
int main()
{


	// Titulo 
	cout << "=====================================" << endl;
	cout << "==== Bienvenido a la calculadora ====" << endl;
	cout << "=====================================" << endl;

	// Opciones que puede hacer 
	cout << "Estas son las funciones que se pueden realizar:" << endl;
	cout << "\0" << endl;

	cout << "- Suma (1)" << endl;
	cout << "- Multiplicacion (2)" << endl;
	cout << "- Division (3)" << endl;
	cout << "- Modulo (4)" << endl;
	cout << "- Resta (5)" << endl;
	cout << "- Potencia (6)" << endl;

	cout << "\0" << endl;
	// Aqui inicia la magia del programa
	// Se pregunta que funcion se quiere realizar

	int opcion = 0;
	cout << "Escriba el numero de la funcion: " << endl;
	cin >> opcion;
	if (opcion == 1) // Resultado de la suma
	{
		cout << "Su resultado es: " << suma(0, 0) << endl;
	}
	if (opcion == 2) // Resultado de la multiplicacion
	{
		cout << "El resultado de la multiplicacion es: " << multiplicacion(0, 0) << endl;
	}
	if (opcion == 3) // Resultado de la division
	{
		cout << "El resultado de la division es: " << division(0, 0) << endl;
	}
	if (opcion == 4) // Resultado Modulo
	{
		cout << "El modulo de la divison es: " << modulo(0, 0) << endl;
	}
	if (opcion == 5) // Resultado Resta
	{
		cout << "El resultado de la resta es: " << resta(0, 0) << endl;
	}
	if (opcion == 6) // Resultado Potencia
	{
		cout << "El resultado de la potencia es: " << potencia(0, 0) << endl;
	}


	if (!opcion)
	{
		cout << "Es necesario escribir un numero" << endl;
		cin.clear();
		cin.ignore();
		cin.get();
	}

	cin.ignore();
	cin.get();
	return 0;
}