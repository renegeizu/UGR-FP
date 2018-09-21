/*
 * Ampliad el ejercicio 10 de la relación de problemas I, para que, una vez calculada la
 * media y la desviación, el programa imprima por cada uno de los valores introducidos
 * previamente, si está por encima o por debajo de la media.
 */

#include <iostream>
#include <math.h>

using namespace std;

int main() {
	double media_aritmetica, desviacion_tipica;
	float x1, x2, x3, x4, x5;
	
	cout << "Introduce el primer valor: ";
	cin >> x1;
	cout << "Introduce el segundo valor: ";
	cin >> x2;
	cout << "Introduce el tercer valor: ";
	cin >> x3;
	cout << "Introduce el cuarto valor: ";
	cin >> x4;
	cout << "Introduce el quinto valor: ";
	cin >> x5;
	
	media_aritmetica = (x1 + x2 + x3 + x4 + x5) / 5;
	desviacion_tipica = sqrt((pow(x1-media_aritmetica,2) + pow(x2-media_aritmetica,2) + pow(x3-media_aritmetica,2) + pow(x4-media_aritmetica,2) + pow(x5-media_aritmetica,2)) / 5);
	cout << "\nLa Media Aritmetica es de " << media_aritmetica << endl;
	cout << "La Desviacion Tipica Muestral es de " << desviacion_tipica << endl;
	
	if(x1<media_aritmetica)
		cout << x1 << " \nesta por debajo de la media" << endl;
	else if(x1 > media_aritmetica)
		cout << x1 << " \nesta por encima de la media" << endl;
	else
		cout << x1 << " \nes igual a la media" << endl;
		
	if(x2<media_aritmetica)
		cout << x2 << " esta por debajo de la media" << endl;
	else if(x2 > media_aritmetica)
		cout << x2 << " esta por encima de la media" << endl;
	else
		cout << x2 << " es igual a la media" << endl;
		
	if(x3<media_aritmetica)
		cout << x3 << " esta por debajo de la media" << endl;
	else if(x3 > media_aritmetica)
		cout << x3 << " esta por encima de la media" << endl;
	else
		cout << x3 << " es igual a la media" << endl;
		
	if(x4<media_aritmetica)
		cout << x4 << " esta por debajo de la media" << endl;
	else if(x4 > media_aritmetica)
		cout << x4 << " esta por encima de la media" << endl;
	else
		cout << x4 << " es igual a la media" << endl;
		
	if(x5<media_aritmetica)
		cout << x5 << " esta por debajo de la media" << endl;
	else if(x5 > media_aritmetica)
		cout << x5 << " esta por encima de la media" << endl;
	else
		cout << x5 << " es igual a la media" << endl;
		
	system("pause");
   return 0;
}
