#include <iostream>

using namespace std;

int ValorAbsoluto (int entero) { //Solo devuelve el valor entero al entrar en el else del if
	if (entero < 0)
		entero = -entero;
	else
		return entero;
}

void Imprime(double valor) { //Da error. Ya le hemos pasado el valor, y lo vuelve a declarar
	double valor;
	cout << valor;
}

void Cuadrado (int entero) { //Hemos declarado que devuelve void (no devuelve nada) pero hace un return de un entero 
	return entero*entero;
}

bool EsPositivo(int valor) { //Solo devuelve true al entrar el el if, si no se cumple, no devuelve nada
	if (valor > 0)
		return true;
}

int main(){
	system("pause");
	return 0;
}
