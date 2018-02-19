// TEMA: Capitulo 11 - Drill
#include<iostream>
#include <iomanip> // Da funcionamiento a setw()

// 'setw()' Define el tamano que tendra una cadena
using namespace std;

// 1 - 7
void Nacimiento()
{
	int Birth_Year = 1998;
	int edad = 19;

	cout << showbase << "Ano Nacimiento:" << endl;
	cout << Birth_Year << "Decimal :" << endl;
	cout << oct << Birth_Year << "Octal: " << endl;
	cout << hex << Birth_Year << "Hexadecimal: " << endl;

	cout << dec << endl << "Edad:" << endl;
	cout << edad << "Decimal: " << endl;
	cout << oct << edad << "Octal: " << endl;
	cout << hex << edad << "Hexadecimal: " << endl;
}

// 8
void drill8()
{
	int a,b,c,d;
	cout << "Ingresa los siguientes valores: (1234 1234 1234 1234)" << endl;
	cout << "> ";
	cin >> a >> hex >> b >> oct >> c >> d;
	cout << a << '\t' << b << '\t' << c << '\t' << d << endl;
}

// 9
void variablesFloat()
{
	cout << endl;
	cout << "Normal: " << 1234567.89 << endl;
	cout << endl;
	cout << "Fixed: "  << fixed << 1234567.89 << endl;
	cout << endl;
	cout << "Scientific: " << scientific << 1234567.89 << endl;
	cout << endl;
}

// 10
void contacto()
{
	cout << setw(10) << "NOMBRE"	<< " | " << setw(10) << "APELLIDO"  << " | " << setw(16) << "TELEFONO"	    << " | " << setw(30) << "CORREO ELECTRONICO"					   << endl;
	cout << setw(10) << "Roberto"	<< " | " << setw(10) << "Charreton"	<< " | " << setw(16) << "+3310 7443 00" << " | " << setw(30) << "idv17c.rcharreton@uartesdigitales.edu.mx" << endl;
	cout << setw(10) << "Luis"		<< " | " << setw(10) << "Pineda"	<< " | " << setw(16) << "+3310 7443 00" << " | " << setw(30) << "idv17c.rcharreton@uartesdigitales.edu.mx" << endl;
	cout << setw(10) << "Mike"		<< " | " << setw(10) << "Garcia"	<< " | " << setw(16) << "+3310 7443 00" << " | " << setw(30) << "idv17c.rcharreton@uartesdigitales.edu.mx" << endl;
	cout << setw(10) << "JP"		<< " | " << setw(10) << "Gutierrez"	<< " | " << setw(16) << "+3310 7443 00" << " | " << setw(30) << "idv17c.rcharreton@uartesdigitales.edu.mx" << endl;
	cout << setw(10) << "Fernando"	<< " | " << setw(10) << "Jimenez"	<< " | " << setw(16) << "+3310 7443 00" << " | " << setw(30) << "idv17c.rcharreton@uartesdigitales.edu.mx" << endl;
	cout << setw(10) << "Olaf"		<< " | " << setw(10) << "Cortes"	<< " | " << setw(16) << "+3310 7443 00" << " | " << setw(30) << "idv17c.rcharreton@uartesdigitales.edu.mx" << endl;

}

void menu() {
	cout << "1) Edad y Nacimiento" << endl;
	cout << "2) Valores Octa y Hex" << endl;
	cout << "3) 3 Variables flotantes" << endl;
	cout << "4) Tablita magica de contactos" << endl;
	cout << "5) Menu" << endl;
}

int main()
{

	int opcion = 0;
	cout << "Ingresa el numero de la funcion: " << endl;
	menu();
	cout << "> ";

	cin >> opcion;
	while (opcion != 0)
	{
		if (opcion == 1) // Imprime Edad y ano
		{
			Nacimiento();
		}
		else if (opcion == 2) // Imprime valores en octa y hex
		{
			drill8();
		}
		else if (opcion == 3) // Imprime variables float
		{
			variablesFloat();
		}
		else if (opcion == 4) // Imprime tabla magica de contactos
		{
			contacto();
		}
		else if (opcion == 5)
		{
			menu();
		}
		else if (opcion == 0) 
		{
			break;
		}
		cout << "Ingresa el numero de la funcion: ";
		cin >> opcion;
	}
	

	cin.ignore();
	cin.get();
	return 0;
}




