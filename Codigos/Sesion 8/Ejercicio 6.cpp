#include <iostream>

using namespace std;

float CalculoSalario(int horas, float precio){
	float aux;
	if(horas > 40){
		aux = horas-40;
		return (40*precio)+(aux*(precio+(precio*0.5)));
	}else{
		return horas*precio;
	}
}

int main(){
	int numHoras;
	float precioHoras;
	
	do{
		cout << endl << "Introduce el Numero de Horas: ";
		cin >> numHoras;
	}while(numHoras <= 0);
	
	do{
		cout << endl << "Introduce el Precio por Hora: ";
		cin >> precioHoras;
	}while(precioHoras <= 0);
	
	cout << endl << "El Salario del Trabajador es de " << CalculoSalario(numHoras, precioHoras) << endl;
	
	system("pause");
	return 0;
}
