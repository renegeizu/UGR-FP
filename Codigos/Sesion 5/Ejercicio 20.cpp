#include <iostream>

using namespace std;

int main() {
	float capital, interes, total;
	int contador=1;
	
	do{
		cout << "\nIntroduce el Capital: ";
		cin >> capital;
	}while(capital<=0);
	
	do{
		cout << "\nIntroduce el Interes: ";
		cin >> interes;
	}while(interes<0);
	
	total = capital + (capital * (interes/100));
	
	while(total<(capital*2)){
		total = total + (total * (interes/100));
		contador++;
	}
	
	cout << "\nEl total de anhos para doblar el capital aportado como minimo es de " << contador << " anhos\n" << endl;
	
	system("pause");
   return 0;
}
