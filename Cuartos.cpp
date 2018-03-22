#include "Cuartos.h"



Cuartos::Cuartos(string nombre, string descripcion, string direcciones, NumSalones  numHabitacion, objetos_Cuarto objetos, int conections)
{
	nombreSalon = nombre;
	descripcionCuarto = descripcion;
	opcion_Direccion = direcciones;
	numeroHabitacion = numHabitacion;
	Item = objetos;
	direccionesC = conections;
}


Cuartos::~Cuartos()
{
}


// METODOS

string Cuartos::Get_Item()
{
	return Arreglo_Pistas[Item-1];
}
