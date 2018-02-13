#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Ejercicio 2, 3, 4
double ctok(double c)
{
	double k = c + 273.15;  
	if (c < -273.15) // Ejercicio 3, 4
	{
		cout << "No puede ingresar esa temperatura." << endl;
	}
	return k;
}

// Ejercicio 7
int cuadratica()
{
	// ax^2 + bx+ c = 0
	int a = 0, b = 0, c = 0;

	cout << "Ingresa los valores de la ecuacion cuadratica: Ejemplo: (6 1 -15) " << endl;
	cout << "> ";
	while (cin >> a >> b >> c)
	{

		// Valor de la raiz cuadrada (Se compureba si es negativo, si es asi no hay solucion)
		double raiz = b * b - 4 * (a*c);
		// Soluciones de ecuacion
		double x1 = 0, x2 = 0, discriminante = 0;

		if (raiz < 0)
		{
			cout << "No hay solucion." << endl;
		}
		else
		{
			x1 = (-b + sqrt(raiz)) / (2 * a);
			x2 = (-b - sqrt(raiz)) / (2 * a);
			discriminante = (b*b - (4 * (a*c)));
			if (discriminante == 0)
			{
				cout << "How do you know that your results are plausible? Can you check that they are correct? " << endl;
				break;
			}

			if (x1 == x2)
			{
				cout << "Solo existe una solucion: " << x1 << endl;
			}
			else
			{
				cout << "x1: " << x1 << endl;
				cout << "x2: " << x2 << endl;
				cout << "Discriminante: " << discriminante << endl;
				/* se llama "discriminante", porque sirve para "discriminar" (decidir) entre los tipos posibles de respuesta.
				Si es positivo, hay DOS soluciones, si es cero sólo hay UNA solución, y si es negativo hay soluciones imaginarias. */
			}
		}
	}
	return 0;
}

// Ejercicio 12
int bullsAndcows() {
	
	int arreglo(4);
	int numeros[4] = {3,6,1,9};

	cout << "Ingresa cuatro digitos: " << endl;
	while (true)
	{

		for (int i = 0; i < 4; i++)
		{
			cout << i + 1 << ")";
			cin >> arreglo;
		}

		int toro = 0, vaca = 0; // Contador inicializado en 0

		for (int a = 0; a < 4; a++) // Toros
		{
		bool Sihay = true;
			if (arreglo != numeros[4])
			{
				toro++;
			}

			

			for (int j = 0; j < 4; j++) // Vacas
			{
				bool Sihay = false;
				// Valores
				
				if (arreglo != numeros[4])
				{
					
				}

			}
		}
		cout << "Actualmente tienes " << toro << " toros." << endl;
		cout << "Actualmente tienes " << vaca << " vacas." << endl;

		/*NOTA: Actuamente desconozco porque las variables se imprimen igual,
		Se que si se cumple la condicion de los valores de los toros, 
		la evaluacion de las vacas no se tiene que aplicar, aunque los booleanos no me funcionaron.*/

		// Parametros sin redundancia
		

		

		// if (toro == 4)
		// {
		// 	cout << "Has ganado, el numero era: " << num1 << num2 << num3 << num4 << endl;
		// }
		// if (toro >= 0) {
		// 	cout << "Actualmente tienes " << toro << " toros." << endl;
		// }
		// if (vaca >= 0)
		// {
		// 	cout << "Actualmente tienes " << vaca << " vacas." << endl;
		// }
	}

	return 0;
}


int main()
{
	int opcion;
	cout << "Ingresa el numero de la funcion: " << endl;
	cout << "1) Kelvin (Ejercicio 2,3,4)" << endl;
	cout << "2) Cuadratica (Ejercicio 7)" << endl;
	cout << "> ";
	cin >> opcion;
	if (opcion == 1) // 
	{
		double c = 0;
		cout << "Ingresa el valor: ";
		cin >> c;
		double k = ctok(c);
		cout << c << " En kelvin es: " << k << endl;
	}
	else if (opcion == 2)
	{
		cout << cuadratica();
	}
	else if (opcion == 3)
	{
		cout << bullsAndcows();
	}
	cin.ignore();
	cin.get();
	return 0;
}