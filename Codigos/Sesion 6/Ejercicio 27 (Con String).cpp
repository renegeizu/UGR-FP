/*
 *
 * En el ejercicio 14 de la Relaci�n de Problemas I se ped�a escribir un programa que leyese
 * un valor entero de tres d�gitos e imprimiese los d�gitos separados por un espacio
 * en blanco. Haced lo mismo pero para un n�mero entero arbitrario.
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
