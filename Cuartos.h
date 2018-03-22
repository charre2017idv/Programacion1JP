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
	PISTA_TRES,
	PISTA_CUATRO,
	PISTA_CINCO,
	PISTA_VACIO
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
	string opcion_Direccion;
	int numeroHabitacion;
	int direccionesC;


	Cuartos(string nombre, string descripcion, string direcciones, NumSalones  numHabitacion, objetos_Cuarto objetos, int conections);
	~Cuartos();

	// GETER : Se va a regresar el objeto que hay en un cuarto
	string Get_Item();

private:
	objetos_Cuarto Item;
	string Arreglo_Pistas[7] = {"Pista 1: ...","Pista 2: ...","Pista 3: ...", "Pista 4: ...", "Pista 5: ...","Pista ???: Aqui no hay nada." };
};

