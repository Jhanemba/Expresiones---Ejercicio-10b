/*
Ejercicio 10: Escriba un programa que calcule las soluciones de
una ecuación de segundo grado de la forma ax^2 + bx + c = 0, 
teniendo en cuenta que: (-b+sqrt(pow(b,2)-4*a*c))/(2*a)
y (-b-sqrt(pow(b,2)-4*a*c))/(2*a)
*/
#include <iostream>
using namespace std;

int main()
{
	double a, b, c;
	double resultado1 = 0;
	double resultado2 = 0;

	cout << "Introduzca a: \n"; cin >> a;
	cout << "Introduzca b: \n"; cin >> b;
	cout << "Introduzca c: \n"; cin >> c;
	resultado1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
	resultado2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

	cout << "El resultado de x1 es: " << resultado1 << endl;
	cout << "El resultado de x2 es: " << resultado2;

	return 0;
}