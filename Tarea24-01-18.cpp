// Tarea punto 2 - Ordenar un arreglo de valores asignados por usuario
#include <iostream>
using namespace std;

int Arreglo()
{
	// Se definen las variables del arreglo
	int arreglo[5], index, var1, result;

	// Se inicializa el programa
	cout << "Ingrese el numero de datos: (Se pueden ingresar 5)" << endl;
	for (index = 0; index < 5; index++)
	{
		cout << index + 1 << " ) Valor: ";
		cin >> arreglo[index];
	}
	cout << "\0" << endl;
	for (index = 0; index < 5; index++)
	{
		for (var1 = index + 1; var1 < 5; var1++)
		{
			if (arreglo[var1] < arreglo[index])
			{
				result = arreglo[var1];
				arreglo[var1] = arreglo[index];
				arreglo[index] = arreglo[var1];
				arreglo[index] = result;

			}
		}
	}
	cout << "El acomodo del arreglo es el siguiente: " << endl;
	for (index = 0; index < 5; index++)
	{
		cout << " [ " << arreglo[index] << " ] ";
	}
	return 0;
}

int perimetroyarea(int &altura, int &base)
{
	int area, perimetro;
	perimetro = base * 2 + altura * 2;
	area = base * altura;

	cout << "El perimetro del rectangulo es: " << perimetro << endl;
	cout << "El Area del Rectangulo: " << area << endl;
	return 0;
}

int main()
{
	int base = 0, altura = 0;
	int opcion = 0;
	cout << "Escriba el numero de  la funcion que quiere realizar: " << endl;
	cout << "- Ordenar un arreglo es (1)" << endl;
	cout << "- Area y Perimetro es (2)" << endl;
	cin >> opcion;
	if (opcion == 1)
	{
		cout << Arreglo();
	}
	else if (opcion == 2)
	{
		cout << "Inserte la base del rectangulo: " << endl;
		cin >> base;
		cout << "Inserte la Altura del rectangulo: " << endl;
		cin >> altura;
		cout << perimetroyarea(base, altura);

	}
	else
	{
		cout << "Esa opcion no es valida" << endl;
	}



	cin.ignore();
	cin.get();
	return 0;
}