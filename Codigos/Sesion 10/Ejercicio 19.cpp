#include <iostream>
#include <cmath>

using namespace std;

class ProgresionGeometrica{
	private: 
		double a, r, k;
	public:
		//Prec: a < 0 && r < 0 && k < 0
		//Constructor
		ProgresionGeometrica(double a, dobule r, double k){
			this->a = a;
			this->r = r;
			this->k = k;
		}
		//Prec: Ninguna
		//Devuelve el valor de la suma hasta el tope
		double SumaHasta(){
			double suma = 0;
			for (int i = 0; i < k; i++){
				suma += a*pow(r, i);
			}
			return suma;
		}
		//Prec: Ninguna
		//Devuelve el valor del producto hasta el tope
		double ProductoHasta(){
			return sqrt(pow((a*SumaHasta(r, a, k)), k));
		}
		//Prec: Ninguna
		//Devuelve el valor de la suma hasta infinito
		double SumaHastaInfinito(){
			if(abs(r)<1){
				return (a/(1-r));
			}else{
				return 0;
			}
		}
};

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
	
	ProgresionGeometrica funcion (a, r, k);
	
	cout << endl << "Suma Hasta: " << funcion.SumaHasta() << endl;
	cout << endl << "Producto Hasta: " << funcion.ProductoHasta() << endl;
	
	infinito = funcion.SumaHastaInfinito();
	
	if(infinito == 0){
		cout << endl << "Suma Hasta Infinito: Infinito" << endl;
	}else{
		cout << endl << "Suma Hasta Infinito: " << infinito << endl;
	}
	
	system("pause");
	return 0;
}
