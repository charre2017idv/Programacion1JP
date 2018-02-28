// TEMA: Anagramas
#include<iostream>
#include <string>
#include <list>
#include <algorithm>

// GLOSARIO
// find() : Busca en la cadena la primera aparición de la secuencia especificada por sus argumentos.
// string::npos : Tiene un valor definido como -1, se utiliza cuando se desea la longitud de una cadena.
// replace : Remplaza la porcion de texto que tiene seleccionado por un nuevo dato


// Ejemplo anagrama 
// TOM MARVOLO RIDDLE
// I AM LORD VOLDEMORT
using namespace std;

// Ordenar las palabras 
// CASA	| JAPONES
// AACS | AEJNOPS

/* Esto esta muy mamon y no lo entiendo
string ordenacion(string a)
{
	sort(a.begin(), a.end());
	return a;
}*/

// ORDENACION DE MANERA EXPLICADA
string ordenacion(string a)
{
	list<char> miLista;
	for (int i = 0; i < a.size(); i++)
	{
		miLista.push_back(a[i]);
	}
	miLista.sort();
	string result;
	list <char>::iterator it;

	for (it = miLista.begin(); it != miLista.end(); it++)
	{
		result += *it;
	}
	return result;
}

bool anagramas(string a, string b)
{
	return ordenacion(a) == ordenacion(b);
}

/* MODO COMPLICADO
bool anagramas(string a, string b)
{
	for (int i = 0; i < a.size(); i++) // Se va a recorrer todas las letras de la palabra 'a'
	{
		int posicionActual = b.find(a[i]);

		if ( posicionActual == string::npos)// Se revisa si estan en 'b'
		{// Si se devuelve '-1' quiere decir que no encontro la letra deseada
			return false; // Indica que no pueden ser anagramas
		}
		b.replace(posicionActual, 1, ""); // Se remplaza por vacio en caso de existir palabras repetidas y asi ya exista o no anagrama (se queda con el ultimo caracter)
	}
	return true;
	//return b.size() = 0; // Indica que si existe anagrama
}*/

int main()
{
	string a, b;
	cout << "Ingresa las palabras que sean anagramas:" << endl;
	cin >> a >> b;
	cout << ordenacion(a) << endl;
	cout << ordenacion(b) << endl;


	if (anagramas(a, b))
	{
		cout << "Es anagrama." << endl;
	}
	else
	{
		cout << "No es anagrama." << endl;
	}

	cin.ignore();
	cin.get();
	return 0;
}

