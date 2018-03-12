// TEMA: Aventura de texto
#include<iostream>
#include <string>
#include <vector>
using namespace std;

int menu()
{
	cout << "=====================================" << endl;
	cout << "=========== LOST IN SPACE ===========" << endl;
	cout << "=====================================" << endl;
	cout << "======= (1) Nuevo Juego	      =======" << endl;
	cout << "======= (2) Continuar	      =======" << endl;
	cout << "======= (3) Ver Avances	      =======" << endl;
	cout << "======= (4) Salir	      =======" << endl;
	cout << "=====================================" << endl;
	return 0;
}

int Inventory(string& opcion)
{
	vector <string> Inventario;
	Inventario.push_back("AMOR");
	Inventario.push_back("COLOR");
	cout << "Actualmente cuentas con "<< Inventario.size() << " pistas."<< endl;
	cout << endl;
	cout << "Inventario: ";
	for (int i = 0; i < Inventario.size(); ++i)
	{
		cout << Inventario[i] << ",";
	}
	cout << endl;
	return 0;
}

// PISTAS
int Pista1() // Pista 1 / Lock 2 Respuesta = sabiduria
{
	cout << "En el pasaje que lleva a la sabiduria, encontraras una gran aventura." << endl;
	return 0;
}

int Pista2() // Pista 2 / Lock 3 Respuesta = miedo
{
	cout << "No se puede amar porque el amor lleva al miedo, el miedo al odio y el odio al lado oscuro." << endl;
	return 0;
}

int Pista3() // Pista 3 / Lock 4 Respuesta = aventura
{
	cout << "Siempre quise que mi vida fuese una aventura, pero no sin ti." << endl;
	return 0;
}

int primeraVez()
{
	string opcion;
	while (opcion != "0")
	{
		cout << endl;
		cout << "Ingresa la accion que quieras realizar: " << endl;
		cout << "> ";
		cin >> opcion;
		if (opcion == "inventario")
		{
			Inventory(opcion);
		}
		else if (opcion == "ir sur")
		{
			cout << "Has ido al sur..." << endl;
		}

	}
	

	return 0;
}

int nuevojuego()
{
	string NombreUsuario;
	cout << "------------------------------" << endl;
	cout << "PRELUDIO / El mensaje." << endl;
	cout << endl;
	cout << "Ingresa tu nombre: ";
	cin >> NombreUsuario;
	cout << endl;
	cout << "Hay un evento en la escuela AUD en la cual se realiza un concurso en donde los mejores contendientes\n en programacion compiten para poder aspirar a una beca escolar, la dinamica consite en hackear un servidor\n de una empresa patrocinadora llamada 'INTOL' donde se dedican a la construccion y desarrollo de software." << endl;
	cout << endl;
	cout << "Todos los anos '" << NombreUsuario << "', asiste a este evento para poder participar y de este modo aspirar\n a una beca, aunque no lo ha logrado, '" << NombreUsuario << "' sigue esforzandose, este ano le toco participar y dormir en el aula 1\n del campus donde con dos companeros mas compiten por hackear mas rapido el sistema del servidor." << endl;

	primeraVez();
	return 0;
}

int main()
{
	int opcion;
	menu();
	cout << endl;
	cout << "Ingrese la opcion de juego que quiere realizar: " << endl;
	cout << "> ";
	cin >> opcion;

	switch (opcion)
	{
	case 1:
		nuevojuego();
		break;
	case 0:
		break;
	}
	
	cin.ignore();
	cin.get();
	return 0;
}