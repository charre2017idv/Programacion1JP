/* Write a program to test an integer value to determine if it is odd or
even. As always, make sure your output is clear and complete. In other
words, don’t just output yes or no. Your output should stand alone,
like The value 4 is an even number. Hint: See the remainder (modulo)
operator in §3.4 */

#include<iostream>

using namespace std;

int main()
{
	int valor1 = 0;
	int valor2 = 0;
	int retrun;

	cout << "Ingresa el primer valor: " << endl;
	cin >> valor1;

	if (valor1 % 2 == 0)
	{
		cout << "Es par el numero: " << valor1 << endl;
	}
	else {
		cout << "Es impar: " << valor1 << endl;
	}
	cin.ignore();
	cin.get();
	return 0;
}