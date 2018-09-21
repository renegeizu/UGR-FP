/*
 *
 * Se pide crear un programa que lea desde teclado r, el primer elemento a1 y el tope k
 * y calcule la suma de los primeros k valores de la serie 
 *
 */

#include <iostream>
#include <cmath>

using namespace std;

long long sinMath(long long dato_r, long long elemento, long long tope){
	long long aux = 0, suma = 0;
	
	aux = suma = elemento;
	
	for (int i = 1; i < tope; i++){
		suma += aux = aux*dato_r;
	}
	
	return suma;
}

long long conMath(long long dato_r, long long elemento, long long tope){
	long long suma = 0;
	
	for (int i = 0; i < tope; i++){
		suma += elemento*pow(dato_r, i);
	}
	
	return suma;
}

int main() {
	
	long long r, a, k, sumatoria;
	
	do{
		cout << endl << "Introduce el elemento r: ";
		cin >> r;
	}while(r < 0);
	
	do{
		cout << endl << "Introduce el primer elemento (a1): ";
		cin >> a;
	}while(a < 0);
	
	do{
		cout << endl << "Introduce el tope (k): ";
		cin >> k;
	}while(k < 0);
	
	sumatoria = conMath(r, a, k);
	
	cout << endl << "El resultado es " << sumatoria << endl;
	
	sumatoria = sinMath(r, a, k);
	
	cout << endl << "El resultado es " << sumatoria << endl;
	
  	system("pause");
   return 0;
}
