/*
 * Queremos modificar el ejercicio 7 para leer un carácter letra_original desde teclado
 * y hacer lo siguiente:
 *  Si es una letra mayúscula, almacenaremos en la variable letra_convertida
 * la correspondiente letra minúscula.
 *  Si es una letra minúscula, almacenaremos en la variable letra_convertida
 * la correspondiente letra mayúscula.
 *  Si es un carácter no alfabético, almacenaremos el mismo carácter en la variable
 * letra_convertida
 * El programa debe imprimir en pantalla el valor de letra_convertida e indicar si la
 * letra introducida era una minúscula, mayúscula o no era una carácter alfabético. No
 * pueden usarse las funciones tolower ni toupper de la biblioteca cctype.
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
	char letra_original, letra_convertida;
	string tipo = "";
	
	cout << "Introduce la Letra Mayuscula o Minuscula: ";
   cin >> letra_original;
   
	if(letra_original >= 'a' && letra_original <= 'z'){
      letra_convertida = minusculasMayusculas(letra_original);
      tipo = "minuscula y en mayuscula es ";
	}else if(letra_original >= 'A' && letra_original <= 'Z'){
      letra_convertida = mayusculasMinusculas(letra_original);
      tipo = "mayuscula y en minuscula es ";
	}else{
      letra_convertida = letra_original;
		tipo = "no alfabetico y el valor original es ";
	
	}
	
	cout << "El caracter introducido es " << tipo << letra_convertida << endl;
	
	system("pause");
   return 0;
}
