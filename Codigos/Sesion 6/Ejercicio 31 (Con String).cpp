/*
 *
 * Un número entero n se dice que es desgarrable (torn) si al dividirlo en dos partes
 * cualesquiera izda y dcha, el cuadrado de la suma de ambas partes es igual a n.
 *
 */

#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int desgarrable(int num_a, int num_b){
	return pow((num_a + num_b), 2);
}

int main() {
	
	int numero_introducido, posicion_intermedia, num_izq, num_der;
	string aux = "", texto = "";
	
	do{
		cout << "Introduce un Numero Entero Positivo: ";
		cin >> numero_introducido;
	}while(numero_introducido < 0);

	std::ostringstream ss;
   ss << numero_introducido;
   aux = ss.str();
   
   posicion_intermedia = aux.length()/2;
   num_izq = atoi(aux.substr(0, posicion_intermedia).c_str());
   num_der = atoi(aux.substr(posicion_intermedia, aux.length()).c_str());
   
   if(numero_introducido == desgarrable(num_izq, num_der)){
		texto = "El numero introducido es desgarrable";
	}else{
		texto = "El texto introducido no es desgarrable";
	}
	
	cout << endl << texto << endl;
	
  	system("pause");
   return 0;
}
