/* Write a program that prompts the user to enter some number of pennies
(1-cent coins), nickels (5-cent coins), dimes (10-cent coins), quarters
(25-cent coins), half dollars (50-cent coins), and one-dollar coins
(100-cent coins). Query the user separately for the number of each size coin, e.g., “How many pennies do you have?” Then your program should
print out something like this:
You have 23 pennies.
You have 17 nickels.
You have 14 dimes.
You have 7 quarters.
You have 3 half dollars.
The value of all of your coins is 573 cents.
Make some improvements: if only one of a coin is reported, make the
output grammatically correct, e.g., 14 dimes and 1 dime (not 1 dimes).
Also, report the sum in dollars and cents, i.e., $5.73 instead of 573 cents*/

#include<iostream>
using namespace std;

int main()
{
	int result, pennies = 1, penniesP, nickles = 5, nicklesP, dimes = 10, dimesP, quarters = 25, quartersP, halfDollars = 50, halfDollarsP, oneDollar = 100, oneDollarP;
	float Dollars;
	cout << "Cuantos pennies tienes: " << endl;
	cin >> penniesP;
	cout << "Cuantos nickles tienes: " << endl;
	cin >> nicklesP;
	cout << "Cuantos dimes tienes: " << endl;
	cin >> dimesP;
	cout << "Cuantos quarters tienes: " << endl;
	cin >> quartersP;
	cout << "Cuantos half dollars tienes: " << endl;
	cin >> halfDollarsP;

	result = ((pennies*penniesP) + (nickles*nicklesP) + (dimes*dimesP) + (quarters*quartersP) + (halfDollars*halfDollarsP));
	Dollars = result * 0.01;
	cout << "Tienes " << result << " centavos." << endl;
	cout << "Tienes " << Dollars << " dolares." << endl;
	cin.ignore();
	cin.get();
	return 0;
}