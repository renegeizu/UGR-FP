#include <iostream>
#include <sstream>

namespace patch{
		template < typename T > std::string to_string( const T& n ){
      	std::ostringstream stm ;
      	stm << n ;
      	return stm.str() ;
		}
}

using namespace std;

int main() {

	int tope, auxPositivo = 1, auxNegativo = -1, contador = 0;
	string divisores = "";
		
	cout << "Introduce tu numero entero: ";
	cin >> tope;

	if(tope == 0){
		cout << "\nTu numero es 0 y no tiene divisores" << endl;
	}else if(tope > 0){

		while (tope >= auxPositivo){
			if(tope%auxPositivo == 0){
				prueba=prueba+patch::to_string(auxPositivo)+", ";
				contador++;
			}
			auxPositivo++;
		}
		
		if(contador == 0)
			cout << "\n" << tope << " no tiene divisores" << endl;
			
	}else{
		
		while (tope <= auxNegativo){
			if(tope%auxNegativo == 0){
				cout << "\n" << auxNegativo << " es divisor de " << tope << endl;
				contador++;
			}
			auxNegativo--;
		}
		
		if(contador == 0)
			cout << "\n" << tope << " no tiene divisores" << endl;
			
	}
}