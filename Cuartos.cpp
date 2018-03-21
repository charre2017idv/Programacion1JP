#include "Cuartos.h"



Cuartos::Cuartos(string nombre, string descripcion, NumSalones  numHabitacion, objetos_Cuarto objetos, int conections)
{
	nombreSalon = nombre;
	descripcionCuarto = descripcion;
	numeroHabitacion = numHabitacion;
	Item = objetos;
	direcciones = conections;
}


Cuartos::~Cuartos()
{
}


// METODOS

string Cuartos::Get_Item()
{
	return Arreglo_Pistas[Item-1];
}
