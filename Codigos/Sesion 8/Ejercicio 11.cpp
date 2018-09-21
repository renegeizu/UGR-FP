#include <iostream>

using namespace std;

bool SonAmigos(int a, int b){
	int sumatorioA=0, sumatorioB=0;
	for(int i = 1; i < a; i++){
		if(a%i == 0){
			sumatorioA += i;
		}
	}
	for(int i = 1; i < b; i++){
		if(b%i == 0){
			sumatorioB += i;
		}
	}
	if((sumatorioA)==b && (sumatorioB)==a)
		return true;
	else
		return false;
}

int BuscarAmigos(int a){
	int sumatorio=0, sumatorioB=0;
	for(int i = 1; i < a; i++){
		if(a%i == 0){
			sumatorio += i;
		}
	}
	for(int i = 1; i < sumatorio; i++){
		if(sumatorio%i == 0){
			sumatorioB += i;
		}
	}
	if(sumatorioB==a)
		return sumatorio;
	else
		return -1;
}

int main(){
	int opcion;
	int numero1, numero2;
	bool estado;
	
	cout << "----------------------" << endl;
	cout << "Introduce 1 para comprobar si dos numeros son amigos" << endl;
	cout << "Introduce 2 para encontrar un numero amigo de otro" << endl;
	cout << "----------------------" << endl;
	
	do{
		cout << "Opcion introducida: ";
		cin >> opcion;
	}while(opcion!=1 && opcion!=2);
	
	cout << endl << "------------------" << endl;
	
	switch(opcion){
		case 1:
			do{
				cout << endl <<"Primer Numero: ";
				cin >> numero1;
			}while(numero1<=0);
			do{
				cout << endl <<"Segundo Numero: ";
				cin >> numero2;
			}while(numero2<=0);
			estado = SonAmigos(numero1, numero2);
			if(estado)
				cout << endl << numero1 << " y " << numero2 << " son amigos" << endl;
			else
				cout << endl << numero1 << " y " << numero2 << " no son amigos" << endl;
			break;
		case 2:
			do{
				cout << endl <<"Buscar Amigo del Numero: ";
				cin >> numero1;
			}while(numero1<0);
			numero2 = BuscarAmigos(numero1);
			if(numero2 != -1)
				if(numero2 <= numero1+3 && numero2 >= numero1-3)
					cout << endl << numero2 << " es amigo de " << numero1 << " dentro del intervalo [" << numero1-3 << ", " << numero1+3 << "]"  << endl;
				else
					cout << endl << numero2 << " es amigo de " << numero1 << " fuera del intervalo [" << numero1-3 << ", " << numero1+3 << "]"  << endl;
			else
				cout << endl << numero1 << " no tiene numeros amigos" << endl;
			break;
	}
	
	system("pause");
	return 0;
}
