// TEMA: Capitulo 11 -Ejercicio 1
#include<iostream>
#include <fstream>
#include <string>
using namespace std;
void minuscula(string &s)
{
	for (int i = 0; i < s.length(); i++)
	{
		s[i] = tolower(s[i]);
	}
}
void lectura()
{
	// Mandamos a llamar a la funcion
	ifstream Leerarchivo; // Input de lectura
	string opcionTexto;
	Leerarchivo.open("programacion.txt", ios::in); // Se abre el archivo en modo lectura

	if (Leerarchivo.fail())
	{
		cout << "No se pudo abrir el archivo." << endl;
		exit(1);
	}

	while (!Leerarchivo.eof()) // Se recorre el archivo
	{
		cout << "EL texto del archivo programacion.txt: " << endl;
		getline(Leerarchivo, opcionTexto);

		minuscula(opcionTexto);
		cout << opcionTexto << endl;
		cout << endl;


		//Agregar informacion al nuevo documento
		ofstream archivo;
		string nombreArchivo, datos;

		cout << "Escribe el nombre del archivo: ";
		getline(cin, nombreArchivo);

		// nombreArchivo.c_str() Guarda el nombre del archivo

		archivo.open(nombreArchivo.c_str(), ios::out);// Abrir el archivo, el primervalor da la ubicacion del archivo, y el segundo da el modo de uso. 'ios::out' esto crea el archivo o lo reemplaza.
													  
		if (archivo.fail()) // Envia true o false 
		{ // Si se cumple
			cout << "No se pudo abrir el archivo.";
			exit(1); // Sirve Para salir del archivo
		}

		// Se agrega la informacion en minusculas al documento
		archivo << opcionTexto;
	}


	// Cerrar el archivo
	Leerarchivo.close();

}

int main()
{
	lectura();

	

	cin.ignore();
	cin.get();
	return 0;
}

