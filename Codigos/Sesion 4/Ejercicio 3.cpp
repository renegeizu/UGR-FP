/*
 * Cread un programa que lea el valor de la edad (dato de tipo entero) y salario (dato de
 * tipo real) de una persona. Subid el salario un 5% si éste es menor de 300 euros y la
 * persona es mayor de 65 años.
 * ¿Es mejor incluir otra variable nueva salario_final o es mejor modificar la variable
 * que teníamos?
 * Imprimid el resultado por pantalla. En caso contrario imprimid el mensaje
 * "No es aplicable la subida". En ambos casos imprimid el salario resultante.
 */

#include <iostream>

using namespace std;

int main() {
	int edad;
	float salario;
	
	cout << "Introduce la Edad: " << endl;
	cin >> edad;
	cout << "Introduce el Salario: " << endl;
	cin >> salario;
	
	if(edad>65 && salario<300){
		salario = salario + (salario*5/100);
		cout << "Es Aplicable la Subida" << endl;
	}else{
		cout << "No es Aplicable la Subida" << endl;
	}
	
	cout << "El Salario Actual es " << salario << endl;
	
	system("pause");
   return 0;
}
