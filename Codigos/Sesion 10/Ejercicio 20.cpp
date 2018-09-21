#include <iostream>
#include <math.h>

using namespace std;

class Gaussiana{
	private: 
		const float pi = 3.1415927;
		float x, media, desviacion;
	public:
		//Prec: Sin restricciones
		//Constructor
		Gaussiana(float x, float media, float desviacion){
			this->x = x;
			this->media = media;
			this->desviacion = desviacion;
		}
		//Prec: Ninguna
		//Devuelve el valor de la funcion Gaussiana
		float CalcularFuncion(){
			return ( 1 / ( this->desviacion * sqrt(2*this->pi) ) ) * exp( -0.5 * pow( (this->x-this->media)/this->desviacion, 2.0 ) );
		}
}

int main() {
   float x, media, desviacion;
   
	cout << "\nIntroduce el Valor de Abscisa X: " << endl;
	cin >> x;
	
	cout << "\nIntroduce el Valor del Parametro Media: " << endl;
	cin >> media;
	
	cout << "\nIntroduce el Valor del Parametro Desviacion Tipica: " << endl;
	cin >> desviacion;
	
	Gaussiana funcion(x, media, desviacion);
	
	cout << "\nValor de la Funcion Gaussiana: " << funcion.CalcularFuncion() << "\n" << endl;
	
	system("pause");
   return 0;
}
