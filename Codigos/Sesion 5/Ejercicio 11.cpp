#include <iostream>

using namespace std;

int main() {
	//Ejercicio 3
	int edad;
	float salario;
	string texto = "";
	
	do{
		cout << "Introduce la Edad: ";
		cin >> edad;
	}while(edad<=0);
	
	do{
		cout << "Introduce el Salario: ";
		cin >> salario;
	}while(salario<=0);
	
	if(edad>65 && salario<300){
		salario = salario + (salario*5/100);
		texto = "Es Aplicable la Subida";
	}else{
		texto = "No es Aplicable la Subida";
	}
	
	cout << texto << endl;
	cout << "El Salario Actual es " << salario << endl;
	
	//Ejercicio 5
	int entero1, entero2, entero3;
	string texto = "";
	
	
	cout << "\nIntroduce el Primer Valor: ";
	cin >> entero1;
	
	cout << "Introduce el Segundo Valor: ";
	cin >> entero2;
	
	cout << "Introduce el Tercer Valor: ";
	cin >> entero3;
	
	if(entero1 < entero2 && entero1 < entero3 && entero2 < entero3){
		texto = "Estan Ordenados de Menor a Mayor";
	}else if(entero1 > entero2 && entero1 > entero3 && entero2 > entero3){
		texto = "Estan Ordenados de Mayor a Menor";
	}else{
		texto = "No Estan Ordenados";
	}
	
	cout << texto;
	
	system("pause");
   return 0;
}
