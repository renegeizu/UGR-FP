/*
 * Realizar un programa que declare las variables x, y y z, les asigne los valores 10, 20
 * y 30 e intercambien entre sí sus valores de forma que el valor de x pasa a y, el de y
 * pasa a z y el valor de z pasa a x (se pueden declarar variables auxiliares aunque se
 * pide que se use el menor número posible).
 */

#include <iostream>

using namespace std;

int main() {
   bool flag = false;
   int valor;
   do{
      if(flag){
         int x = 10, y = 20, z = 30, aux;
         cout << "X: " << x << ", Y: " << y << ", Z: " << z << endl;
         aux = z;
         z = y;
         y = x;
         x = aux;
         cout << "Nueva X: " << x << ", Nueva Y: " << y << ", Nueva Z: " << z << endl;
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
