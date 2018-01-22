/* Write a program that converts spelled-out numbers such as “zero” and
“two” into digits, such as 0 and 2. When the user inputs a number, the
program should print out the corresponding digit. Do it for the values 0,
1, 2, 3, and 4 and write out not a number I know if the user enters something
that doesn’t correspond, such as stupid computer!. */
#include<iostream>
#include<string>

using namespace std;

int main()
{

	string  cero="cero",uno="uno",dos="dos",tres="tres",cuatro="cuatro", palabra;

	cout << "Escribe un numero: " << endl;
	cin >> palabra;

	if (palabra == cero)
	{
		cout << 0 << endl;
	}
	else if (palabra == uno)
	{
		cout << 1 << endl;
	}
	else if (palabra == dos)
	{
		cout << 2 << endl;
	}
	else if (palabra == tres)
	{
		cout << 3 << endl;
	}
	else if (palabra == cuatro)
	{
		cout << 4 << endl;
	}
	else
	{
		cout << "Estupida computadora!" << endl;
	}
	cin.ignore();
	cin.get();
	return 0;
}


