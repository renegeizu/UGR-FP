/*
 * Se quiere leer un carácter letra_original desde teclado, y comprobar con una
 * estructura condicional si es una letra mayúscula. En dicho caso, hay que calcular
 * la minúscula correspondiente almacenando el resultado en una variable llamada
 * letra_convertida. En el caso de que no sea una mayúscula, le asignaremos a
 * letra_convertida el valor que tenga letra_original. Finalmente, imprimiremos
 * en pantalla el valor de letra_convertida. No pueden usarse las funciones
 * tolower ni toupper de la biblioteca cctype.
 */

#include <iostream>

using namespace std;

char minusculasMayusculas(char letra){
	// Pasar Minuscula a Mayuscula
	letra -= 'a' - 'A'; // Metodo 1
	// letra += 'A' - 'a'; // Metodo 2
	// letra = 'A' + (letra - 'a'); // Metodo 3
	return letra;
}

char mayusculasMinusculas(char letra){
	// Pasar Mayuscula a Minuscula
	letra -= 'A' - 'a'; // Metodo 1
	// letra += 'a' - 'A'; // Metodo 2
	// letra = 'a' + (letra - 'A'); // Metodo 2
	return letra;
}

int main() {
	char letra_original;
	cout << "Introduce la Letra Mayuscula o Minuscula: ";
   cin >> letra_original;
   if(letra_original >= 'a' && letra_original <= 'z'){
      cout << "\nTu letra es minuscula, en mayuscula es " << minusculasMayusculas(letra_original) << endl;
	}else if(letra_original >= 'A' && letra_original <= 'Z'){
		cout << "\nTu letra es mayuscula, en minuscula es " << mayusculasMinusculas(letra_original) << endl;	
	}
	system("pause");
   return 0;
}
