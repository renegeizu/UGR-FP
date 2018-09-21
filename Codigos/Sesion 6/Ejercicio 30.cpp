/*
 *
 * Una empresa que tiene tres sucursales decide llevar la contabilidad de las ventas
 * de sus productos a lo largo de una semana. Para ello registra cada venta con
 * tres números, el identificador de la sucursal (1, 2 o 3), el código del producto codificado
 * como un carácter (a, b ó c) y el número de unidades vendidas. Diseñar
 * un programa que lea desde el teclado una serie de registros compuestos por
 * sucursal, producto, unidades y diga cuál es la sucursal que más productos
 * ha vendido. La serie de datos termina cuando la sucursal introducida vale -1.
 *
 */

#include <iostream>

using namespace std;

int main() {
  	int sucursal, unidades, unidades1=0, unidades2=0, unidades3=0, aux;
  	char producto;
  	
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
			
			if(sucursal==1){
				unidades1+=unidades;
			}else if(sucursal==2){
				unidades2+=unidades;
			}else{
				unidades3+=unidades;
			}
			
		}
	}while(sucursal!=-1);
	
	aux = unidades1;
	sucursal = 1;
	
	if(unidades1<unidades2){
		aux = unidades2;
		sucursal = 2;
	}
	
	if(aux < unidades3){
		aux = unidades3;
		sucursal = 3;
	}
	
	cout << "\nLa sucursal es " << sucursal << " con " << aux << " unidades" << endl;
		
  	system("pause");
   return 0;
}
