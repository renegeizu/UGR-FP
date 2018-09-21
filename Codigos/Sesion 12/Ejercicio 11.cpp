#include<iostream>

using namespace std;

class ContadorMayusculas{
	private:
		int caracteres['Z'-'A'+1] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	public:
		void IncrementaConteo(char mayuscula){
			if(mayuscula >= 'A' && mayuscula <= 'Z'){
				caracteres[(mayuscula-'A')]++;
			}
		}
		int CuantasHay (char mayuscula){
			if(mayuscula >= 'A' && mayuscula <= 'Z'){
				return caracteres[(mayuscula-'A')];
			}
			return 0;
		}
		string ToString(){
			string cadena = "";
			char letra;
			for(int i = 0; i < ('Z'-'A'+1); i++){
				letra = 'A'+i;
				cadena = cadena + "\nLa letra " + letra + " aparece " + to_string(caracteres[i]) + " veces";
			}
			return cadena;
		}
};

int main(){
	char letra;
	ContadorMayusculas listado;
	
	cout << "\nIntroduce un Caracter ('.' para terminar): " << endl;
	cin >> letra;
	
	while(letra != '.'){
		listado.IncrementaConteo(letra);
		cout << "\nIntroduce un Caracter ('.' para terminar): " << endl;
		cin >> letra;
	}
	
	for(int i = 0; i <= ('Z'-'A'); i++){
		letra = 'A'+i;
		cout << "\nLa letra " << letra << " aparece " << listado.CuantasHay(letra) << " veces";
	}
	
	system("pause");
	return 0;
}
