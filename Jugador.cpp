#include "Jugador.h"



Jugador::Jugador(string nombre)
{
	NombreJugador = nombre;
}


Jugador::~Jugador()
{
}

// METODOS

// Se agregan datos al inventario
void Jugador::Set_Inventory(string items)
{
	cout << "Se ha agregado '" << items << "' al inventario" << endl;
	Inventario.push_back(items);
}

// Se muestran los datos del inventario
void Jugador::Get_Inventory()
{
	cout << "Inventario: {";
	for (int i = 0; i < Inventario.size(); i++)
	{
		cout << Inventario[i] << ", ";
	}
	cout << "}" << endl;
	cout << endl;
}
