// TEMA: Capitulo 10 - Ejercicio 2
#include<iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ofstream archivo;
	string nombreArchivo, datos, datos2;
	int opcion, num1, num2, result = 0;
	cout << "Escribe el nombre del archivo: ";
	getline(cin, nombreArchivo);

	// nombreArchivo.c_str() Guarda el nombre del archivo

	
	archivo.open(nombreArchivo.c_str(), ios::out);/* Abrir el archivo, el primer valor da la ubicacion del archivo, 
												  y el segundo da el modo de uso. 'ios::out' esto crea el archivo o lo reemplaza.*/
												  // Si se quiere guardar en una ruta especifica: d://prueba//prueba.txt
	if (archivo.fail()) // Envia true o false 
	{ // Si se cumple
		cout << "No se pudo abrir el archivo.";
		exit(1); // Sirve Para salir del archivo
	}
	cout << "Quieres hacer la suma: (1 = Si / 0 = No(Salir)) " << endl;
	cout << "> ";
	cin >> opcion;

	while (opcion == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			cout << i + 1 << ") valor: ";
			cin >> num1;
			result = result + num1;
			
			
		}
		// Esto se imprime en consola
		cout << "La suma es:" << result << endl;

		// Esto se imprime en el archivo .txt
		archivo << "El resultado de las sumas es: ";
		archivo << result << endl; // Se guarda el valor de las sumas.

		// Se repite la secuencia
		cout << "Quieres agregar otro valor: (1 / 0)" << endl;
		cout << "> ";
		cin >> opcion;

		// Si 
		if (opcion == 0)
		{
			break;
		}
	}

	
	// Cerrar el archivo
	archivo.close();
	cin.ignore();
	cin.get();
	return 0;
}

