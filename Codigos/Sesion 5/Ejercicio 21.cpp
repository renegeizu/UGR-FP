#include <iostream>

using namespace std;

char mayusculasMinusculas(char letra){
	letra -= 'A' - 'a';
	return letra;
}

int main() {
	char letra_mayuscula, letra_minuscula;
	
	do{
		cout << "Introduce la Letra Mayuscula: ";
   	cin >> letra_mayuscula;
	}while(letra_mayuscula < 'A' || letra_mayuscula > 'Z');
	
	letra_minuscula = mayusculasMinusculas(letra_mayuscula);
	
	cout << "\nLa letra en minuscula es " << letra_minuscula << endl;
	
	system("pause");
   return 0;
}
