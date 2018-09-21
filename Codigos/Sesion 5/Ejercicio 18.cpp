#include <iostream>
#include <sstream>

// Uso patch porque la funcion to_string sobre un entero no es aceptado
// Por el compilador
namespace patch{
		template < typename T > std::string to_string( const T& n ){
      	std::ostringstream stm ;
      	stm << n ;
      	return stm.str() ;
		}
}

using namespace std;

string divisores(int tipo, int numero){
	int contador, aux = tipo;
	string divisores = "";
	
	while (numero >= aux){
		if(numero%aux == 0){
			divisores=divisores+patch::to_string(aux)+", ";
			contador++;
		}
		aux++;
	}
	
	if(contador == 0)
		return "Tu numero no tiene divisores";
	else
		return divisores.substr(0, divisores.length()-1)+" positivos y negativos son sus divisores.";
}

int main() {
	
	int tope;
	string mensaje = "";
	
	cout << "Introduce tu numero entero: ";
	cin >> tope;
	
	if(tope == 0)
		mensaje = "Tu numero es 0 y no tiene divisores";
	else if (tope > 1)
		mensaje = divisores(1, tope);
	else
		mensaje = divisores(-1, tope);
	
	cout << "\n" << mensaje << endl;
	
	system("pause");
   return 0;
}
