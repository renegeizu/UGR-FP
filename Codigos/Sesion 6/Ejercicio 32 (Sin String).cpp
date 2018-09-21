/*
 *
 * Un número entero de n dígitos se dice que es narcisista si se puede obtener como
 * la suma de las potencias n-ésimas de cada uno de sus dígitos.
 *
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  	
  	const long long var_control = 10;
	long long numero_introducido = 0, aux_calculo = 10, var_calculo = 1, contador_cifras = 0, total = 0, contador = 0;

	do{
		cout << "Introduce un Numero Entero Positivo: ";
		cin >> numero_introducido;
	}while(numero_introducido < 0);
	
	for(var_calculo = 1; var_calculo <= numero_introducido; var_calculo *= var_control){
		aux_calculo = (numero_introducido / var_calculo);
		contador++;
	}
	
	contador_cifras = contador;
	
	total += pow(aux_calculo, contador_cifras);
	
	for(contador=contador-2; contador>=0; contador--){
		var_calculo = pow(var_control, contador);
		aux_calculo = abs((aux_calculo*var_control) - (numero_introducido/var_calculo));
		total += pow(aux_calculo, contador_cifras);
		aux_calculo = numero_introducido/var_calculo;
	}
	
	if(total == numero_introducido)
		cout << "\nEl Numero " << numero_introducido << " es Narcisista" << endl;
	else
		cout << "\nEl Numero " << numero_introducido << " no es Narcisista" << endl;

  	system("pause");
   return 0;
}
