/*
 * Cread un programa que lea los datos fiscales da una persona, reajuste su renta bruta
 * según el criterio que se indica posteriormente e imprima su renta neta final.
 */

#include <iostream>

using namespace std;

int main() {
	int autonomo, pensionista, estado_civil;
	float renta_bruta, renta_final, retencion_inicial;
	
	cout << "Introduce 0 si no eres autonomo, 1 si lo eres: " << endl;
	cin >> autonomo;
	cout << "Introduce 0 si no eres pensionista, 1 si lo eres: " << endl;
	cin >> pensionista;
	cout << "Introduce 0 si estas casado, 1 si eres soltero: " << endl;
	cin >> estado_civil;
	cout << "Introduce Renta Bruta: " << endl;
	cin >> renta_bruta;
	cout << "Introduce la Retencion Inicial (Sin %): " << endl;
	cin >> retencion_inicial;
	
	if(autonomo==1){
		retencion_inicial = retencion_inicial - 3;
	}else{
		if(pensionista == 1){
			retencion_inicial = retencion_inicial + 1;
		}else{
			retencion_inicial = retencion_inicial + 2;
			if (renta_bruta<20000){
				retencion_inicial = retencion_inicial + 2;
			}
			if(estado_civil == 0 && renta_bruta>20000){
				retencion_inicial = retencion_inicial + 2.5;
			}
			if(estado_civil == 1 && renta_bruta>20000){
				retencion_inicial = retencion_inicial + 3;
			}
		}
	}
	
	renta_final = renta_bruta - (renta_bruta * retencion_inicial/100);
	cout << "La Renta Final es de " << renta_final << endl;
	
	system("pause");
   return 0;
}
