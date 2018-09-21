#include<iostream>

using namespace std;

class SecuenciaEnteros{
	private:
		int enteros[100];
		int cont = 0;
	public:
		//Prec: numero entero positivo
		void SetEntero(int numero){
			if(cont != 100){
				enteros[cont] = numero;
				cont++;
			}
		}
		
		string GetSecuenciaAsc(){
			string lista = "{ ";
			int aux = -1;
			
			for(int i = 0; i < cont; i++){
				if(enteros[i] >= aux){
					lista = lista + to_string(enteros[i]) + " ";
					aux = enteros[i];
				}else{
					lista = lista + "}{ " + to_string(enteros[i]) + " ";
					aux = enteros[i];
				}				
			}
			
			return lista + "}";
		}
};

int main(){
	int numero;
	SecuenciaEnteros listado;
	
	cout << "Introduce un Numero Positivo (-1 para salir): " << endl;
	cin >> numero;
	
	while(numero >= 0){
		listado.SetEntero(numero);
		cout << "Introduce un Numero Positivo (-1 para salir): " << endl;
		cin >> numero;
	}
	
	cout << "\nLas Secuencias Ascendentes del Listado son: " << listado.GetSecuenciaAsc() << endl;
	
	system("pause");
	return 0;
}
