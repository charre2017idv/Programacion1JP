/* Hacer un programa que lea el archivo y en base a lo que tiene en el 
y construir una serie de oraciones con las palabras. imprimir en otro 
archivo las oraciones. 

- 8 oraciones, una por renglon.
A considerar:*/
#include<iostream>
#include <fstream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <cstdlib>
#include <time.h>
using namespace std;

vector <string> MilistaPalabras;
vector <string> SUJETO;
vector <string> ADJETIVO;
vector <string> VERBO;
vector <string> ADVERVIO;
vector <string> PREPOSICION;
vector <string> SUSTANTIVO;

int main()
{
	srand(time(NULL));
	ifstream leerArchivo;
	leerArchivo.open("palabrasExamen.txt", ios::in);
	string p;
	// Palabras en el documento
	while (leerArchivo >> p)
	{
		//cout << "Se almacenaron todas las palabras." << endl;
		MilistaPalabras.push_back(p);
	}
	//cout << "Lista de SUJETOS: " << endl; // SUJETO
	for (int i = 1; i < 5; i++)
	{
		SUJETO.push_back(MilistaPalabras[i]);
		
	}
	//cout << "Lista de ADJETIVOS: " << endl; // ADJETIVOS
	for (int i = 8; i < 12; i++)
	{
		ADJETIVO.push_back(MilistaPalabras[i]);
		
	}
	//cout << "Lista de VERBOS: " << endl; // VERBOS
	for (int i = 12; i < 17; i++)
	{
		VERBO.push_back(MilistaPalabras[i]);
		
	}
	//cout << "Lista de ADVERVIO: " << endl; // ADVERVIO
	for (int i = 18; i < 22; i++)
	{
		ADVERVIO.push_back(MilistaPalabras[i]);
		
	}
	//cout << "Lista de PREPOSICION: " << endl; // PREPOSICION
	for (int i = 23; i < 27; i++)
	{
		PREPOSICION.push_back(MilistaPalabras[i]);
		
	}
	//cout << "Lista de SUSTANTIVO: " << endl; // SUSTANTIVO
	for (int i = 29; i < 36; i++)
	{
		SUSTANTIVO.push_back(MilistaPalabras[i]);
		
	}
	
	// Valores Aleatorios
	int Y = rand() % (11 - 8);
	int E = rand() % (11 - 8);
	int I = rand() % (11 - 8);
	int P = rand() % (11 - 8); // Favor de leer en ingles la 'p'.

	/* ALMACENAMOS LOS DATOS */
	ofstream ArchivoOraciones;
	ArchivoOraciones.open("OracionesRandom2.txt", ios::app);
	ArchivoOraciones << endl;
	
	if (ArchivoOraciones.fail())
	{
		cout << "Ha ocurrido un error en la creacion del archivo." << endl;
		exit(1);
	}
	else
		cout << "Se ha almacenado la informacion correctamente." << endl;

	ArchivoOraciones << "Las oraciones aleatorias son: " << endl;
	ArchivoOraciones << endl;

	for (int i = 0; i < 2; i++)
	{

		ArchivoOraciones << SUJETO[E] << " " << ADJETIVO[I] << " " << VERBO[Y] << " " << ADVERVIO[P] << " " << PREPOSICION[I] << " " << SUSTANTIVO[Y] << endl;
		ArchivoOraciones << SUJETO[Y] << " " << ADJETIVO[Y] << " " << VERBO[E] << " " << ADVERVIO[I] << " " << PREPOSICION[Y] << " " << SUSTANTIVO[E] << endl;
		ArchivoOraciones << SUJETO[P] << " " << ADJETIVO[E] << " " << VERBO[I] << " " << ADVERVIO[Y] << " " << PREPOSICION[E] << " " << SUSTANTIVO[E] << endl;
		ArchivoOraciones << SUJETO[I] << " " << ADJETIVO[P] << " " << VERBO[P] << " " << ADVERVIO[I] << " " << PREPOSICION[P] << " " << SUSTANTIVO[I] << endl;
	}
	cin.ignore();
	cin.get();
	return 0;
}