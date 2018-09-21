#include <iostream>

using namespace std;

int main() {
	
	long double numero_entero, total_entero = 1;
	long double numero_real, total_real = 1;
	string texto = "";

	do{
		cout << "\nIntroduce un Numero Positivo: ";
		cin >> numero_entero;
	}while(numero_entero < 0);
	
	cout << endl;
	
	if(numero_entero == 0){
		cout << "0! = 1" << endl;
	}else{
		cout << numero_entero << "! = ";
		for(int i = 1; i <= numero_entero; i++){
			total_entero *= i;
		}
		cout << total_entero << endl;
	}

	do{
		cout << "\n\nIntroduce un Numero Real: ";
		cin >> numero_real;
	}while(numero_real < 0);
	
	cout << "\n" << numero_real << "^" << numero_entero << " = ";
	
	for(int i = 1; i <= numero_entero; i++){
		total_real *= numero_real;
	}
	
	cout << total_real << endl;
	
  	system("pause");
   return 0;
}
