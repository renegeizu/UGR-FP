#include <iostream>

using namespace std;

int main(){
	int inicial, tope;
	
	do{
		cout << "\nIntroduce el valor inicial: ";
		cin >> inicial;
	}while(inicial < 0);
	
	do{
		cout << "\nIntroduce el numero de filas: ";
		cin >> tope;
	}while(tope < 0);
	
	for(int i = inicial; i < inicial+tope; i++){
		for(int j = i; j < inicial+tope; j++){
			cout << j << " ";
		}
		cout << endl;
	}
	
	cout << endl;
	
	for(int i = inicial; i < inicial+tope; i++){
		for(int j = i; j < i+tope; j++){
			if(j > 9)
				cout << j << " ";
			else
				cout << " " << j << " ";
		}
		cout <<endl;
	}
	
	system("pause");
	return 0;
}
