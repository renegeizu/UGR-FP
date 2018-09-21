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
			int tamanho = 0;
			do{
				if(caracteres[tamanho] >= 'A' && caracteres[tamanho] <= 'Z'){
					Elimina(tamanho);
					tamanho = 0;
				}else{
					tamanho++;
				}
			}while(tamanho != contador);
			return ToString();
		}
		//Prec: posicion >= 0 && posicion < contador
		void Elimina (int posicion){
			if (posicion >= 0 && posicion < contador){
				int tope = contador-1;
				for (int i = posicion ; i < tope ; i++)
					caracteres[i] = caracteres[i+1];
				contador--;
			}
		}
		//Forma correcta
		void EliminaMayusculasError(){
			for (int i=0; i<total_utilizados; i++)
				while (isupper(vector_privado[i]))
					Elimina(i);
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
