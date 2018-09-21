#include <iostream>

using namespace std;

//Comprueba si es minuscula
bool Minusculas(char a){
	if(a >= 'a' && a <= 'z')
		return true;
	else 
		return false;
}

int main(){
	char min_izda, max_izda, min_dcha, max_dcha;
	
	do{
		cout << "Introduce el caracter maximo por la izquierda (minuscula): ";
		cin >> max_izda;
	}while(!Minusculas(max_izda));
	
	do{
		cout << endl << "Introduce el caracter minimo por la izquierda (minuscula): ";
		cin >> min_izda;
	}while(!Minusculas(min_izda) || min_izda > max_izda);
	
	do{
		cout << endl << "Introduce el caracter maximo por la derecha (minuscula): ";
		cin >> max_dcha;
	}while(!Minusculas(max_dcha));
	
	do{
		cout << endl << "Introduce el caracter minimo por la derecha (minuscula): ";
		cin >> min_dcha;
	}while(!Minusculas(min_dcha) || min_dcha > max_dcha);
	
	for(char i = min_izda; i <= max_izda; i++ ){
		cout << endl;
		for(char j = min_dcha; j <= max_dcha; j++){
			cout << i << j << " ";
		}	
	}
	
	system("pause");
	return 0;
}
