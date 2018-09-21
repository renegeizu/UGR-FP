#include <iostream>

using namespace std;

class DepositoSimulacion{
	private:
		float capital, interes;
		//Prec: capital > 0 && interes > 0
		//Agrega los valores a las variables
		void SetDeposito(float capital, float interes){
			this->capital = capital;
			this->interes = interes;
		}
	public:
		//Prec: capital > 0 && interes > 0
		//Constructor
		DepositoSimulacion(float capital, float interes){
			SetDeposito(capital, interes);
		}
		//Prec: anhos > 0
		//Devuelve el capital que hay tras el paso de esos anhos
		float GetGanancia(int anhos){
			float total = this->capital + (this->capital * (this->interes/100));
			for(int i = 1; i < anhos; i++){
				total += (total * (this->interes/100));
			}
			return total;
		}
		//Prec: Ninguna
		//Devuelve los anhos transcurridos para doblar el capital inicial como minimo
		int GetAnhos(){
			int contador = 1;
			float total = this->capital + (this->capital * (this->interes/100));
			while(total<=(this->capital*2)){
				total += (total * (this->interes/100));
				contador++;
			}
			return contador;
		}
		//Prec: capital > capitalInicial
		//Devuelve los anhos transcurridos para alcanzar el capital introducido como minimo
		int GetAnhos(float capital){
			int contador = 1;
			float total = this->capital + (this->capital * (this->interes/100));
			while(total<=capital){
				total += (total * (this->interes/100));
				contador++;
			}
			return contador;
		}
};

int main() {
	float capital, interes;
	int anhos;

	do{
		cout << "\nIntroduce el Capital: ";
		cin >> capital;
	}while(capital<0);
	
	do{
		cout << "\nIntroduce el Interes: ";
		cin >> interes;
	}while(interes<0);
	
	do{
		cout << "\nIntroduce el Numero de Anhos: ";
		cin >> anhos;
	}while(anhos<=0);
	
	DepositoSimulacion deposito(capital, interes);

	if(anhos != 0)
		cout << "\nEl total es " << deposito.GetGanancia(anhos) << endl;
	
	cout << "\nEl total de anhos para doblar el capital aportado como minimo es de " << deposito.GetAnhos() << " anhos\n" << endl;

  	system("pause");
   return 0;
}
