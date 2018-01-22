// Capitulo 3 - Drill 1

#include <iostream>
#include <string>

using namespace std;
inline void keep_window_open() { char ch; cin >> ch; }
// Variables	
string minombre;
string nombre;
string nombre_amigo;
char sexo_amigo = 0;
int edad = 0;

int main()
{
	// Parametros de las variables
	cout << "Ingresa tu nombre: " << endl;
	cin >> minombre;
	cout << "Ingresa el nombre de la persona a la que le quieres escribir: "<< endl;
	cin >> nombre;
	cout << "Ingresa el nombre de un amigo para continuar: " << endl;
	cin >> nombre_amigo;
	cout << "Ingresa 'm' si tu amigo es masculino o ingresa 'f' si tu amigo es femenino: " << endl;
	cin >> sexo_amigo;
	cout << "Ingresa la edad de el amigo: " << endl;
	cin >> edad;

	cout << "===========================================================" << endl;
	// Respuestas de las variables
	cout << "Querido/a, " << nombre << endl;
	cout << "Como estas?, Como te ha ido?. A mi me a ido muy bien, estoy haciendo una tarea para Yeipi." << endl;
	cout << "Has visto a " << nombre_amigo << "?, No lo he visto ultimamente..., Desde que se pelearon los cholos en el oxxo." << endl;
	if (sexo_amigo == 'm')
	{
		cout << "Si ves a " << nombre_amigo << " porfavor dile a el que me llame." << endl;
	}
	if (sexo_amigo == 'f')
	{
		cout << "Si ves a " << nombre_amigo << " porfavor dile a ella que me llame." << endl;
	}
	if (edad == 0 && edad > 110)
	{
		cout << "JAJA Estas bromeando!" << endl;
	}
	else (edad != 0);
	{
		cout << "Escuche que fue tu cumple y ya tienes " << edad << " años." << endl;
	}
	if (edad < 12 && edad != 0 )
	{
		cout << "Escuche que fue tu cumple y ya tienes " << edad << " años. Pronto seran "<< edad+1 << endl;
	}
	if (edad == 17)
	{
		cout << "Wow!, El proximo ano ya podras votar." << endl;
	}
	if (edad == 70)
	{
		cout << "Espero que estes disfrutando tu retiro..." << endl;
	}

	cout << "Tu querido amigo," << endl;
	cout << " " << endl;
	cout << minombre;

	
	cin.get();
	cin.get();
	return 0;
}