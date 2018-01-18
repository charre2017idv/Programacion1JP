#include <iostream>
using namespace std;

/* Esta funcion realiza la operacion de suma
con la declaracion  de dos valores a y b */
int suma(int a, int b)
{
	int result;
	result = a + b;
	return result;
}

/* Esta funcion realiza la operacion de multiplicacion
con la declaracion  de dos valores c y d */
int multiplicacion(int c, int  d)
{
	int result;
	result = c * d;
	return result;
}

/* Esta funcion realiza la operacion de la division
con la declaracion  de dos valores e y f */
int division(int e, int f)
{
	int result;
	result = e / f;
	return result;
}

/* Esta funcion realiza la operacion de modulo
con la declaracion  de dos valores g y h */
int modulo(int g, int h)
{
	int result;
	result = g % h;
	return result;
}

/* Esta funcion realiza la operacion de resta
con la declaracion  de dos valores i y j */
int resta(int i, int j)
{
	int result;
	result = i - j;
	return result;
}

/* Esta funcion realiza la operacion de suma
con la declaracion  de dos valores numero y potencia */
int potencia(int numero, int potencia)
{
	int result;
	result = pow(numero, potencia);
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

	cout << "- Suma" << endl;
	cout << "- Multiplicacion" << endl;
	cout << "- Division" << endl;
	cout << "- Modulo" << endl;
	cout << "- Resta" << endl;
	cout << "- Potencia" << endl;

	cout << "\0" << endl;
	// Variables
	int valorA = 0;
	int valorB = 0;
	int valorC = 0;
	int valorD = 0;
	int valorE = 0;
	int valorF = 0;
	int valorG = 0;
	int valorH = 0;
	int valorI = 0;
	int valorJ = 0;
	int valorNum = 0;
	int valorPot = 0;

	// Operacion de suma
	cout << "== SUMA ==" << endl;

	cout << "Ingresa el primer valor de la suma: " << endl;
	cin >> valorA;
	cout << "Ingresa el segundo valor de la suma: " << endl;
	cin >> valorB;
	cout << "Su resultado es: " << suma(valorA, valorB) << endl;

	cout << "\0" << endl;
	// Operacion de multiplicacion
	cout << "== MULTIPLICACION ==" << endl;

	cout << "Ingrese el primer valor de la multiplicacion: " << endl;
	cin >> valorC;
	cout << "Ingrese el segundo valor de la multiplicacion: " << endl;
	cin >> valorD;
	cout << "El resultado de la multiplicacion es: " << multiplicacion(valorC, valorD) << endl;

	cout << "\0" << endl;
	// Operacion de division
	cout << "== DIVISION ==" << endl;

	cout << "Ingrese el divisor de la division: " << endl;
	cin >> valorE;
	cout << "Ingrese el dividendo de la division: " << endl;
	cin >> valorF;
	cout << "El resultado de la division es: " << division(valorE, valorF) << endl;

	cout << "\0" << endl;
	// Operacion de modulo
	cout << "== MODULO ==" << endl;

	cout << "Ingrese el divisor de la division: " << endl;
	cin >> valorG;
	cout << "Ingrese el valor del dividendo: " << endl;
	cin >> valorH;
	cout << "El modulo de la divison es: " << modulo(valorG, valorH) << endl;

	cout << "\0" << endl;
	// Operacion de resta
	cout << "== RESTA ==" << endl;

	cout << "Ingrese el primer valor de la resta: " << endl;
	cin >> valorI;
	cout << "Ingrese el segundo valor de la resta: " << endl;
	cin >> valorJ;
	cout << "El resultado de la resta es: " << resta(valorI, valorJ) << endl;

	cout << "\0" << endl;
	// Operacion de potencia 
	cout << "== POTENCIA ==" << endl;

	cout << "Ingrese el numero: " << endl;
	cin >> valorNum;
	cout << "Ingrese la potencia: " << endl;
	cin >> valorPot;
	cout << valorNum << " elevado a la " << valorPot << " es igual a: " << potencia(valorNum, valorPot);

	cout << "\0" << endl;

	cin.ignore();
	cin.get();
	return 0;
}