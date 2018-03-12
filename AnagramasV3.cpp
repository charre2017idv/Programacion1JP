// TEMA: Anagramas V2
#include<iostream>
#include <fstream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

/*Se ordenana las palabras para que se pueda hacer la comparacion.*/
string ordenacion(string a)
{
	sort(a.begin(), a.end());
	return a;
}

/*En la version 1 de este ejercicio se presenta una manera en la cual
se ingresen dos palabras para ver si las dos son anagramas, por otro lado,
eso era una sola practica por lo que recurri a hacerlo para que recorrirea 
todo el documento y leyera toda la informacio.*/
vector<string> Anagrama;
void VectorAnagramas(vector<string>& Anagrama)
{
	//ofstream ArchivoAnagramas;

	//ArchivoAnagramas.open("anagramasNuevo.txt", ios::app);
	
	for (int i = 0; i < Anagrama.size(); i++)
	{
		//ArchivoAnagramas << Anagrama[i] << endl;
		cout << Anagrama[i] << endl;
	}

}

int main()
{
	ifstream leerArchivo;
	leerArchivo.open("anagramas.txt", ios::in);
	list<string> Milista;
	string p, texto; /* 'P' es la variable que se tomara como entrada de
					 a todas las palabras que tiene el documento. */

	cout << "Palabras en el documento:" << endl;
	while (leerArchivo >> p)
	{
		Milista.push_back(p); // Se leeran todas las palabras y se agregaran a la lista
		cout << "[" << p << "]"; // Se muestran las palabras
	}
	cout << endl;
	cout << "Numero de palabras: #" << Milista.size() << endl; // Actualmente existen 10 palabras en el documento

	list<string>::iterator iterador, valor;
	for (iterador = Milista.begin(); iterador != Milista.end(); iterador++)
	{ // Para cada palabra se comparara la palabra con las demas que existen
		string orden = ordenacion(*iterador); // Muestra las letras ordenadas en la posicion donde esta
		valor = iterador;
		valor++; // Esto es para ir pasando de una palabra a la siguiente

		vector<string> Anagrama(1, *iterador); // Si existe un anagrama se agrega al vector
		while (valor != Milista.end())
		{

			if (ordenacion(*valor) == orden) // Si la ordenacion con el valor en este caso de lista es igual a la ordenacion 
			{
				Anagrama.push_back(*valor); // Se agregara a la lisya 
				valor = Milista.erase(valor);// y luego se borraran las palabras que no son anagramas
			}
			else
			{ // De lo contrario agregara un espacio para la siguiente palabra
				valor++;
			}
		}

		if (Anagrama.size() > 1)
		{

			cout << endl;
			cout << "Nuevo Anagrama:" << endl;
			VectorAnagramas(Anagrama);
			//cout << "Actualmente hay " << Milista.size() << " anagramas." << endl; // Cantidad de anagramas existentes
			ofstream ArchivoAnagramas;
			ArchivoAnagramas.open("anagramasNuevo.txt", ios::app);
			ArchivoAnagramas << endl;
			ArchivoAnagramas << "Nuevo Anagrama:" << endl;
			for (int i = 0; i < Anagrama.size(); i++)
			{
				
				ArchivoAnagramas << Anagrama[i] << endl;
				//ArchivoAnagramas << Vector(Anagrama);
			}
		}
	}
	cin.ignore();
	cin.get();
	return 0;
}

