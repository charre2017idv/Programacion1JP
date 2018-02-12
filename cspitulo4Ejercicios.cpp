#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "math.h"

using namespace std;

//Ejercicio 3
int distancias() 
{
	double num1, num2, result;
	vector<double>arreglo;
	cout << "Ingresa los valores de distancia: (Ejemplo: 5 20) " << endl;
	cout << "> ";
	while (cin >> num1 >> num2)
	{
		if (num1 < num2)
		{
			cout << "La distancia menor es: " << num1 << endl;
			cout << "La distancia mayor es: " << num2 << endl;

		}
		else if (num2 < num1)
		{
			cout << "La distancia menor es: " << num2 << endl;
			cout << "La distancia mayor es: " << num1 << endl;

		}
		
		arreglo.push_back(num1);
		arreglo.push_back(num2);
		result = num1 + num2;
		cout << "La distancia media entre los puntos es: " << result / 2 << endl;
		cout << "La suma de las dos distancias es: " << result << endl;
		cout << "El arreglo de todos distancias es: " << endl;

		sort(arreglo.begin(), arreglo.end());

			for (int i = 0; i < arreglo.size(); ++i)
			{
				cout << "[ " << arreglo[i] << " ]";
			}
			cout << "\0" << endl;
			cout << "Ingresa los valores de distancia: (Ejemplo: 5 20) " << endl;
			cout << "> ";
		}
	return 0;
}

// Ejercicio 5
int calculadoraSimple()
{
	string simbolos;
	double num1, num2, result;
	cout << "Ingresa valores a tu calculadora: ";
	while (cin >> num1 >> num2 >> simbolos)
	{
		if (simbolos == "+") // Suma
		{
			result = num1 + num2;
			cout << "La suma de los dos valores es: " << result << endl;
		}
		if (simbolos == "-") // Resta
		{
			result = num1 - num2;
			cout << "La resta de los dos valores es: " << result << endl;
		}
		if (simbolos == "*") // Multiplicacion
		{
			result = num1 * num2;
			cout << "La multiplicacion de los dos valores es: " << result << endl;
		}
		if (simbolos == "/") // Division
		{
			result = num1 / num2;
			cout << "La Division de los dos valores es: " << result << endl;
		}
		if (simbolos != "+" || simbolos != "-" || simbolos != "*" || simbolos != "/")
		{
			cout << "Ese operador no esta permitido" << endl;
		}
		//if (num1 <= string)
		//{
		//	cout << "Solo se aceptan numeros." << endl;
		//}
		cout << "Ingresa valores a tu calculadora: ";
	}
	
	return 0;
}

// Ejercicio 8
int Arroz()
{
	
	for (int granos = 1000; granos <= 1000000000; granos *= 1000) {
		int sum = 1, casillaActual = 1, casilla = 1;
		while (sum < granos) {
			casilla++;
			casillaActual *= 2;
			sum += casillaActual;
		}
		cout << casilla << " squares are needed for " << granos << " grains" << endl;
	}

	/* Yeipi, No tengo idea porque me lanza mas valore de los indicados,
	segun yo es porque se sale de rango pero desconosco como arreglarlo. */
	cin.ignore();
	cin.get();
	return 0;
}

// Ejercicio 9
int ArrozSumaInt()
{
	int casillaActual2 = 1, numeroGranosCasillaActual2 = 0; // Enteros
	for (int casilla = 1; casilla <= 64; ++casilla) 
	{
		numeroGranosCasillaActual2 += casillaActual2; // Suma de lo granos (int)
		cout << "-----------------------------------" << endl;
		cout << "Casilla actual: " << casilla << endl;

		// Con enteros
		cout << "Granos en la casilla actual (int): " << casillaActual2 << endl;
		cout << "Mas la suma de granos de la casilla anterior (int): " << numeroGranosCasillaActual2 << endl;
		if (casillaActual2 == 0 || numeroGranosCasillaActual2 == 0) 
		{
			cout << "** Este es el maximo de numeros con enteros **" << endl;
			break;
		}
		
		casillaActual2 *= 2; // entero
	}
	
	cin.ignore();
	cin.get();
	return 0;
}
int ArrozSumaDouble()
{
	double casillaActual = 1, numeroGranosCasillaActual = 0; // Double
	for (int casilla = 1; casilla <= 64; ++casilla)
	{
		numeroGranosCasillaActual += casillaActual; // Suma de lo granos (double)
		cout << "-----------------------------------" << endl;
		cout << "Casilla actual: " << casilla << endl;
		// Con double
		cout << "Granos en la casilla actual (double): " << casillaActual << endl;
		cout << "Mas la suma de granos de la casilla anterior (double): " << numeroGranosCasillaActual << endl;
		casillaActual *= 2; // Double
	}
	cin.ignore();
	cin.get();
	return 0;
}

// Ejercicio 18
int EcuacionesCuadraticas()
{
	// ax^2 + bx+ c = 0
	int a = 0, b = 0, c = 0;
	
	cout << "Ingresa los valores de la ecuacion cuadratica: Ejemplo: (6 1 -15) " << endl;
	cout << "> ";
	cin >> a;
	cout << "> ";
	cin >> b;
	cout << "> ";
	cin >> c;

	// Valor de la raiz cuadrada (Se compureba si es negativo, si es asi no hay solucion)
	double raiz = b*b - 4 * (a*c);
	// Soluciones de ecuacion
	double x1 = 0, x2 = 0;

	if (raiz < 0)
	{
		cout << "No hay solucion." << endl;
	}
	else
	{
		x1 = (-b + sqrt(raiz)) / (2 * a);
		x2 = (-b - sqrt(raiz)) / (2 * a);
		if (x1 == x2)
		{
			cout << "Solo existe una solucion: " << x1 << endl;
		}
		else
		{
			cout << "x1: " << x1 << endl;
			cout << "x2: " << x2 << endl;
			cout << "Discriminante: " <<(b*b- (4*(a*c))) << endl;
			/* se llama "discriminante", porque sirve para "discriminar" (decidir) entre los tipos posibles de respuesta.
			Si es positivo, hay DOS soluciones, si es cero sólo hay UNA solución, y si es negativo hay soluciones imaginarias. */
		}
	}

	return 0;
}

// Ejercicio 19, 20, 21
int valoresypares()
{
	cout << "En mantenimiento..." << endl;
	cin.ignore();
	cin.get();
	return 0;
}

int main()
{
	int opcion;
	cout << "Ingrese el numero de la funcion: " << endl;
	cout << "1) Distancias (Ejercicio 3)" << endl;
	cout << "2) Calculadora Simple (Ejercicio 5)" << endl;
	cout << "3) Arroz (Ejercicio 8)" << endl;
	cout << "4) Arroz Suma Int (Ejercicio 9)" << endl;
	cout << "5) Arroz Suma Double (Ejercicio 9)" << endl;
	cout << "6) Ecuaciones Cuadraticas (Ejercicio 18)" << endl;
	cout << "7) Nombres y Enteros (19,20,21)" << endl;
	cout << "> ";
	cin >> opcion;
	while (true)
	{
		if (opcion == 1)
		{
			cout << distancias();
		}
		else if (opcion == 2)
		{
			cout << calculadoraSimple();
		}
		else if (opcion == 3)
		{
			cout << Arroz();
		}
		else if (opcion == 4)
		{
			cout << ArrozSumaInt();
		}
		else if (opcion == 5)
		{
			cout << ArrozSumaDouble();
		}
		else if (opcion == 6)
		{
			cout << EcuacionesCuadraticas();
		}
		else if (opcion == 7)
		{
			cout << valoresypares();
		}
	}
	return 0;
}