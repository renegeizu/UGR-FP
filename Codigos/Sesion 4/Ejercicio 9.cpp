/*
 * En clase de teoría se ha visto e implementado el siguiente ejemplo:
 * En un programa de ventas, si la cantidad vendida es mayor de 100 unidades, se le
 * aplica un descuento del 3 %. Por otra parte, si el precio final de la venta es mayor de
 * 700 euros, se aplica un descuento del 2 %. Ambos descuentos son acumulables.
 *
 * Vamos a cambiar el criterio de los descuentos. Supondremos que sólo se aplicará el
 * descuento del 2% (por una venta mayor de 700 euros) cuando se hayan vendido más
 * de 100 unidades, es decir, para ventas de menos de 100 unidades no se aplica el
 * descuento del 2% aunque el importe sea mayor de 700 euros.
 * Cambiar el programa visto en clase para incorporar este nuevo criterio.
 */

#include <iostream>

using namespace std;

int main(){
	// IV = INDICE_VARIACION
	const int MINIMO_UNIDADES_PARA_DESCUENTO = 100;
	const double MINIMO_VENTA_GRANDE_PARA_DESCUENTO = 700.0;
	const double IV_DESCUENTO_POR_UNIDADES_VENDIDAS = 1 - 0.03;
	const double IV_DESCUENTO_POR_VENTA_GRANDE = 1 - 0.02;
	
	double precio_unitario, total_venta;
	int unidades_vendidas;
	
	cout << "Precio unitario: ";
	cin >> precio_unitario;
	cout << "\nUnidades vendidas: ";
	cin >> unidades_vendidas;
	
	if (unidades_vendidas >= MINIMO_UNIDADES_PARA_DESCUENTO)
		precio_unitario = precio_unitario * IV_DESCUENTO_POR_UNIDADES_VENDIDAS;
		
	total_venta = precio_unitario * unidades_vendidas;
	
	if (total_venta >= MINIMO_VENTA_GRANDE_PARA_DESCUENTO && unidades_vendidas>100)
		total_venta = total_venta * IV_DESCUENTO_POR_VENTA_GRANDE;
	
	cout << "\nTotal venta: " << total_venta;
}
