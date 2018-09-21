/*
 *
 * Realizar un programa que nos pida una longitud cualquiera dada en yardas. El programa deberá calcular el equivalente 
 * de dicha longitud en pulgadas, pies, millas y millas marinas, y mostrarnos los resultados en pantalla. Para el cálculo, 
 * utilice la siguiente tabla de conversión del sistema métrico
 *
 * 1 pulgada= 25,4 milímetros
 * 1 pie = 30,48 centímetros
 * 1 yarda = 0,9144 metros
 * 1 milla = 1609,344 metros
 * 1 milla marina = 1852 metros
 *
 */

#include <iostream>

using namespace std;

int main() {
   bool flag = false;
   int valor;
   do{
      if(flag){
         float yardas_iniciales, yardas_milimetros, yardas_centimetros, yardas_metros;
         const float pulgada = 25.4; // Milimetros
			const float pie = 30.48; // Centimetros
			const float yardas = 0.9144, milla = 1609.344, marina = 1852; // Metros
			cout << "\nIntroduce la Longitud en Yardas: ";
			cin >> yardas_iniciales;
			yardas_milimetros = (yardas_iniciales * yardas) * 1000; // Yardas en Milimetros
			yardas_centimetros = (yardas_iniciales * yardas) * 100; // Yardas en Centimetros
			yardas_metros = yardas_iniciales * yardas; // Yardas en Metros
			cout << "\n" << yardas_iniciales << " Yardas equivalen a " << yardas_milimetros/pulgada << " Pulgadas" << endl;
			cout << yardas_iniciales << " Yardas equivalen a " << yardas_centimetros/pie << " Pies" << endl;
			cout << yardas_iniciales << " Yardas equivalen a " << yardas_metros/milla << " Millas" << endl;
			cout << yardas_iniciales << " Yardas equivalen a " << yardas_metros/marina << " Millas Marinas" << endl;
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
