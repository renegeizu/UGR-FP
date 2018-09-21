#include <iostream>

using namespace std;

bool LeeOpcion2Alternativas(string texto){
	char letra;
	
	do{
		cout << texto;
		cin >> letra;
	}while(letra != 'N' && letra != 'n' && letra != 'S' && letra != 's');
	
	if(letra == 'S' || letra == 's')
		return true;
	else
		return false;	
}

int main(){
	bool autonomo, pensionista, estado_civil;
	float renta_bruta, renta_final, retencion_inicial;
	
	autonomo = LeeOpcion2Alternativas("\nIntroduce N si no eres autonomo, S si lo eres: ");
	pensionista = LeeOpcion2Alternativas("\nIntroduce N si no eres pensionista, S si lo eres: ");
	estado_civil = LeeOpcion2Alternativas("\nIntroduce N si estas casado, S si eres soltero: ");

	cout << "\nIntroduce Renta Bruta: ";
	cin >> renta_bruta;
	cout << "\nIntroduce la Retencion Inicial (Sin %): ";
	cin >> retencion_inicial;
	
	if(autonomo == true){
		retencion_inicial = retencion_inicial - 3;
	}else{
		if(pensionista == true){
			retencion_inicial = retencion_inicial + 1;
		}else{
			retencion_inicial = retencion_inicial + 2;
			if (renta_bruta<20000){
				retencion_inicial = retencion_inicial + 2;
			}
			if(estado_civil == false && renta_bruta>20000){
				retencion_inicial = retencion_inicial + 2.5;
			}
			if(estado_civil == true && renta_bruta>20000){
				retencion_inicial = retencion_inicial + 3;
			}
		}
	}
	
	renta_final = renta_bruta - (renta_bruta * retencion_inicial/100);
	cout << "\nLa Renta Final es de " << renta_final << endl;
	
	system("pause");
	return 0;
}
