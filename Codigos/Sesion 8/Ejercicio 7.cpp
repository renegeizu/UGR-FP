#include <iostream>
#include <cmath>

using namespace std;

double SumaHasta(double dato_r, double elemento, double tope){
	double suma = 0;
	
	for (int i = 0; i < tope; i++){
		suma += elemento*pow(dato_r, i);
	}
	
	return suma;
}

double ProductoHasta(double dato_r, double elemento, double tope){
	return sqrt(pow((elemento*SumaHasta(dato_r, elemento, tope)), tope));
}

double SumaHastaInfinito(double dato_r, double elemento){
	if(abs(dato_r)<1){
		return (elemento/(1-dato_r));
	}else{
		return 0;
	}
}

int main(){
	double a, r, k, infinito;
	
	do{
		cout << endl << "Introduce el elemento r: ";
		cin >> r;
	}while(r < 0);
	
	do{
		cout << endl << "Introduce el primer elemento (a1): ";
		cin >> a;
	}while(a < 0);
	
	do{
		cout << endl << "Introduce el tope (k): ";
		cin >> k;
	}while(k < 0);
	
	cout << endl << "Suma Hasta: " << SumaHasta(r, a, k) << endl;
	cout << endl << "Producto Hasta: " << ProductoHasta(r, a, k) << endl;
	
	infinito = SumaHastaInfinito(r, a);
	
	if(infinito == 0){
		cout << endl << "Suma Hasta Infinito: Infinito" << endl;
	}else{
		cout << endl << "Suma Hasta Infinito: " << infinito << endl;
	}
	system("pause");
	return 0;
}
