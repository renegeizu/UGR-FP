#include <iostream>
#include <math.h>

using namespace std;

int main() {
   bool flag = false;
   int valor;
   const float pi = 3.1415927;
   do{
      if(flag){
         float x;
			cout << "\nIntroduce el Valor de Abscisa X: " << endl;
			cin >> x;
			float media;
			cout << "\nIntroduce el Valor del Parametro Media: " << endl;
			cin >> media;
			float desviacion;
			cout << "\nIntroduce el Valor del Parametro Desviacion Tipica: " << endl;
			cin >> desviacion;
			float gaussiana = ( 1 / ( desviacion * sqrt(2*pi) ) ) * exp( -0.5 * pow( (x-media)/desviacion, 2.0 ) );
			cout << "\nValor de la Funcion Gaussiana: " << gaussiana << "\n" << endl;
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
