/*
 * Queremos modificar el ejercicio 7 para leer un car�cter letra_original desde teclado
 * y hacer lo siguiente:
 *  Si es una letra may�scula, almacenaremos en la variable letra_convertida
 * la correspondiente letra min�scula.
 *  Si es una letra min�scula, almacenaremos en la variable letra_convertida
 * la correspondiente letra may�scula.
 *  Si es un car�cter no alfab�tico, almacenaremos el mismo car�cter en la variable
 * letra_convertida
 * El programa debe imprimir en pantalla el valor de letra_convertida e indicar si la
 * letra introducida era una min�scula, may�scula o no era una car�cter alfab�tico. No
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
