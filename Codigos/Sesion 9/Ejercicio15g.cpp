#include <iostream>

using namespace std;

class Recta{
	private:
		double coeficienteA, coeficienteB, coeficienteC;
	public:
		Recta(double a, double b, double c){
			coeficienteA=a;
			coeficienteB=b;
			coeficienteC=c;
		}
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
	Recta recta1(0,0,0), recta2(0,0,0);
	double x, y;
	
	recta1.SetCoeficienteA(LeerReal("\nIntroduce el primer numero real de la primera recta: "));
	recta1.SetCoeficienteB(LeerReal("\nIntroduce el segundo numero real de la primera recta: "));
	recta1.SetCoeficienteC(LeerReal("\nIntroduce el tercero numero real de la primera recta: "));
	recta2.SetCoeficienteA(LeerReal("\nIntroduce el primer numero real de la segunda recta: "));
	recta2.SetCoeficienteB(LeerReal("\nIntroduce el segundo numero real de la segunda recta: "));
	recta2.SetCoeficienteC(LeerReal("\nIntroduce el tercero numero real de la segunda recta: "));
	
	x = LeerReal("\nIntroduce el valor de la ordenada x: ");
	y = LeerReal("\nIntroduce el valor de la abscisa y: ");
	
	cout << "\nLa pendiente de la recta 1 es " << recta1.Pediente() << endl;
	cout << "\nLa pendiente de la recta 2 es " << recta2.Pediente() << endl;
	
	cout << "\nLa abscisa de x=" << x << " la recta 1 es " << recta1.Ordenada(x) << endl;
	cout << "\nLa ordenada de y=" << y << " la recta 1 es " << recta1.Abscisa(y) << endl;
	
	system("pause");
	return 0;
}
