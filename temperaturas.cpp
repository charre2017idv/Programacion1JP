// TEMA: Capitulo 10 - Ejercico 2
// Problemas de impresion en consola
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
struct Reading { // a temperature reading
	int hour; // hour after midnight [0:23]
	double temperature; // in Fahrenheit
};

void Crear()
{
	// Crear el archivo
	ofstream archivo;
	string nombreArchivo, datos;
	int opcion;
	cout << "Escribe el nombre del archivo: ";
	getline(cin, nombreArchivo);

	// nombreArchivo.c_str() Guarda el nombre del archivo


	archivo.open(nombreArchivo.c_str(), ios::out);/* Abrir el archivo, el primer valor da la ubicacion del archivo,
												  y el segundo da el modo de uso. 'ios::out' esto crea el archivo o lo reemplaza.*/
	if (archivo.fail()) // Envia true o false 
	{ // Si se cumple
		cout << "No se pudo abrir el archivo.";
		exit(1); // Sirve Para salir del archivo
	}




	cout << "\nEscriba el contenido del documento: " << endl;
	cout << "> ";
	//cin >> opcion;
	getline(cin, datos);
	archivo << datos;
	// Si se quiere poner algo en el documento
	//cout << "Quieres leer en el documento: (1 = Si / 0 = No) > ";
	//cin >> opcion;
	//{
	//if (opcion == 1)
	archivo.close();

}

void leer()
{
	// Abrir un archivo, lectura
	ifstream archivoLectura;
	string texto;
	int opcion2 = 0;

	//cout << "Quieres leer el archivo: (1 = Si / 0 = No) > ";
	//cin >> opcion2;
	archivoLectura.open("programacion.txt", ios::in); // Se abre el archivo en modo lectura

	if (archivoLectura.fail())
	{
		cout << "No se pudo abrir el archivo.";
		exit(0);
	}

	while (!archivoLectura.eof()) // Mientras no sea el final del archivo, 'eof' recorre todo el programa
	{
		getline(archivoLectura, texto);
		cout << texto << endl;
	}
}
int main()
{
	int opcion;
	cout << "Ingresa el numero de la funcion:" << endl;
	cout << "> ";
	cin >> opcion;
	
	switch (opcion)
	{
	case 1:
		Crear();
		break;
	case 2:
		leer();
		break;
	case 3:
		break;
	}
	//}



	// Parametros de Temperatura
	//vector<Reading> temps; // store the readings here
	//int hour;
	//double temperature;
	//while (cin >> hour >> temperature) {
	//	if (hour < 0 || 23 < hour)
	//	{
	//		cout << "hour out of range" << endl;
	//	}
	//	temps.push_back(Reading{ hour,temperature });
	//}
	//
	//for (int i = 0; i < temps.size(); ++i)
	//{
	//	archivo << '(' << temps[i].hour << ',' << temps[i].temperature << ")\n";
	//}

	
	cin.ignore();
	cin.get();
	return 0;
}