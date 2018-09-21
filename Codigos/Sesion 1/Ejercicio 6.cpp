#include <iostream>

using namespace std;

int main() {
   bool flag = false;
   int valor;
   do{
      if(flag){
			float capital;
			float interes;
			cout << "\nIntroduce el Capital: " << endl;
			cin >> capital;
			cout << "\nIntroduce el Interes: " << endl;
			cin >> interes;
			float total = capital + (capital * (interes/100));
			cout << "\nEl total es " << total << "\n" << endl;
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
