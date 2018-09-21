#include <iostream>

using namespace std;

int Maximo(int a, int b){
	if(a>b)
		return a;
	else
		return b;
}

char LeerOpcion(){
	char opcion;
	do{
		cout << "\nIntroduzca opci�n: ";
		cin >> opcion;
	}while(opcion!='I' && opcion!='S' && opcion!='P' && opcion!='M' && opcion!='R');
	return opcion;
}

int main(){
	int numero1, numero2;
	char opcion = 'I';
	
	do{
		switch(opcion){
			case 'I':
				do{
					cout << "\nIntroduce el primer numero: ";
					cin >> numero1;
				}while(numero1<0);
				
				do{
					cout << "\nIntroduce el segundo numero: ";
					cin >> numero2;
				}while(numero2<0);
				break;
			case 'S':
				cout << "\nLa Suma de Ambos Numeros es " << numero1+numero2;
				break;
			case 'P':
				cout << "\nEl Producto de Ambos Numeros es " << numero1*numero2;
				break;
			case 'M':
				cout << "\nEl Numero Maximo de Ambos es " << Maximo(numero1, numero2);
				break;
		}
		
		cout << "\n----------------";
		cout << "\nI. Introducir n�meros";
		cout << "\nS. Suma";
		cout << "\nP. Producto";
		cout << "\nM. M�ximo";
		cout << "\nR. SaliR";
		cout << "\n----------------";
		
		opcion = LeerOpcion();
		
	}while(opcion != 'R');
		
	system("pause");
	return 0;
}
