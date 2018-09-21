/*
 *
 * Calcular el número de segundos que hay entre dos instantes del mismo día. Cada instante se caracteriza por la 
 * hora (entre 0 y 23), minuto (entre 0 y 59) y segundo (entre 0 y 59).
 * El programa leerá la hora, minuto y segundo del instante inicial, y la hora, minuto y segundo del instante final 
 * (supondremos que los valores introducidos son correctos) y mostrará el número de segundos entre ambos instantes.
 *
 */

#include <iostream>

using namespace std;

int main() {
   bool flag = false;
   int valor;
   do{
      if(flag){
        int horaInicial;
        cout << "\nIntroduce la Hora Inicial: ";
      	cin >> horaInicial;
      	int minutoInicial;
        cout << "\nIntroduce el Minuto Inicial: ";
      	cin >> minutoInicial;
      	int segundoInicial;
        cout << "\nIntroduce el Segundo Inicial: ";
      	cin >> segundoInicial;
      	int horaFinal;
        cout << "\nIntroduce la Hora Final: ";
      	cin >> horaFinal;
      	int minutoFinal;
        cout << "\nIntroduce el Minuto Final: ";
      	cin >> minutoFinal;
      	int segundoFinal;
        cout << "\nIntroduce el Segundo Final: ";
      	cin >> segundoFinal;
      	// Paso la hora incial y final ha segundo para hacer la comparacion.
      	int totalInicial = (horaInicial * 3600) + (minutoInicial * 60) + segundoInicial;
      	int totalFinal = (horaFinal * 3600) + (minutoFinal * 60) + segundoFinal;
      	int total = totalInicial - totalFinal;
      	if(total < 0)
      		total = total * (-1);
      	cout << "\nHay " << total << " Segundos entre Ambos Instantes" << endl;
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
