/* Write a program that takes an operation followed by two operands and
outputs the result. For example:
+ 100 3.14
* 4 5
 Read the operation into a string called operation and use an
if-statement to figure out which operation the user wants, for example,
if (operation=="+"). Read the operands into variables of type double.
Implement this for operations called +, –, *, /, plus, minus, mul, and div
with their obvious meanings. */
#include <iostream>
#include <string>

using namespace std;

int main()
{
	float result;
	float valor1;
	float valor2;
	string operando;

	cout << "Ingresa la operacion de corrido: (+ 200 4.25)" << endl;
	cin >> operando >> valor1 >> valor2;

	if (operando == "+")
	{
		result = valor1 + valor2;
	}
	else if (operando == "-")
	{
		result = valor1 - valor2;
	}
	else if (operando == "*")
	{
		result = valor1 * valor2;
	}
	else if (operando == "/")
	{
		result = valor1 / valor2;
	}
	else {
		cout << "Hijoles chavo, asi no se puede..." << endl;
	}
	cout << "El resultado es: " << result << endl;

	cin.ignore();
	cin.get();
	return 0;
}