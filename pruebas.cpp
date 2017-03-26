#include <iostream>
#include "milibreria.h"

using namespace std;

int main()
{
	cout << "Casos de prueba: Particion de equivalencia\n" << endl;
	cout << "Clases no validas, menores a 1.\n 0: ";
	obtiene_rendimiento(0);
	cout << " -15: ";
	obtiene_rendimiento(-15);
	cout << "Clases no validas, mayores a 0.\n 1: ";
	obtiene_rendimiento(1);
	cout << " 15: ";
	obtiene_rendimiento(15);
	cout << "\n\n";
	
	cout << "Casos de prueba: Analisis de valores limite\n" << endl;
	cout << "Balance menor a 1.\n 0: ";
	obtiene_rendimiento(0);
	cout << " 1: ";
	obtiene_rendimiento(1);
	cout << "\nBalance menor a 1000.\n 999: ";
	obtiene_rendimiento(999);
	cout << " 1000: ";
	obtiene_rendimiento(1000);
	cout << "\nBalance entre 1000 y 10000.\n 10000: ";
	obtiene_rendimiento(10000);
	cout << " 10001: ";
	obtiene_rendimiento(10001);
	cout << "\nBalance mayor a 10000.\n 11000: ";
	obtiene_rendimiento(11000);
	return 0;
}
