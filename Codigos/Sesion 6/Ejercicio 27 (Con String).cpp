/*
 *
 * En el ejercicio 14 de la Relación de Problemas I se pedía escribir un programa que leyese
 * un valor entero de tres dígitos e imprimiese los dígitos separados por un espacio
 * en blanco. Haced lo mismo pero para un número entero arbitrario.
 *
 */

#include <iostream>
#include <sstream>

using namespace std;

int main() {
  	string entero;
  	long long longitud, entero_inicial;
  	
  	do{
	  	cout << "\nIntroduce un Numero Entero: ";
		cin >> entero_inicial;
	}while(entero_inicial<0);
	
	std::ostringstream ss;
   ss << entero_inicial;
   entero = ss.str();
	
	longitud = entero.length();
	cout << endl;
	
	for(int i=0; i<longitud; i++){
		cout << entero.substr(i, 1) << " ";
	}
	
   return 0;
}
