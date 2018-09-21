#include <iostream>

using namespace std;

int main() {
	float capital, interes, total;
	int anhos;
	
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

	total = capital + (capital * (interes/100));

	for(int i = 1; i < anhos; i++){
		total = total + (total * (interes/100));
	}
	
	cout << "\nEl total es " << total << "\n" << endl;
	
	system("pause");
   return 0;
}
