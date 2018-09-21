#include <iostream>

using namespace std;

//No se pueden hacer los pares cout/cin dentro de la funcion puesto que ya le pasamos valores
//a dicha funcion
double Max(double un_valor, double otro_valor, double el_tercero){
	double aux = un_valor;
	if(aux < otro_valor)
		aux = otro_valor;
	else if(aux < el_tercero)
		aux = el_tercero;
	return aux;
}

int main(){
	double valor1, valor2, valor3, maximo;
	
	cout << "Dame el primer valor: ";
	cin >> valor1;
	
	cout << "\nDame el segundo valor: ";
	cin >> valor2;
	
	cout << "\nDame el valor valor: ";
	cin >> valor3;
	
	maximo = Max(valor1, valor2, valor3);
	
	cout << "\nEl valor maximo es " << maximo << endl;
	
	system("pause");
	return 0;
}
