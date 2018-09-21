#include <iostream>

using namespace std;

class Recta{
	public:
		double coeficienteA, coeficienteB, coeficienteC;
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
	
	recta1.coeficienteA = LeerReal("\nIntroduce el primer numero real de la primera recta: ");
	recta1.coeficienteB = LeerReal("\nIntroduce el segundo numero real de la primera recta: ");
	recta1.coeficienteC = LeerReal("\nIntroduce el tercero numero real de la primera recta: ");
	recta2.coeficienteA = LeerReal("\nIntroduce el primer numero real de la segunda recta: ");
	recta2.coeficienteB = LeerReal("\nIntroduce el segundo numero real de la segunda recta: ");
	recta2.coeficienteC = LeerReal("\nIntroduce el tercero numero real de la segunda recta: ");
	
	cout << "\nLa pendiente de la recta 1 es " << -recta1.coeficienteA/recta1.coeficienteB << endl;
	cout << "\nLa pendiente de la recta 2 es " << -recta2.coeficienteA/recta2.coeficienteB << endl;
	
	system("pause");
	return 0;
}
