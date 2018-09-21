/*
 * Supongamos el siguiente código:
 *
 * 	int entero;
 * 	char caracter;
 * 	caracter = '7';
 * 	entero = caracter;
 *
 * La variable entero almacenará el valor 55 (el orden en la tabla ASCII del carácter
 * '7'). Queremos construir una expresión que devuelva el entero 7, para asignarlo a la
 * variable entero. Formalmente:
 *
 * Supongamos una variable char de tipo carácter que contiene un valor entre '0' y '9'.
 * Construid un programa que obtenga el correspondiente valor entero, se lo asigne a
 * una variable de tipo int llamada entero y lo imprima en pantalla. Por ejemplo, si la
 * variable car contiene '7' queremos asignarle a entero el valor numérico 7.
 */

#include <iostream>

using namespace std;

int main() {
   bool flag = false;
   int valor;
   do{
      if(flag){
      	int entero;
			char caracter;
			cout << "Dame un numero entre 0 y 9: ";
			cin >> caracter;
			entero = caracter;
			cout << "Su valor en ASCII es " << entero << endl;
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
