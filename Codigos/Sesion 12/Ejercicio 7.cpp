#include <iostream>

using namespace std;

class SecuenciaCaracteres{
	private:
		static const int TAM = 100;
		char caracteres[TAM];
		int contador = 0;
	public:
		//Prec: caracter != #
		void SetCaracter(char caracter){
			if(contador <= TAM){
				if(caracter != '#'){
					caracteres[contador] = caracter;
					contador++;
				}
			}
		}
		bool EsPalindromo(){
			bool palindromo = true;
			for(int i = 0; i <= contador/2; i++){
				if(caracteres[i] != caracteres[contador-i-1])
					palindromo = false;
			}
			return palindromo;
		}
		string Invierte(){
			for(int i = 0; i <= contador; i++){
				IntercambiaComponentes(i, contador-i-1);
			}
			return ToString();
		}
		int NumeroMayusculas(){
			int mayusculas = 0;
			for(int i = 0; i <= contador; i++){
				if(caracteres[i] >= 'A' && caracteres[i] <= 'Z')
					mayusculas++;
			}
			return mayusculas;
		}
		string ToString(){
			string aux = "";
			for(int i = 0; i < contador; i++){
				aux = aux + " " + caracteres[i];
			}
			return "{"+aux+" }";
		}
		//Prec: posA >= 0 && posB < contador && posA < posB
		void IntercambiaComponentes(int posA, int posB){
			char a, b;
			if(posA >= 0 && posB < contador){
				a = caracteres[posA];
				b = caracteres[posB];
				caracteres[posA] = b;
				caracteres[posB] = a;
			}
		}
		string EliminaMayusculas(){
			for(int i = 0; i < contador; i++){
				if(caracteres[i] >= 'A' && caracteres[i] <= 'Z')
					Elimina(i);
			}
			return ToString();
		}
		//Prec: posicion >= 0 && posicion < contador
		void Elimina (int posicion){
			int auxiliar = posicion;
			int cont = posicion;
			char letra;
			bool estado = true;
			do{
				letra = caracteres[cont];
				if(letra < 'A' || letra > 'Z'){
					caracteres[auxiliar] = caracteres[cont];
					auxiliar++;
					estado = false;
				}
				cont++;
			}while(estado);
			contador = auxiliar;
		}
		
		void SinRepetidos (){
			int auxiliar = 1;
			char letra = caracteres[0];
			for(int i = 1; i < contador; i++){
				if(caracteres[i] != letra){
					caracteres[auxiliar] = caracteres[i];
					auxiliar++;
					letra = caracteres[i];
				}
			}
			contador = auxiliar;
		}
};

int main(){
	SecuenciaCaracteres caracteres;
	char caracter;
	
	cout << "Introduce un caracter (# para salir): " << endl;
	caracter = cin.get();
	
	while(caracter != '#'){
		caracteres.SetCaracter(caracter);
		cin.get();
		cout << "Introduce un caracter (# para salir): " << endl;
		caracter = cin.get();
	}
	
	cout << endl << "El Vector sin Mayusculas: " << caracteres.EliminaMayusculas() << endl;
	
	system("pause");
	return 0;
}
