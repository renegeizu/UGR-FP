#include<iostream>

using namespace std;

int main(){
	char letra;
	int caracteres['Z'-'A'+1] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	
	cout << "\nIntroduce un Caracter ('.' para terminar): " << endl;
	cin >> letra;
	
	while(letra != '.'){
		caracteres[(letra-'A')]++;
		cout << "\nIntroduce un Caracter ('.' para terminar): " << endl;
		cin >> letra;
	}
	
	for(int i = 0; i < ('Z'-'A'+1); i++){
		letra = 'A'+i;
		cout << "\nLa letra " << letra << " aparece " << caracteres[i] << " veces" << endl;
	}
	
	system("pause");
	return 0;
}
