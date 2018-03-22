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
string opcion;

// Funciones
void accion()
{
	cout << "Escribe la accion que quieras realizar:" << endl;
	cout << "Si requiere ayuda, tecle la palabra 'ayuda'." << endl;
	cout << "> ";
	cin >> opcion;
}

void Brujula()
{
	cout << "+-----------------------+" << endl;
	cout << "|\t    N	 \t|" << endl;
	cout << "|\t    |	 \t|" << endl;
	cout << "|\tE<--X-->O\t|" << endl;
	cout << "|\t    |	 \t|" << endl;
	cout << "|\t    S	 \t|" << endl;
	cout << "+-----------------------+" << endl;
	cout << endl;
}

void Ayuda()
{
	cout << "=================================" << endl;
	cout << "========      AYUDA      ========" << endl;
	cout << "=================================" << endl;
	cout << "= Estas son las acciones que se =" << endl;
	cout << "= pueden realizar.              =" << endl;
	cout << "=================================" << endl;
	cout << "========     Acciones    ========" << endl;
	cout << "=================================" << endl;
	cout << "=   1. Inventario               =" << endl;
	cout << "=   2. Examinar_salon1/pasillo1 =" << endl;
	cout << "=   3. Brujula                  =" << endl;
	cout << "=   4. Salir                    =" << endl;
	cout << "=================================" << endl;
	cout << "=================================" << endl;
	cout << "========    Movimiento   ========" << endl;
	cout << "=================================" << endl;
	cout << "=   1. Norte                    =" << endl;
	cout << "=   2. Sur                      =" << endl;
	cout << "=   3. Este                     =" << endl;
	cout << "=   4. Oeste                    =" << endl;
	cout << "=================================" << endl;
}

void precaucion_Pared()
{
	cout << "Hay una pared, amigo. No creo que puedas atravesarla." << endl;
}



// SALONES
// si mapa(fila x columna) && 'palabra' en arreglo, se ejecuta el paso de cuarto4
void SALON_1()
{
	if (Mapa_Escuela[fila_X][columna_Y] == 1)
	{
		// Salones
		Cuartos Salon_1(string("Salon 1"), string("Este es el salon de nuestro equipo."), string("Sur"), NumSalones::SALON_UNO, objetos_Cuarto::PISTA_UNO, 34);
		cout << "Nombre del salon: " << Salon_1.nombreSalon << endl;
		cout << "Descripcion: " << Salon_1.descripcionCuarto << endl;
		cout << "Direcciones: " << Salon_1.opcion_Direccion << endl;
		cout << "Numero Cuarto: " << Salon_1.numeroHabitacion << endl;

		//cout << "Objeto en el cuarto: " << Salon_1.Get_Item() << endl;
	}
	if (Mapa_Escuela[fila_X][columna_Y] == 1 && opcion == "examinar_salon1")
	{
		Cuartos Salon_1(string("Salon 1"), string("Este es el salon de nuestro equipo."), string("Sur"), NumSalones::SALON_UNO, objetos_Cuarto::PISTA_UNO, 34);

		cout << "Objeto en el cuarto: " << Salon_1.Get_Item() << endl;
	}
} // en caso de qu requiera contrasena hacer comprobacion
void SALON_2()
{
	if (Mapa_Escuela[fila_X][columna_Y] == 2 ) 
	{
		Cuartos Salon_2(string("Salon 2"), string("Hay una nota en el suelo."), string("Sur"), NumSalones::SALON_DOS, objetos_Cuarto::PISTA_DOS, 34);
		cout << "Nombre del salon: " << Salon_2.nombreSalon << endl;
		cout << "Descripcion: " << Salon_2.descripcionCuarto << endl;
		cout << "Direcciones: " << Salon_2.opcion_Direccion << endl;
		cout << "Numero Cuarto: " << Salon_2.numeroHabitacion << endl;


		cout << endl;
	}
	if (opcion == "examinar_salon2")
	{
		Cuartos Salon_2(string("Salon 2"), string("Hay una nota en el suelo."), string("Sur"), NumSalones::SALON_DOS, objetos_Cuarto::PISTA_DOS, 34);
		cout << "Objeto en el cuarto: " << Salon_2.Get_Item() << endl;
	}
}
void SALON_6()
{
	if (Mapa_Escuela[fila_X][columna_Y] == 6)
	{
		Cuartos Salon_6(string("Salon 6"), string("Hay una nota en el suelo."), string("Norte"), NumSalones::SALON_SEIS, objetos_Cuarto::PISTA_TRES, 34);
		cout << "Nombre del salon: " << Salon_6.nombreSalon << endl;
		cout << "Descripcion: " << Salon_6.descripcionCuarto << endl;
		cout << "Direcciones: " << Salon_6.opcion_Direccion << endl;
		cout << "Numero Cuarto: " << Salon_6.numeroHabitacion << endl;

		cout << endl;
	}
	if (opcion == "examinar_salon6")
	{
		Cuartos Salon_6(string("Salon 6"), string("Hay una nota en el suelo."), string("Norte"), NumSalones::SALON_SEIS, objetos_Cuarto::PISTA_TRES, 34);
		cout << "Objeto en el cuarto: " << Salon_6.Get_Item() << endl;
	}
}
void SALON_7()
{
	if (Mapa_Escuela[fila_X][columna_Y] == 7)
	{
		Cuartos Salon_7(string("Salon 7"), string("Hay una nota la pared."), string("Norte"), NumSalones::SALON_SIETE, objetos_Cuarto::PISTA_CUATRO, 34);
		cout << "Nombre del salon: " << Salon_7.nombreSalon << endl;
		cout << "Descripcion: " << Salon_7.descripcionCuarto << endl;
		cout << "Direcciones: " << Salon_7.opcion_Direccion << endl;
		cout << "Numero Cuarto: " << Salon_7.numeroHabitacion << endl;

		cout << endl;
	}
	if (opcion == "examinar_salon7")
	{
		Cuartos Salon_7(string("Salon 7"), string("Hay una nota la pared."), string("Norte"), NumSalones::SALON_SIETE, objetos_Cuarto::PISTA_CUATRO, 34);
		cout << "Objeto en el cuarto: " << Salon_7.Get_Item() << endl;
	}
}
void SALON_10()
{
	if (Mapa_Escuela[fila_X][columna_Y] == 10)
	{
		Cuartos Salon_10(string("Salon 10"), string("Hay una nota el suelo."), string("Norte"), NumSalones::SALON_DIEZ, objetos_Cuarto::PISTA_CINCO, 34);
		cout << "Nombre del salon: " << Salon_10.nombreSalon << endl;
		cout << "Descripcion: " << Salon_10.descripcionCuarto << endl;
		cout << "Direcciones: " << Salon_10.opcion_Direccion << endl;
		cout << "Numero Cuarto: " << Salon_10.numeroHabitacion << endl;

		cout << endl;
	}
	if (opcion == "examinar_salon10")
	{
		Cuartos Salon_10(string("Salon 10"), string("Hay una nota el suelo."), string("Norte"), NumSalones::SALON_DIEZ, objetos_Cuarto::PISTA_CINCO, 34);
		cout << "Objeto en el cuarto: " << Salon_10.Get_Item() << endl;
	}
}

// PASILLOS
void PASILLO_1()
{
	if (Mapa_Escuela[fila_X][columna_Y] == 3)
	{
		Cuartos Pasillo_1(string("Pasillo 1"), string("Casilleros alrededor"), string("Norte, Sur, Oeste"), NumSalones::SALON_TRES, objetos_Cuarto::PISTA_VACIO, 34);
		cout << "Nombre del salon: " << Pasillo_1.nombreSalon << endl;
		cout << "Descripcion: " << Pasillo_1.descripcionCuarto << endl;
		cout << "Direcciones: " << Pasillo_1.opcion_Direccion << endl;
		cout << "Numero Cuarto: " << Pasillo_1.numeroHabitacion << endl;


		cout << endl;
	}
	if (opcion == "examinar_pasillo1")
	{
		Cuartos Pasillo_1(string("Pasillo 1"), string("Casilleros alrededor"), string("Norte, Sur, Oeste"), NumSalones::SALON_TRES, objetos_Cuarto::PISTA_VACIO, 34);
		cout << "Objeto en el cuarto: " << Pasillo_1.Get_Item() << endl;
	}
}
void PASILLO_2()
{
	if (Mapa_Escuela[fila_X][columna_Y] == 4)
	{
		Cuartos Pasillo_2(string("Pasillo 2"), string("Casilleros alrededor."), string("Este, Oeste"), NumSalones::SALON_CUATRO, objetos_Cuarto::PISTA_VACIO, 34);
		cout << "Nombre del salon: " << Pasillo_2.nombreSalon << endl;
		cout << "Descripcion: " << Pasillo_2.descripcionCuarto << endl;
		cout << "Direcciones: " << Pasillo_2.opcion_Direccion << endl;
		cout << "Numero Cuarto: " << Pasillo_2.numeroHabitacion << endl;

		cout << endl;
	}
	if (opcion == "examinar_pasillo2")
	{
		Cuartos Pasillo_2(string("Pasillo 2"), string("Casilleros alrededor."), string("Este, Oeste"), NumSalones::SALON_CUATRO, objetos_Cuarto::PISTA_VACIO, 34);
		cout << "Objeto en el cuarto: " << Pasillo_2.Get_Item() << endl;
	}
}
void PASILLO_3()
{
	if (Mapa_Escuela[fila_X][columna_Y] == 5)
	{
		Cuartos Pasillo_3(string("Pasillo 3"), string("Casilleros alrededor"), string("Norte, Sur, Este, Oeste"), NumSalones::SALON_CINCO, objetos_Cuarto::PISTA_VACIO, 34);
		cout << "Nombre del salon: " << Pasillo_3.nombreSalon << endl;
		cout << "Descripcion: " << Pasillo_3.descripcionCuarto << endl;
		cout << "Direcciones: " << Pasillo_3.opcion_Direccion << endl;
		cout << "Numero Cuarto: " << Pasillo_3.numeroHabitacion << endl;

		cout << endl;
	}
	if (opcion == "examinar_pasillo3")
	{
		Cuartos Pasillo_3(string("Pasillo 3"), string("Casilleros alrededor"), string("Norte, Sur, Este, Oeste"), NumSalones::SALON_CINCO, objetos_Cuarto::PISTA_VACIO, 34);
		cout << "Objeto en el cuarto: " << Pasillo_3.Get_Item() << endl;
	}
}
void PASILLO_4()
{
	if (Mapa_Escuela[fila_X][columna_Y] == 8)
	{
		Cuartos Pasillo_4(string("Pasillo 4"), string("Casilleros alrededor"), string("Este, Oeste"), NumSalones::SALON_OCHO, objetos_Cuarto::PISTA_VACIO, 34);
		cout << "Nombre del salon: " << Pasillo_4.nombreSalon << endl;
		cout << "Descripcion: " << Pasillo_4.descripcionCuarto << endl;
		cout << "Direcciones: " << Pasillo_4.opcion_Direccion << endl;
		cout << "Numero Cuarto: " << Pasillo_4.numeroHabitacion << endl;

		cout << endl;
	}
	if (opcion == "examinar_pasillo4")
	{
		Cuartos Pasillo_4(string("Pasillo 4"), string("Casilleros alrededor"), string("Este, Oeste"), NumSalones::SALON_OCHO, objetos_Cuarto::PISTA_VACIO, 34);
		cout << "Objeto en el cuarto: " << Pasillo_4.Get_Item() << endl;
	}
}
void PASILLO_5()
{
	if (Mapa_Escuela[fila_X][columna_Y] == 9)
	{
		Cuartos Pasillo_5(string("Pasillo 5"), string("Casilleros alrededor"), string("Sur, Este, Oeste"), NumSalones::SALON_NUEVE, objetos_Cuarto::PISTA_VACIO, 34);
		cout << "Nombre del salon: " << Pasillo_5.nombreSalon << endl;
		cout << "Descripcion: " << Pasillo_5.descripcionCuarto << endl;
		cout << "Direcciones: " << Pasillo_5.opcion_Direccion << endl;
		cout << "Numero Cuarto: " << Pasillo_5.numeroHabitacion << endl;

		cout << endl;
	}
	if (opcion == "examinar_pasillo5")
	{
		Cuartos Pasillo_5(string("Pasillo 5"), string("Casilleros alrededor"), string("Sur, Este, Oeste"), NumSalones::SALON_NUEVE, objetos_Cuarto::PISTA_VACIO, 34);
		cout << "Objeto en el cuarto: " << Pasillo_5.Get_Item() << endl;
	}
}
void PASILLO_6()
{
	if (Mapa_Escuela[fila_X][columna_Y] == 11)
	{
		Cuartos Pasillo_6(string("Pasillo 6"), string("Casilleros alrededor"), string("Este, Oeste"), NumSalones::SALON_ONCE, objetos_Cuarto::PISTA_VACIO, 34);
		cout << "Nombre del salon: " << Pasillo_6.nombreSalon << endl;
		cout << "Descripcion: " << Pasillo_6.descripcionCuarto << endl;
		cout << "Direcciones: " << Pasillo_6.opcion_Direccion << endl;
		cout << "Numero Cuarto: " << Pasillo_6.numeroHabitacion << endl;

		cout << endl;
	}
	if (opcion == "examinar_pasillo6")
	{
		Cuartos Pasillo_6(string("Pasillo 6"), string("Casilleros alrededor"), string("Este, Oeste"), NumSalones::SALON_ONCE, objetos_Cuarto::PISTA_VACIO, 34);
		cout << "Objeto en el cuarto: " << Pasillo_6.Get_Item() << endl;
	}
}
void PASILLO_7()
{
	if (Mapa_Escuela[fila_X][columna_Y] == 12)
	{
		Cuartos Pasillo_7(string("Pasillo 7"), string("Casilleros alrededor"), string("Este, Oeste"), NumSalones::SALON_DOCE, objetos_Cuarto::PISTA_VACIO, 34);
		cout << "Nombre del salon: " << Pasillo_7.nombreSalon << endl;
		cout << "Descripcion: " << Pasillo_7.descripcionCuarto << endl;
		cout << "Direcciones: " << Pasillo_7.opcion_Direccion << endl;
		cout << "Numero Cuarto: " << Pasillo_7.numeroHabitacion << endl;

		cout << endl;
	}
	if (opcion == "examinar_pasillo7")
	{
		Cuartos Pasillo_7(string("Pasillo 7"), string("Casilleros alrededor"), string("Este, Oeste"), NumSalones::SALON_DOCE, objetos_Cuarto::PISTA_VACIO, 34);
		cout << "Objeto en el cuarto: " << Pasillo_7.Get_Item() << endl;
	}
}
void PASILLO_8()
{
	if (Mapa_Escuela[fila_X][columna_Y] == 13)
	{
		Cuartos Pasillo_8(string("Pasillo 8"), string("Casilleros alrededor"), string("Este"), NumSalones::SALON_TRECE, objetos_Cuarto::PISTA_VACIO, 34);
		cout << "Nombre del salon: " << Pasillo_8.nombreSalon << endl;
		cout << "Descripcion: " << Pasillo_8.descripcionCuarto << endl;
		cout << "Direcciones: " << Pasillo_8.opcion_Direccion << endl;
		cout << "Numero Cuarto: " << Pasillo_8.numeroHabitacion << endl;

		cout << endl;
	}
	if (opcion == "examinar_pasillo8")
	{
		Cuartos Pasillo_8(string("Pasillo 8"), string("Casilleros alrededor"), string("Este"), NumSalones::SALON_TRECE, objetos_Cuarto::PISTA_VACIO, 34);
		cout << "Nombre del salon: " << Pasillo_8.nombreSalon << endl;
		cout << "Objeto en el cuarto: " << Pasillo_8.Get_Item() << endl;
	}
}

int main()
{
	// Variable del inventario
	Jugador Usuario (string("Charre"));
	int vivo = true;
	
	while (true)
	{
		// Se manda a llamar las funciones de los salones
		SALON_1();
		SALON_2();
		SALON_6();
		SALON_7();
		SALON_10();

		// Se manda a llamar las funciondes de los pasillos
		PASILLO_1();
		PASILLO_2();
		PASILLO_3();
		PASILLO_4();
		PASILLO_5();
		PASILLO_6();
		PASILLO_7();
		PASILLO_8();

		// Valores Estaticos
		cout << endl;
		//cout << "Posicion Actual: " << Mapa_Escuela[fila_X][columna_Y] <<  endl;

		
		accion(); // Se pregunta que se quiere realizar

		
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
		if (opcion == "ayuda")
		{
			Ayuda();
		}
		if (opcion == "brujula")
		{
			//inGame();
			Brujula();
		}

		if (opcion == "cuartos")
		{
			//inGame();
			cout << "Habia cuartos..." << endl;
		}
		// solucion para que se muestren los datos junto con el inventario: se limpia la pantalla
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

		// Ganar
		if (Mapa_Escuela[fila_X][columna_Y] == 13)
		{
			Cuartos Pasillo_8(string("Pasillo 8"), string("Casilleros alrededor"), string("Este"), NumSalones::SALON_TRECE, objetos_Cuarto::PISTA_VACIO, 34);
			cout << "Nombre del salon: " << Pasillo_8.nombreSalon << endl;
			cout << "Descripcion: " << Pasillo_8.descripcionCuarto << endl;
			cout << "Direcciones: " << Pasillo_8.opcion_Direccion << endl;
			cout << "Numero Cuarto: " << Pasillo_8.numeroHabitacion << endl;
			cout << "Has terminado el juego." << endl;
			break;
		}
	}

	cin.ignore();
	cin.get();
	return 0;
}

