#include <iostream>
#include <math.h>

using namespace std;

int main() {
   bool flag = false;
   int valor;
   const float pi = 3.1415927;
   do{
      if(flag){
         float radio;
			cout << "\nIntroduce el Radio de la Circunferencia: " << endl;
			cin >> radio;
			float longitud = 2 * pi * radio;
			float area = pi * pow(radio,2);
			cout << "\nLa Longitud de la Circunferencia es " << longitud << endl;
			cout << "\nEl Area del Circulo es " << area << "\n" << endl;
      }
      cout << "\n------------------" << endl;
      cout << "\nPulsa 0 para salir o 1 para insertar datos: " << endl;
      cin >> valor;
      cout << "\n------------------" << endl;
      if(valor==0)
         flag = false;
      else
			flag = true;
   }while(flag);
   return 0;
}
