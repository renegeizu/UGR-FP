#include <iostream>
#include <cmath>

using namespace std;

int main(){
	long long min, max, cifra, cont_cifras = 0, aux_calculo = 10, var_calculo = 1, contador;
	const long long var_control = 10;
	
	do{
		cout << "\nDame la cifra maxima: ";
		cin >> max;
	}while(max<0);
	
	do{
		cout << "\nDame la cifra minima: ";
		cin >> min;
	}while(min<0 || min>max);
	
	do{
		cout << "\nDame la cifra a buscar: ";
		cin >> cifra;
	}while(cifra<0 || cifra>9);
	
	for(int i = min; i <= max; i++){
		contador = 0;
		for(var_calculo = 1; var_calculo <= i; var_calculo *= var_control){
			aux_calculo = (i / var_calculo);
			contador++;
		}
		if(aux_calculo == cifra){
			cont_cifras++;
		}
		for(contador=contador-2; contador>=0; contador--){
			var_calculo = pow(var_control, contador);
			aux_calculo =(i/var_calculo)-(aux_calculo*var_control);
			if(aux_calculo == cifra){
				cont_cifras++;
			}
			aux_calculo = i/var_calculo;
		}
	}
	
	cout << endl << "La cifra " << cifra << " aparece " << cont_cifras << " veces en el intervalo cerrado [" << min << ", " << max << "]" << endl;
	 	
	system("pause");
	return 0;
}
