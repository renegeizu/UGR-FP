/*
 *
 * Escribir un programa que lea un valor entero. Supondremos que el usuario introduce siempre un entero de tres dígitos, 
 * como por ejemplo 351. Escribid en pantalla los dígitos separados por tres espacios en blanco.
 *
 */

#include <iostream>

using namespace std;

// Metodo 2. No usado en el codigo. Forma alternativa de hacer el ejercicio.
void calculos(){
	int entero;
	cout << "\nIntroduce un Numero Entero de 3 Digitos: ";
	cin >> entero;
	int cifra1, cifra2, cifra3;
	cifra1 = entero/100;
	if(cifra1<0) cifra1 = cifra1 * (-1);
	cifra2 = (cifra1*10)-(entero/10);
	if(cifra2<0) cifra2 = cifra2 * (-1);
	cifra3 = (entero-cifra1*100)-(cifra2*10);
	if(cifra3<0) cifra3 = cifra3 * (-1);
	cout << "\n" << cifra1 << "   " << cifra2 << "   " << cifra3 << endl;
}

int main() {
   bool flag = false;
   int valor;
   do{
      if(flag){
      	// Para usar la funcion calculos() se sustituyen las lineas interiores de este if por calculos();
        string entero;
        cout << "\nIntroduce un Numero Entero de 3 Digitos: ";
      	cin >> entero;
      	cout << "\n" << entero.substr(0,1) << "   " << entero.substr(1,1) << "   " << entero.substr(2,1) << endl;
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
