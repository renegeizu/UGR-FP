#include <iostream>

using namespace std;

int main() {
	int dato, contador=0, minimo=0;
	
	do{
		cout << "\nIntroduce un numero entero o 0 para terminar: ";
		cin >> dato;
	
		if(dato!=0){
			if(contador==0)
				minimo=dato;
			else if(dato<minimo)
				minimo=dato;
			contador++;
		}
		
	}while(dato!=0);
	
	cout << "\nSe han introducido " << contador << " numeros" << endl;
	cout << "\nEl valor minimo introducido es " << minimo << endl;
	
	system("pause");
   return 0;
}
