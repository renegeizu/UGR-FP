/*
 *
 * Calcular mediante un programa en C++ el combinatorio (n/m) con n, m valores
 * enteros. No pueden usarse las funciones de la biblioteca cmath.
 *
 */

#include <iostream>

using namespace std;

long double factorial(int numero){
	long double total = 1;
	for(int i = 1; i <= numero; i++){
		cout << i;
		total *= i;
		if(numero != i)
			cout << "x";
	}
	return total;
} 

int main() {
  	
  	long double n, m, aux, total;
  	long double total_n, total_m, total_aux;
  	
  	do{
	  cout << "Introduce un Numero Entero Positivo: ";
	  cin >> m;
	  cout << "Introduce un Numero Entero Positivo Mayor o Igual que el Anterior: ";
	  cin >> n;
	}while(n < m || m < 0 || n < 0);
	
	aux = n - m;
	
	cout << endl << "(" << n << "!)/[(" << m << "!)*(" << aux << "!)] = ";
	
	if(n == 0){
		cout << "(1)/(";
	}else{
		cout << "(";
	
		total_n = factorial(n);
		
		cout << ")/[(";
	}
	
	if(m == 0){
		cout << "1)*(";
	}else{
		total_m = factorial(m);
		
		cout << ")*(";
	}
	
	if(aux == 0){
		cout << "1)]";
	}else{
		total_aux = factorial(aux);
		
		total = total_n / (total_m * total_aux);
		
		cout << ")] = " << "(" << total_n << ")/(" << total_m << "*" << total_aux << ") = " << total << endl;
	}
  	
  	system("pause");
   return 0;
}
