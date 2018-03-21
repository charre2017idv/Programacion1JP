#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Clase del cuarto
// ENUM

enum objetos_Cuarto
{
	NADA = 0,
	PISTA_UNO,
	PISTA_DOS,
	PISTA_TRES
};

enum NumSalones
{
	PARED = 0,
	SALON_UNO,
	SALON_DOS,
	SALON_TRES,
	SALON_CUATRO,
	SALON_CINCO,
	SALON_SEIS,
	SALON_SIETE,
	SALON_OCHO,
	SALON_NUEVE,
	SALON_DIEZ,
	SALON_ONCE,
	SALON_DOCE,
	SALON_TRECE
};

class Cuartos
{
public:
	string nombreSalon;
	string descripcionCuarto;
	int numeroHabitacion;
	int direcciones;


	Cuartos(string nombre, string descripcion, NumSalones  numHabitacion, objetos_Cuarto objetos, int conections);
	~Cuartos();

	// GETER : Se va a regresar el objeto que hay en un cuarto
	string Get_Item();

private:
	objetos_Cuarto Item;
	string Arreglo_Pistas[4] = {"Pista 1: ...","Pista 2: ...","Pista 3: ..."};
};

