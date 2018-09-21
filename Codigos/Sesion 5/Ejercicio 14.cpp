#include <iostream>

using namespace std;

int main() {
	int entero1, entero2, entero3;
	String texto = "";
	
	cout << "Introduce el Primer Valor: ";
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
	
	cout << texto << endl;
	
	system("pause");
   return 0;
}
