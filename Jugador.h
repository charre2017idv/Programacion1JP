#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Jugador
{
public:
	// VARIABLE
	string NombreJugador;



	Jugador(string nombre);
	~Jugador();

	// SETER
	void Set_Inventory(string items);

	// GETER
	void  Get_Inventory();


private:
	vector <string> Inventario;
};

