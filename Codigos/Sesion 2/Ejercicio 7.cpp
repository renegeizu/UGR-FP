/*
 *
 * Escriba un programa que calcule el consumo de gasolina. Pedirá la distancia recorrida (en kms), los litros de gasolina 
 * consumidos y los litros que quedan en el depósito. El programa debe informar el consumo en km=litro, los litros=100 km y 
 * cuantos kilómetros de autonomía le restan con ese nivel de consumo. Utilice nombres de variables significativos.
 *
 */

#include <iostream>

using namespace std;

int main() {
   bool flag = false;
   int valor;
   do{
      if(flag){
         float distancia;
         cout << "\nIntroduce la Distancia Recorrida en Kilometros: ";
      	cin >> distancia;
      	float gasolinaConsumida;
         cout << "\nIntroduce la Gasolina Consumida: ";
      	cin >> gasolinaConsumida;
      	float litrosRestantes;
         cout << "\nIntroduce los Litros Restantes: ";
      	cin >> litrosRestantes;
      	float KMporL = distancia/gasolinaConsumida;
      	float LporKM = gasolinaConsumida/distancia;
      	cout << "\nEl Vehiculo recorre " << KMporL << " Kilometros por Litro" << endl;
      	cout << "El Vehiculo consume " << LporKM * 100 << " Litros cada 100 Kilometros" << endl;
      	cout << "El Vehiculo tiene " << LporKM * litrosRestantes << " Kilometros de Autonomia" << endl;
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
