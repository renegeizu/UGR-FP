/*
 * En este ejercicio, no hay que construir ninguna clase ni función. Es un ejercicio sobre recorridos de una matriz 
 * declarada directamente en el main. Leed desde teclado dos variables util_filas y util_columnas y leed los datos
 * de una matriz de enteros de tamaño util_filas x util_columnas. Sobre dicha matriz, se pide lo siguiente:
 * 
 * a) Calcular la traspuesta de la matriz, almacenando el resultado en otra matriz.
 * b) (Examen Septiembre 2011) La posición de aquel elemento que sea el mayor de entre los mínimos de cada fila.
 * c) Ver si existe un valor MaxiMin, es decir, que sea a la vez, máximo de su fila y mínimo de su columna.
 * d) Leer los datos de otra matriz y multiplicar ambas matrices (las dimensiones de la segunda matriz han de ser 
 * compatibles con las de la primera para poder hacer la multiplicación)
 */

#include <iostream>

using namespace std;

int main(){
	int util_lineas, util_columnas, aux;
	
	do{
		cout << "\nIntroduce el Numero de Lineas: ";
		cin >> util_lineas;
	}while(util_lineas < 1);
	
	do{
		cout << "\n\nIntroduce el Numero de Columnas: ";
		cin >> util_columnas;
	}while(util_columnas < 1);
	
	int matriz[util_lineas][util_columnas];
	
	for(int i = 0; i < util_lineas; i++){
		for(int j = 0; j < util_columnas; j++){
			do{
				cout << "\n\nIntroduce el Valor de la Matriz en la linea " << i << " y columna " << j << ":";
				cin >> aux;
			}while(aux < 0);
			matriz[i][j] = aux;
		}	
	}
	
	//Ejercicio a)
	
	int matrizTraspuesta[util_lineas][util_columnas];
	
	for(int i = 0; i < util_lineas; i++){
		for(int j = 0; j < util_columnas; j++){
			matrizTraspuesta[j][i] = matriz[i][j];
		}	
	}
	
	//Ejercicio b)
	
	int matrizAuxiliar[util_lineas];
	int maximo;
	
	for(int i = 0; i < util_lineas; i++){
		matrizAuxiliar[i] = matriz[i][util_columnas-1];
		for(int j = util_columnas-2; j >= 0; j--){
			if(matrizAuxiliar[i] > matriz[i][j]){
				matrizAuxiliar[i] = matriz[i][j];
			}
		}	
	}
	
	maximo = matrizAuxiliar[0];
	
	for(int i = i; i < util_lineas; i++){
		if(maximo < matrizAuxiliar[i]){
			maximo = matrizAuxiliar[i];
		}
	}
	
	cout << "\n\nEl valor maximo entre los minimos de cada fila es " << maximo;
	
	//Ejercicio c)
	
	int fila = 0, columna = 0;
	bool MaxiMin = true;
	
	for(int k = 0; k < util_lineas; k++){
		for(int j = 0; j < util_columnas; j++){
			if(matriz[k][j] >= matriz[fila][columna]){
				columna = j;
			}
		}
		for(int i = 0; i < util_lineas; i++){
			if(matriz[i][k] > matriz[fila][columna]){
				MaxiMin = false;
			}
		}
		cout << endl << MaxiMin << endl;
		if(MaxiMin == true){
			cout << "\n\nEl valor " << matriz[fila][columna] << " en la posicion (" << fila << ", " << columna << ") es un MaxiMin";
		}
		
		fila++;
		columna = 0;
		MaxiMin = true;
	}
	
	//Ejercicio d)
	
	int util_lineas_b, util_columnas_b;
	int aux_lineas, aux_columnas;
	
	do{
		cout << "\n\nIntroduce el Numero de Lineas de otra Matriz: ";
		cin >> util_lineas_b;
	}while(util_lineas_b < 1);
	
	do{
		cout << "\n\nIntroduce el Numero de Columnas de otra Matriz: ";
		cin >> util_columnas_b;
	}while(util_columnas_b < 1);
	
	if(util_lineas == util_columnas_b){
		int nuevaMatriz[util_lineas_b][util_columnas_b];
		for(int i = 0; i < util_lineas_b; i++){
			for(int j = 0; j < util_columnas_b; j++){
				do{
					cout << "\n\nIntroduce el Valor de la Otra Matriz en la linea " << i << " y columna " << j << ":";
					cin >> aux;
				}while(aux < 0);
				nuevaMatriz[i][j] = aux;
			}	
		}
		int matrizSoporte[util_columnas][util_lineas_b];
		for(int i = 0; i < util_columnas; i++){
        for(int j = 0; j < util_lineas_b; j++){
            matrizSoporte[i][j] = 0;
      	}
		}
		for(int i = 0; i < util_columnas; i++){
			for(int j = 0; j < util_lineas_b; j++){
				for(int z = 0; z < util_columnas_b; z++){
					matrizSoporte[i][j] += matriz[i][z] * nuevaMatriz[z][j];
				} 	
			}
		}  
		for(int i = 0; i < util_columnas; i++){
			for(int j = 0; j < util_lineas_b; j++){
				cout << "\n\nEn la posicion (" << i << ", " << j << ") el valor es: " << matrizSoporte[i][j];
			}
		}	
	}else{
		cout << "\n\nLas dos matrices no son compatibles para ser multiplicadas";
	}
	
	system("pause");
	return 0;
}
