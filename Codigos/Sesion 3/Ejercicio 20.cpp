/*
 * Diseñar un programa que lea un carácter (supondremos que el usuario introduce una
 * mayúscula), lo pase a minúscula y lo imprima en pantalla. Hacedlo sin usar las funciones
 * toupper ni tolower de la biblioteca cctype. Para ello, debe considerarse
 * la equivalencia en C++ entre los tipos enteros y caracteres.
 */

#include <iostream>

using namespace std;

void minusculasMayusculas(char letra){
	// Pasar Minuscula a Mayuscula
	letra -= 'a' - 'A'; // Metodo 1
	// letra += 'A' - 'a'; // Metodo 2
	// letra = 'A' + (letra - 'a'); // Metodo 3
	cout << "Tu letra en mayusculas es: " << letra;
}

void mayusculasMinusculas(char letra){
	// Pasar Mayuscula a Minuscula
	letra -= 'A' - 'a'; // Metodo 1
	// letra += 'a' - 'A'; // Metodo 2
	// letra = 'a' + (letra - 'A'); // Metodo 2
	cout << "Tu letra en minuscula es: " << letra;
}

int main() {
   bool flag = false;
   int valor;
   do{
      if(flag){
         char letra;
         cout << "Introduce la Letra Mayuscula o Minuscula: ";
   		cin >> letra;
   		// Comparar Valores ASCII de Mayusculas y Minusculas
			// Tambien se puede comparar usando directamente los valores ASCII
			// (A)=65 || (Z)=90 || (a)=97 || (z)=122
   		if(letra >= 'a' && letra <= 'z'){
      		minusculasMayusculas(letra);
			}else if(letra >= 'A' && letra <= 'Z'){
      		mayusculasMinusculas(letra);
	}
      }
      cout << "\n------------------" << endl;
      cout << "\nPulsa 0 para salir o 1 para insertar datos: ";
      cin >> valor;
      cout << "\n------------------" << endl;
      if(valor==0)
         flag = false;
      else
			flag = true;
   }while(flag);
   return 0;
}
