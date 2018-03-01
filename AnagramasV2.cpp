// TEMA: Anagramas V2
#include<iostream>
#include <fstream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

string ordenacion(string a)
{
	sort(a.begin(), a.end());
	return a;
}

void Vector(const vector<string>& Anagrama)
{
	for (int i = 0; i < Anagrama.size(); i++)
	{
		cout << Anagrama[i] << ' ' << endl;
	}
}

int main()
{
	ifstream leerArchivo;
	leerArchivo.open("anagramas.txt", ios::in);
	list<string> Milista;
	string p, texto;
	while (!leerArchivo.eof())
	{

		cout << "Palabras en el documento:" << endl;
		while (leerArchivo >> p)
		{
			Milista.push_back(p); // Se leeran todas las palabras 
			cout << "[" << p << "]";
		}
		cout << endl;
		cout << "Numero de palabras: #" << Milista.size() << endl; // Actualmente existen 10 palabras en el documento
		
		list<string>::iterator iterador, jt;
		for (iterador = Milista.begin(); iterador != Milista.end(); iterador++)
		{ // Para cada palabra se comparara la palabra con las demas que existen
			string orden = ordenacion(*iterador); // Muestra las letras ordenadas en la posicion donde esta
			jt = iterador;
			jt++; // Esto es para ir pasando de una palabra a la siguiente

			vector<string> Anagrama(1, *iterador); // Si existe un anagrama se agrega al vector
			while (jt != Milista.end())
			{

				if (ordenacion(*jt) == orden)
				{
					Anagrama.push_back(*jt);
					jt = Milista.erase(jt);
				}
				else
				{
					jt++;
				}
			}

			if (Anagrama.size() > 1)
			{
				
				cout << endl;
				cout << "Nuevo Anagrama:" << endl;
				Vector(Anagrama);
				//cout << "Actualmente hay " << Milista.size() << " anagramas." << endl; // Cantidad de anagramas existentes

				
			}			

		}
		// Agregar la informacion a un nuevo documento
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
		//datVector(Anagrama);
		// Se agrega la informacion en minusculas al documento
		archivo << datos;

	}
	cin.ignore();
	cin.get();
	return 0;
}

