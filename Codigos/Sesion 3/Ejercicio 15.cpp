/*
 * Leed desde teclado tres variables correspondientes a un número de horas, minutos y segundos, 
 * respectivamente. Diseñar un algoritmo que calcule las horas, minutos y segundos dentro de su 
 * rango correspondiente. Por ejemplo, dadas 10 horas, 119 minutos y 280 segundos, debería dar 
 * como resultado 12 horas, 3 minutos y 40 segundos. El programa no calculará meses, años, etc 
 * sino que se quedará en los días.
 */

#include <iostream>

using namespace std;

int main() {
   bool flag = false;
   int valor;
   do{
      if(flag){
      	int horas, minutos, segundos, dias = 0;
         cout << "Introduce Horas: ";
         cin >> horas;
         cout << "Introduce Minutos ";
         cin >> minutos;
         cout << "Introduce Segundos ";
         cin >> segundos;
         if(segundos > 59){
				minutos = minutos + segundos/60;
				segundos = segundos%60;
			}
			if(minutos > 59){
				horas = horas + minutos/60;
				minutos = minutos%60;
			}
			if(horas > 23){
				dias = dias + horas/24;
				horas = horas%24;
			}
			cout << "Dias: " << dias << ", horas: " << horas << ", minutos: " << minutos << ", segundos: " << segundos << endl;
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
