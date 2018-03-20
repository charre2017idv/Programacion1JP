// TEMA: AVENTURA DE TEXTO 2.0
#include<iostream>
#include <string>
#include <vector>
#include "Cuartos.h"
#include "Jugador.h"
using namespace std;

int Mapa_Escuela [12][12] = {
//  0  1  2  3  4  5  6  7  8  9  10 11	
	0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0,	// 0
	0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0,	// 1
	0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0,	// 2
	0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0,	// 3
	0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0,	// 4
	0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0,	// 5
	0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0,	// 6
	0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1,	// 7
	0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0,	// 8
	0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0,	// 9
	0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0,	// 10
	0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0	// 11
};

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

int main()
{
	Jugador Usuario (string("Charre"));
	int vivo = true;
	string opcion;
	cout << "Escribe la accion que quieras realizar:" << endl;
	cout << "> ";
	cin >> opcion;

	while (vivo = true)
	{
		if (opcion == "cuartos")
		{
			inGame();
			cout << "Escribe la accion que quieras realizar:" << endl;
			cout << "> ";
			cin >> opcion;
		}
		else if (opcion == "inventario")
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
				cout << "Ese comando no existe, favor de comprobar" << endl;
				cout << "Escribe la accion que quieras realizar:" << endl;
				cout << "> ";
				cin >> opcion;
			}
		}
		else if (opcion == "posicion")
		{
			cout << "La posicion actual es: " << Mapa_Escuela[1][3] << endl;

			// El primer valor de la matriz '[1]' es la fila y el segundo '[3]' es la columna
			cout << "Ese comando no existe, favor de comprobar" << endl;
			cout << "Escribe la accion que quieras realizar:" << endl;
			cout << "> ";
			cin >> opcion;
		}
		else if (opcion == "salir")
		{
			break;
		}
		else
		{
			cout << "Ese comando no existe, favor de comprobar" << endl;
			cout << "Escribe la accion que quieras realizar:" << endl;
			cout << "> ";
			cin >> opcion;
		}
	}

	cin.ignore();
	cin.get();
	return 0;
}

