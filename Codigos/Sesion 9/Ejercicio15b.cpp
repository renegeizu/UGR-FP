#include <iostream>

using namespace std;

class Recta{
	public:
		double coeficienteA, coeficienteB, coeficienteC;
	double Pediente(){
		return -coeficienteA/coeficienteB;
	}
	double Ordenada(double x){
		return (-coeficienteC-(x*coeficienteA)) / coeficienteB;
	}
	double Abscisa(double y){
		return (-coeficienteC-(y*coeficienteB)) / coeficienteA;
	}
};

//Pide y devuelve un numero real
double LeerReal(string texto){
	double numero;
	cout << texto;
	cin >> numero;
	return numero;
}

int main(){
	Recta recta1, recta2;
	double x, y;
	
	recta1.coeficienteA = LeerReal("\nIntroduce el primer numero real de la primera recta: ");
	recta1.coeficienteB = LeerReal("\nIntroduce el segundo numero real de la primera recta: ");
	recta1.coeficienteC = LeerReal("\nIntroduce el tercero numero real de la primera recta: ");
	recta2.coeficienteA = LeerReal("\nIntroduce el primer numero real de la segunda recta: ");
	recta2.coeficienteB = LeerReal("\nIntroduce el segundo numero real de la segunda recta: ");
	recta2.coeficienteC = LeerReal("\nIntroduce el tercero numero real de la segunda recta: ");
	
	x = LeerReal("\nIntroduce el valor de la ordenada x: ");
	y = LeerReal("\nIntroduce el valor de la abscisa y: ");
	
	cout << "\nLa pendiente de la recta 1 es " << recta1.Pediente() << endl;
	cout << "\nLa pendiente de la recta 2 es " << recta2.Pediente() << endl;
	
	cout << "\nLa abscisa de x=" << x << " la recta 1 es " << recta1.Ordenada(x) << endl;
	cout << "\nLa ordenada de y=" << y << " la recta 1 es " << recta1.Abscisa(y) << endl;
	
	system("pause");
	return 0;
}
