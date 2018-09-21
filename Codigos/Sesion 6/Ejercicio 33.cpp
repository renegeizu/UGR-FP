/*
 *
 * Calcular mediante un programa en C++ la función potencia xn, y la función factorial
 * n! con n un valor entero y x un valor real. No pueden usarse las funciones de la
 * biblioteca cmath.
 *
 */

#include <iostream>

using namespace std;

int LeerEnteroPositivo(){
	int entero;
	
	do{
		cout << "\nIntroduce un Numero Positivo: ";
		cin >> entero;
	}while(entero < 0);
	
	return entero;
}

float LeerReal(){
	float real;
	
	cout << "\n\nIntroduce un Numero Real: ";
	cin >> real;
	
	return real;
}

int main() {
	
	long double numero_entero, total_entero = 1;
	long double numero_real, total_real = 1;
	string texto = "";
	
	numero_entero = LeerEnteroPositivo();
	
	cout << endl;
	
	if(numero_entero == 0){
		cout << "0! = 1" << endl;
	}else{cout << numero_entero << "! = ";
		for(int i = 1; i <= numero_entero; i++){
			cout << i;
			total_entero *= i;
			if(numero_entero != i)
				cout << "x";
		}
		cout << " = " << total_entero << endl;
	}
	
	numero_real = LeerReal();
	
	cout << "\n" << numero_real << "^" << numero_entero << " = ";
	
	for(int i = 1; i <= numero_entero; i++){
		total_real *= numero_real;
	}
	
	cout << total_real << endl;
	
  	system("pause");
   return 0;
}
