/*
 *
 * En el ejercicio 14 de la Relación de Problemas I se pedía escribir un programa que leyese
 * un valor entero de tres dígitos e imprimiese los dígitos separados por un espacio
 * en blanco. Haced lo mismo pero para un número entero arbitrario.
 *
 */

# include <iostream>
# include <cmath>

using namespace std;

int main (){
	
	const long long var_control = 10;
	long long numero_introducido = 0, aux_calculo = 10, var_calculo = 1, contador = 0;

	do{
		cout << "Introduce un Numero Entero Positivo: ";
		cin >> numero_introducido;
	}while(numero_introducido < 0);
	
	for(var_calculo = 1; var_calculo <= numero_introducido; var_calculo *= var_control){
		aux_calculo = (numero_introducido / var_calculo);
		contador++;
	}
	
	cout << endl << aux_calculo;
	
	for(contador=contador-2; contador>=0; contador--){
		var_calculo = pow(var_control, contador);
		//aux_calculo = abs((aux_calculo*var_control) - (numero_introducido/var_calculo));
		aux_calculo =(numero_introducido/var_calculo)-(aux_calculo*var_control);
		cout << " " << aux_calculo;
		aux_calculo = numero_introducido/var_calculo;
	}
	
	cout << endl;
	
	system ("pause");
	return 0;
}
