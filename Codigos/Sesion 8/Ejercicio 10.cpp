#include <iostream>
#include <cmath>

using namespace std;

float Gaussiana(float desviacion, float x, float media){
	const float pi = 3.1415927;
	return ( 1 / ( desviacion * sqrt(2*pi) ) ) * exp( -0.5 * pow( (x-media)/desviacion, 2.0 ) );
}

double DistribucionAcumulada(float x){
	const double b0 = 0.2316419, b1 = 0.319381530, b2 = -0.356563782, b3 = 1.781477937, b4 = -1.821255978, b5 = 1.330274429;
	double t, gaussiana;
	t = 1/(1+(b0*x));
	gaussiana = (b1*t)+(b2*pow(t, 2.0))+(b3*pow(t, 3.0))+(b4*pow(t, 4.0))+(b5*pow(t, 5.0));
	return (1-gaussiana);
}

int main(){
	float x, media, desviacion;
	int n;
	
	cout << "\nIntroduce el Valor del Parametro Media: ";
	cin >> media;
	
	cout << "\nIntroduce el Valor del Parametro Desviacion Tipica: ";
	cin >> desviacion;
	
	cout << "\nNumero de Abscisas a Procesar: ";
	cin >> n;
	
	for(int i = 1; i <= n; i++){
		cout << "\nIntroduce el " << i << "º Valor de Abscisa X: ";
		cin >> x;
		cout << "\nValor de la Funcion Gaussiana en X = " << x << ": " << Gaussiana(desviacion, x, media) << "\n" << endl;
		cout << "\nValor de la Distribucion Normal en X = " << x << ": " << DistribucionAcumulada(x) << "\n" << endl;
	}
	
	system("pause");
	return 0;
}
