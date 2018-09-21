#include <iostream>

using namespace std;

int main(){
	float capital, total;
	int interes, anhos;
	
	do{
		cout << "\nIntroduce el Capital: ";
		cin >> capital;
	}while(capital<=0);
	
	do{
		cout << "\nIntroduce el Interes: ";
		cin >> interes;
	}while(interes<0);
	
	do{
		cout << "\nIntroduce el Numero de Anhos: ";
		cin >> anhos;
	}while(anhos<=0);
	
	for(int j = 1; j <= interes; j++){
		total=capital;
		cout << endl << "Calculos realizados al " << j << " %:" << endl;
		cout << "-----------------------------------" << endl;
		for(int i = 1; i <= anhos; i++){
			total += (total*j)/100;
			cout << "Dinero obtenido en el anho numero " << i << " = " << total << endl;
		}
		cout << "-----------------------------------" << endl;
	}
	
	system("pause");
	return 0;
}
