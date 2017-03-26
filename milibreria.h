#include <iostream>
using namespace std;

void obtiene_rendimiento(int balance){
	if(balance < 1){
		cout << "Balance no valido." << endl;
	} else if (balance < 1000){
		cout << "Su rendimiento es de " << balance * .01 << "." << endl;
	} else if(balance <= 10000){
		cout << "Su rendimiento es de " << balance * .03 << "." << endl;
	} else {
		cout << "Su rendimiento es de " << balance * .05 << "." << endl;
	}
}
