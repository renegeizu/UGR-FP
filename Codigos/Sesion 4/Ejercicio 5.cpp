/*
 * Escribid un programa en C++ para que lea tres enteros desde teclado y nos diga si
 * están ordenados (da igual si es de forma ascendente o descendente) o no lo están.
 */

#include <iostream>

using namespace std;

int main() {
	int entero1, entero2, entero3;
	
	cout << "Introduce el Primer Valor: " << endl;
	cin >> entero1;
	cout << "Introduce el Segundo Valor: " << endl;
	cin >> entero2;
	cout << "Introduce el Tercer Valor: " << endl;
	cin >> entero3;
	
	if(entero1 < entero2 && entero1 < entero3 && entero2 < entero3){
		cout << "Estan Ordenados de Menor a Mayor" << endl;
	}else if(entero1 > entero2 && entero1 > entero3 && entero2 > entero3){
		cout << "Estan Ordenados de Mayor a Menor" << endl;
	}else{
		cout << "No Estan Ordenados" << endl;
	}
	
	system("pause");
   return 0;
}
