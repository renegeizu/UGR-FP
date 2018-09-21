/*
 *
 * Un número entero de n dígitos se dice que es narcisista si se puede obtener como
 * la suma de las potencias n-ésimas de cada uno de sus dígitos.
 *
 */

#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main() {
	
  	string entero;
  	long long longitud, entero_inicial, total=0;
  	
  	do{
	  	cout << "\nIntroduce un Numero Entero: ";
		cin >> entero_inicial;
	}while(entero_inicial<0);
	
	std::ostringstream ss;
   ss << entero_inicial;
   entero = ss.str();
	
	longitud = entero.length();
	
	for(int i=0; i<longitud; i++){
		total += pow(atoi(entero.substr(i, 1).c_str()), longitud);
	}
  	
	if(total == entero_inicial)
		cout << "\nEl Numero " << entero_inicial << " es Narcisista" << endl;
	else
		cout << "\nEl Numero " << entero_inicial << " no es Narcisista" << endl;

  	system("pause");
   return 0;
}
