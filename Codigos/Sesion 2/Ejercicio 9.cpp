/*
 *
 * Queremos realizar un programa para intercambiar los contenidos de dos variables enteras. El programa leerá desde teclado 
 * dos variables edad_Pedro y edad_Juan e intercambiará sus valores. A continuación, mostrará en pantalla las variables ya
 * modificadas.
 *
 */

#include <iostream>

using namespace std;

int main() {
   bool flag = false;
   int valor;
   do{
      if(flag){
         int edad_Pedro;
         cout << "\nIntroduce la Edad de Pedro: ";
      	cin >> edad_Pedro;
      	int edad_Juan;
         cout << "\nIntroduce la Edad de Juan: ";
      	cin >> edad_Juan;
      	int auxiliar = edad_Pedro;
      	edad_Pedro = edad_Juan;
      	edad_Juan = auxiliar;
      	cout << "\nLa Edad de Pedro es: " << edad_Pedro << endl;
      	cout << "\nLa Edad de Juan es: " << edad_Juan << endl;
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
