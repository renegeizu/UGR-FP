#include <iostream>

using namespace std;

class Ventas{
	private:
		int unidades_1 = 0, unidades_2 = 0, unidades_3 = 0;
	public:
		//Prec: sucursal == 1 || sucursal == 2 || sucursal == 3
		//Prec: unidades > 0
		//Incrementa las unidades segun la sucursal
		void SetUnidades(int sucursal, int unidades){ 
			//Se le pasa la sucursal y las unidades
			//Incremente las unidades de esa sucursal
		}
		//Prec: Ninguna
		//Devuelve el maximo de unidades almacenadas
		int GetVentasMax(){
			//Devuelve la cantidad maxima de unidades
		}
		//Prec: Ninguna
		//Devuelve la sucursal con mas unidades
		int GetSucursalMax(){
			//Devuelve la sucursal con la cantidad maxima de unidades
		}
};

int main() {
  	int sucursal, unidades;
  	char producto;
  	Ventas ventas_empresa;
  	
  	do{
  		do{
			cout << "Introduce la sucursal (1, 2 o 3) (-1 para salir): ";
	  		cin >> sucursal;
		}while(sucursal!=-1 && sucursal!=1 && sucursal!=2 && sucursal!=3);
	  	if(sucursal!=-1){
			do{
				cout << "Introduce el codigo del producto (a, b, c): ";
				cin >> producto;
			}while(producto!='a' && producto!='b' && producto!='c');
			do{
				cout << "Introduce el numero de unidades: ";
				cin >> unidades;
			}while(unidades < 0);
			ventas_empresa.SetUnidades(sucursal, unidades);
		}
	}while(sucursal!=-1);
	
	cout << "\nLa sucursal es " << ventas_empresa.GetSucursalMax() << " con " << ventas_empresa.GetVentasMax() << " unidades" << endl;
		
  	system("pause");
   return 0;
}
