// TEMA: AVENTURA DE TEXTO 2.0
#include<iostream>
#include <string>
#include <vector>
#include "Cuartos.h"
#include "Jugador.h"
using namespace std;


// Se declara los espacios en el array para recorrer la matriz
int Mapa_Escuela[5][11] =

{ { 0, 0, 0, 0, 0, 0,  0,  0,  0,  0 },

  { 0, 1, 0, 2, 0, 0,  0,  0,  0,  0 }, // Se inicializa en la segunda posicion

  { 0, 3, 4, 5, 8, 9,  11, 12, 13, 0 },

  { 0, 6, 0, 7, 0, 10, 0,  0,  0,  0 },

  { 0, 0, 0, 0, 0, 0,  0,  0,  0,  0 }
};

// Variables
int columna_Y = 1;
int fila_X = 1;

void precaucion_Pared()
{
	cout << "Hay una pared, amigo. No creo que puedas atravesarla." << endl;
}

int inGame()
{
	// Salones
	Cuartos Salon_1(string("Salon 1"),string("Este es el salon de nuestro equipo."), NumSalones::SALON_UNO, objetos_Cuarto::PISTA_UNO, 34);
	cout << "Nombre del salon: " << Salon_1.nombreSalon << endl;
	cout << "Descripcion: " << Salon_1.descripcionCuarto << endl;
	cout << "Numero Cuarto: " << Salon_1.numeroHabitacion << endl;

	cout << "Objeto en el cuarto: " << Salon_1.Get_Item() << endl;

	cout << endl;

	Cuartos Salon_2(string("Salon 2"), string("Hay una nota en el suelo."), NumSalones::SALON_DOS, objetos_Cuarto::PISTA_DOS, 34);
	cout << "Nombre del salon: " << Salon_2.nombreSalon << endl;
	cout << "Descripcion: " << Salon_2.descripcionCuarto << endl;
	cout << "Numero Cuarto: " << Salon_2.numeroHabitacion << endl;
	cout << "Objeto en el cuarto: " << Salon_2.Get_Item() << endl;

	cout << endl;

	Cuartos Salon_3(string("Salon 3"), string("Hay una nota en el escritorio."), NumSalones::SALON_TRES, objetos_Cuarto::PISTA_TRES, 34);
	cout << "Nombre del salon: " << Salon_3.nombreSalon << endl;
	cout << "Descripcion: " << Salon_3.descripcionCuarto << endl;
	cout << "Numero Cuarto: " << Salon_3.numeroHabitacion << endl;
	cout << "Objeto en el cuarto: " << Salon_3.Get_Item() << endl;

	cout << endl;
	return 0;
}

// SALONES
void SALON_1()
{
	if (Mapa_Escuela[fila_X][columna_Y] == 1)
	{
		// Salones
		Cuartos Salon_1(string("Salon 1"), string("Este es el salon de nuestro equipo."), NumSalones::SALON_UNO, objetos_Cuarto::PISTA_UNO, 34);
		cout << "Nombre del salon: " << Salon_1.nombreSalon << endl;
		cout << "Descripcion: " << Salon_1.descripcionCuarto << endl;
		cout << "Numero Cuarto: " << Salon_1.numeroHabitacion << endl;

		cout << "Objeto en el cuarto: " << Salon_1.Get_Item() << endl;
	}
}
void SALON_2()
{
	if (Mapa_Escuela[fila_X][columna_Y] == 2) 
	{
		Cuartos Salon_2(string("Salon 2"), string("Hay una nota en el suelo."), NumSalones::SALON_DOS, objetos_Cuarto::PISTA_DOS, 34);
		cout << "Nombre del salon: " << Salon_2.nombreSalon << endl;
		cout << "Descripcion: " << Salon_2.descripcionCuarto << endl;
		cout << "Numero Cuarto: " << Salon_2.numeroHabitacion << endl;
		cout << "Objeto en el cuarto: " << Salon_2.Get_Item() << endl;

		cout << endl;
	}
}
void SALON_6()
{
	if (Mapa_Escuela[fila_X][columna_Y] == 6)
	{
		Cuartos Salon_2(string("Salon 6"), string("Hay una nota en el suelo."), NumSalones::SALON_SEIS, objetos_Cuarto::PISTA_TRES, 34);
		cout << "Nombre del salon: " << Salon_2.nombreSalon << endl;
		cout << "Descripcion: " << Salon_2.descripcionCuarto << endl;
		cout << "Numero Cuarto: " << Salon_2.numeroHabitacion << endl;
		cout << "Objeto en el cuarto: " << Salon_2.Get_Item() << endl;

		cout << endl;
	}
}
void SALON_7()
{
	if (Mapa_Escuela[fila_X][columna_Y] == 7)
	{
		Cuartos Salon_2(string("Salon 7"), string("Hay una nota la pared."), NumSalones::SALON_SIETE, objetos_Cuarto::PISTA_UNO, 34);
		cout << "Nombre del salon: " << Salon_2.nombreSalon << endl;
		cout << "Descripcion: " << Salon_2.descripcionCuarto << endl;
		cout << "Numero Cuarto: " << Salon_2.numeroHabitacion << endl;
		cout << "Objeto en el cuarto: " << Salon_2.Get_Item() << endl;

		cout << endl;
	}
}

// PASILLOS

int main()
{
	Jugador Usuario (string("Charre"));
	int vivo = true;
	string opcion;

	while (true)
	{
		// Se manda a llamar las funciones de los salones
		SALON_1();
		SALON_2();
		SALON_6();
		SALON_7();

		// Se manda a llamar las funciondes de los pasillos

		// Valores Estaticos
		cout << endl;
		cout << "Posicion Actual: " << Mapa_Escuela[fila_X][columna_Y] <<  endl;
		cout << "Escribe la accion que quieras realizar:" << endl;
		cout << "> ";
		cin >> opcion;
		cout << endl;

		
		//MOVIMIENTO
		if (opcion == "arriba") // Norte
		{
			if (Mapa_Escuela[fila_X - 1][columna_Y] != 0)
			{
				fila_X -= 1;
			}
			else
			{
				precaucion_Pared();
			}
		}

		if (opcion == "abajo") // Sur
		{
			if (Mapa_Escuela[fila_X + 1][columna_Y] != 0)
			{
				fila_X += 1;
			}
			else
			{
				precaucion_Pared();
			}
		}

		if (opcion == "derecha") //Oeste
		{
			if (Mapa_Escuela[fila_X][columna_Y + 1] != 0)
			{
				columna_Y += 1;
			}
			else
			{
				precaucion_Pared();
			}
		}

		if (opcion == "izquierda")
		{
			if (Mapa_Escuela[fila_X][columna_Y - 1] != 0)
			{
				columna_Y -= 1;
			}
			else
			{
				precaucion_Pared();
			}
		}

		// ACCIONES
		if (opcion == "cuartos")
		{
			inGame();
			cout << "Escribe la accion que quieras realizar:" << endl;
			cout << "> ";
			cin >> opcion;
		}
		if (opcion == "inventario")
		{
			string opcionInv;
			cout << "Quieres agregar algo al inventario: si / ver" << endl;
			cout << "> ";
			cin >> opcionInv;
			if (opcionInv == "si")
			{
				string item;
				cout << "Agregar: ";
				cin >> item;
				Usuario.Set_Inventory(item);
			}
			else if (opcionInv == "ver")
			{
				Usuario.Get_Inventory();
			}
			else if (opcionInv == "no")
			{
				
				cout << "Escribe la accion que quieras realizar:" << endl;
				cout << "> ";
				cin >> opcion;
			}
		}
		
		if (opcion == "salir")
		{
			break;
		}
		//else // Si no existe el valor, entonces ...
		//{
		//	cout << "Ese comando no existe, favor de comprobar" << endl;
		//	cout << "Escribe la accion que quieras realizar:" << endl;
		//	cout << "> ";
		//	cin >> opcion;
		//}
	}

	cin.ignore();
	cin.get();
	return 0;
}

