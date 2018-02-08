#include <iostream>
#include <string>
#include <vector>
using namespace std;

void bleepfunction(const string arreglo[], int tamano) // Muestra el arreglo
{

	// Imprime los valores del arreglo
	for (int i = 0; i < tamano; i++)
	{
		cout << "arreglo[" << i << "]= " << arreglo[i] << endl;
	}
}


int busquedaLinealObjeto(const string arreglo[], int tamano, string busqueda) // Se realiza la busqueda objeto por objeto
{
	for (int i = 0; i < tamano; i++)
		if (arreglo[i] == busqueda)
		{
			cout << "BLEEP!!! Ese valor ya esta en el arreglo" << endl;
			return i;
		}
	cout << "Esa palabra no existe en el arreglo" << endl;
	return -1; // Esta fuera del arreglo
}

int main()
{
	string busqueda = ""; // Es lo que se va a buscar dentro del arreglo
	const int tamano = 3; // Es el tamano del arreglo
	string arreglo[tamano] = { "fresas","anton","brocoli" }; // Los valores que tiene almacenado el arreglo
	int opciones = 0; // La opcion que tiene el usuario para poder realizar una funcion
	cout << "Ingresa el numero de la funcion: ";
	cin >> opciones;
	
	if (opciones == 1)
	{
		cout << "Elementos en el arreglo: " << endl;
		bleepfunction(arreglo, tamano); // Va a imprimir el arreglo: arreglo[0]= 1
		cout << "Indique un valor a buscar y se le devolvera el indice: " << endl;
		cin >> busqueda;
		cout << "Su valor se encuentra en: arreglo[" << busquedaLinealObjeto(arreglo, tamano, busqueda) << "]" << endl;
		cout << "A nu ma ci sierto" << endl;
	}
	cin.ignore();
	cin.get();
	return 0;
}