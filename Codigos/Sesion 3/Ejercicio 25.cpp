/*
 *
 * Escribid una expresión lógica que sea verdadera si una variable de tipo carácter llamada letra es una letra minúscula 
 * y falso en otro caso.
 * Escribid una expresión lógica que sea verdadera si una variable de tipo entero llamada edad es menor de 18 o mayor de 65.
 * Escribid una expresión lógica que nos informe cuando un año es bisiesto. Los años bisiestos son aquellos que o bien son 
 * divisibles por 4 pero no por 100, o bien son divisibles por 400.
 * Escribid un programa que lea las variables letra, edad y anio, calcule el valor de las expresiones lógicas anteriores e 
 * imprima el resultado. Tened en cuenta que cuando se imprime por pantalla (con cout) una expresión lógica que es true, se 
 * imprime 1. Si es false, se imprime un 0. En el tema 2 veremos la razón.
 *
 */

#include <iostream>
#include <string.h>

using namespace std;

void minusculasMayusculas(char letra){
	// Pasar Minuscula a Mayuscula
	letra -= 'a' - 'A'; // Metodo 1
	// letra += 'A' - 'a'; // Metodo 2
	// letra = 'A' + (letra - 'a'); // Metodo 3
}

void mayusculasMinusculas(char letra){
	// Pasar Mayuscula a Minuscula
	letra -= 'A' - 'a'; // Metodo 1
	// letra += 'a' - 'A'; // Metodo 2
	// letra = 'a' + (letra - 'A'); // Metodo 2
}

void compararLetras(){
	// Comparar Valores ASCII de Mayusculas y Minusculas
	// Tambien se puede comparar usando directamente los valores ASCII
	// (A)=65 || (Z)=90 || (a)=97 || (z)=122
	char letra;
	bool estado;
	cout << "Introduce la Letra Mayuscula o Minuscula: ";
   cin >> letra;
   if(letra >= 'a' && letra <= 'z'){
      estado = true;
	}else if(letra >= 'A' && letra <= 'Z'){
      estado = false;
	}
	if(estado)
		cout << "\nEs la Letra " << letra << " Minuscula? --> Verdadero: " << estado << endl;
	else
		cout << "\nEs la Letra " << letra << " Minuscula? --> Falso: " << estado << endl;
}

void compararEdad(){
	int edad;
	bool estado;
   cout << "\nIntroduce la Edad: ";
	cin >> edad;
	if(edad < 18 || edad > 65)
		estado = true;
	else
		estado = false;
	if(estado)
		cout << "\nLa Edad " << edad << " es Menor que 18 o Mayor que 65? --> Verdadero:  " << estado << endl;
	else
		cout << "\nLa Edad " << edad << " es Menor que 18 o Mayor que 65? --> Falso:  " << estado << endl;
}

void anhoBisiesto(){
	int anho;
	bool estado;
   cout << "\nIntroduce el Anho: ";
	cin >> anho;
	if((anho%4==0 && anho%100!=0) || anho%400==0)
		estado = true;
	else
		estado = false;
	if(estado)
		cout << "\nEs el Anho " << anho << " Bisiesto? --> Verdadero: " << estado << endl;
	else
		cout << "\nEs el Anho " << anho << " Bisiesto? --> Falso: " << estado << endl;
}

int main() {
	// El codigo esta repartido en metodos evitar repetir codigo en el caso 4 y separa mejor mejor las lineas
	// para facilitar la busqueda de posibles errores.
   bool flag = false;
   int valor;
   do{
      if(flag){
      	switch (valor){
				case 1:
					compararLetras();
					break;
				case 2:
					compararEdad();
					break;
				case 3:
					anhoBisiesto();
					break;
				case 4:
					compararLetras();
					compararEdad();
					anhoBisiesto();
					break;
			}
      }
      cout << "\n------------------" << endl;
      cout << "\nPulsa \n\n0 para salir \n\n1 para Saber si una Letra es Minuscula " << endl;
      cout << "\n2 para Saber si una Edad es Mayor que 18 o Menor que 65 " << endl;
      cout << "\n3 para Saber si un Anho es Bisiesto \n\n4 para Todo a la Vez" << endl;
      cout << "\nOpcion Introducida: ";
      cin >> valor;
      cout << "\n------------------" << endl;
      if(valor==0)
         flag = false;
      else
			flag = true;
   }while(flag);
   return 0;
}
