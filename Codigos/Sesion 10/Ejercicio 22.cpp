#include <iostream>

using namespace std;

class Nomina{
	private:
		int numeroHoras, horasNoExtra;
		float precioHoras, precioHorasExtra;
		//Prec: numeroHoras > 0 && precioHoras > 0 && horasNoExtra >= 0 && precioHorasExtra > 0
		//Agrega los valores a las variables
		void SetNomina(int numeroHoras, float precioHoras, int horasNoExtra, float precioHorasExtra){
			this->numeroHoras = numeroHoras;
			this->precioHoras = precioHoras;
			this->horasNoExtra = horasNoExtra;
			this->precioHorasExtra = precioHorasExtra;
		}
	public:
		//Prec: numeroHoras > 0 && precioHoras > 0 && horasNoExtra >= 0 && precioHorasExtra > 0
		//Constructor
		Nomina(int numeroHoras, float precioHoras, int horasNoExtra, float precioHorasExtra){
			SetNomina(numeroHoras, precioHoras, horasNoExtra, precioHorasExtra);
		}
		//Prec: numeroHoras > 0 && precioHoras > 0
		//Constructor
		Nomina(int numeroHoras, float precioHoras){
			SetNomina(numeroHoras, precioHoras, 40, 50);
		}
		//Prec: Ninguna
		//Devuelve el total del salario del trabajador
		float Salario(){
			if(numeroHoras > horasNoExtra){
				return ((precioHoras*horasNoExtra)+((numeroHoras-horasNoExtra)*(precioHoras+(precioHoras*precioHorasExtra/100))));
			}else{
				return numeroHoras*precioHoras;
			}
		}
};

int main(){
	int numHoras, horasNoExtra = 0;
	float precioHoras, precioHorasExtra = 0;
	
	do{
		cout << endl << "Introduce el Numero de Horas: ";
		cin >> numHoras;
	}while(numHoras < 0);
	
	do{
		cout << endl << "Introduce el Precio por Hora: ";
		cin >> precioHoras;
	}while(precioHoras < 0);
	
	Nomina nomina(numHoras, precioHoras);
	
	cout << endl << "El Salario del Trabajador es de " << nomina.Salario() << endl;
	
	system("pause");
	return 0;
}
