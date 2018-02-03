// Drill y Ejercicios Capitulo 4
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

//Drill 1 y 2 (Ejemplo 142)
int functionwhile()
{

	double num1, num2; // Drill 4
	double metro = 100, pulgada = 2.45, pie = 12;
	double convercion1 = 0, convercion2 = 0, menor1 = 0, mayor1 = 0, convercionMenor1 = 0, convercionMayor1 = 0, suma1 = 0, sumaMenor1 = 0, sumaMayor1 = 0;
	string unidad1 = "", unidad2 = "", unidadMenor1 = "", unidadMayor1 = "";
	double menor2 = 0, mayor2 = 0, convercionMenor2 = 0, convercionMayor2 = 0, suma2 = 0, sumaMenor2 = 0, sumaMayor2 = 0;
	string unidadMenor2 = "", unidadMayor2 = "";
	vector<double> arreglo;
	cout << "Ingresa el los valores: (Ejemplo: 5cm 4ft) " << endl;
	cout << "> ";
	while (cin >> num1 >> unidad1 >> num2 >> unidad2)
	{
		if (num1 < num2)
		{
			cout << "El numero menor es: " << num1 << endl;
			cout << "El numero mayor es: " << num2 << endl;
			
		}
		else if (num2 < num1)
			{
				cout << "El numero menor es: " << num2 << endl;
				cout << "El numero mayor es: " << num1 << endl;
				
			}
		// Converciones unidad 1
		if (unidad1 == "cm" )
		{
			convercion1 = num1;
			
		}
		else if (unidad1 == "m") // Converción a cm
		{
			convercion1 = (metro * num1);

		}
		else if (unidad1 == "in") // Converción a cm
		{
			convercion1 = (pulgada * num1);
		}
		else if (unidad1 == "ft")
		{
			convercion1 = (pie * pulgada * num1);
		}
		else if (unidad1 != "cm" || unidad1 != "m" || unidad1 != "in" || unidad1 != "ft")
		{
			cout << "Esta unidad no esta permitida, intente con otra." << endl;
		}

		// Conversiones unidad 2
		if (unidad2 == "cm")
		{
			convercion2 = num2;

		}
		else if (unidad2 == "m") // Converción a cm
		{
			convercion2 = (metro * num2);

		}
		else if (unidad2 == "in") // Converción a cm
		{
			convercion2 = (pulgada * num2);
		}
		else if (unidad2 == "ft")
		{
			convercion2 = (pie * pulgada * num2);
		}
		else if (unidad2 != "cm" || unidad2 != "m" || unidad2 != "in" || unidad2 != "ft")
		{
			cout << "Esta unidad no esta permitida, intente con otra." << endl;
		}

		if (num1 == num2) // Drill 3
		{
			cout << "Los numeros son iguales: " << endl;
		}
		if ((num1 - num2) < 0.01 && (num1 - num2) > -1) // Drill 5
		{
			cout << "Las numeros son casi iguales." << endl;
		}
		// CONVERCION 1
		if (mayor1 == 0 && menor1 == 0)
		{
			// Se manda a llamar al vector
			
			menor1 = num1;
			convercionMenor1 = convercion1;
			unidadMenor1 = unidad1;
			mayor1 = num1;
			convercionMayor1 = convercion1;
			unidadMayor1 = unidad1;

			suma1 = convercion1 / metro;
			sumaMenor1 = convercion1 / metro;
			sumaMayor1 = convercion1 / metro;

			arreglo.push_back(convercion1 / metro);

			// cout << menor1 << unidadMenor1 << " es el menor hasta ahora" << endl;
			// cout << mayor1 << unidadMayor1 << " es el mayor actualmente" << endl;
		}
		else if (convercion1 > convercionMayor1)
		{
			mayor1 = num1;
			convercionMayor1 = convercion1;
			unidadMayor1 = unidad1;

			suma1 += convercion1 / metro;
			sumaMayor1 += convercion1 / metro;

			arreglo.push_back(convercion1 / mayor1);

			// cout << menor1 << unidadMenor1 << " sigue siendo el menor" << endl;
			// cout << mayor1 << unidadMayor1 << " ahora es el mayor" << endl;
		}
		else
		{
			suma1 += convercion1 / metro;

			arreglo.push_back(convercion1 / metro);

			// cout << menor1 << unidadMenor1 << " sigue siendo el menor" << endl;
			// cout << mayor1 << unidadMayor1 << " sigue siendo el mayor" << endl;
		}
			//cout << "Ingrese un valor permitido con su unidad: " << endl;
			
			// CONVERCION 2
			if (mayor2 == 0 && menor2 == 0)
			{
				// Se manda a llamar al vector
				
				menor2 = num2;
				convercionMenor2 = convercion2;
				unidadMenor2 = unidad2;
				mayor2 = num2;
				convercionMayor2 = convercion2;
				unidadMayor2 = unidad2;

				suma2 = convercion2 / metro;
				sumaMenor2 = convercion2 / metro;
				sumaMayor2 = convercion2 / metro;

				arreglo.push_back(convercion2 / metro);

				// cout << menor2 << unidadMenor2 << " es el mayor hasta ahora." << endl;
				// cout << mayor2 << unidadMayor2 << " es el mayor hasta ahora." << endl;

				
			}
			else if (convercion2 > convercionMayor2)
			{
				mayor2 = num2;
				convercionMayor2 = convercion2;
				unidadMayor2 = unidad2;

				suma2 += convercion2 / metro;
				sumaMayor2 += convercion2 / metro;

				arreglo.push_back(convercion2 / mayor1);

				// cout << menor2 << unidadMenor2 << " sigue siendo el menor" << endl;
				// cout << mayor2 << unidadMayor2 << " ahora es el mayor" << endl;
			}
			else
			{
				suma2 += convercion2 / metro;

				arreglo.push_back(convercion2 / metro);

				// cout << mayor2 << unidadMayor2 << " sigue siendo el mayor" << endl;
				// cout << menor2 << unidadMenor2 << " sigue siendo el menor" << endl;
			}
			//cout << "Ingrese un valor permitido con su unidad: " << endl;
			cout << "---------------------" << endl;
			cout << "Los valores registrados convertidos en metros: " << "[" << sumaMenor2<< "m.]"<< "[" << sumaMayor1 << "m.]" << endl;
			cout << "La suma de los resultados es: " << suma2 + suma2 << "m." << endl;
			cout << "El arreglo de todos los resultados ordenados en metros son: " << endl;

			sort(arreglo.begin(), arreglo.end());

			for (int i = 0; i < arreglo.size(); ++i)
			{
				cout << "[ " << arreglo[i] << " ]";
			}
			cout << "\0" << endl;
		cout << "\0" << endl;

		cout << "Ingresa los valores: (Ejemplo: 5cm 4ft) " << endl;
		cout << "> ";

	}

	return 0;
}




int main()
{
	int opcion;
	cout << "Calculadora Drill 4" << endl;
	cout << "Escriba (1) para comenzar" << endl;
	cout << "Elige el numero de la funcion: ";
	cin >> opcion;
	if (opcion == 1)
	{
		cout << functionwhile();
	}
	else if (opcion == 0)
	{
		exit(0);
	}
	else
	{
		cout << "Esa opcion no existe" << endl;
	}

	cin.ignore();
	cin.get();
	return 0;
}