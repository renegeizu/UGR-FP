#include <iostream>

using namespace std;

int main(){
	int tope, suma=0;
	
	do{
		cout << "Dame el numero tope: ";
		cin >> tope;
	}while(tope < 1);
	
	for(int i = 1; suma+i <= tope; i++){
		suma += i;
		cout << "\nEl " << suma << " es triangular"; 
	}
	
	cout << endl;
	
	system("pause");
	return 0;
}
