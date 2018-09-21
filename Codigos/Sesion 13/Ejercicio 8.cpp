/*
 * Sobre la clase SecuenciaCaracteres, añada un método EliminaRepetidos que quite los elementos repetidos, de forma que 
 * cada componente sólo aparezca una única vez. Se mantendrá la primera aparición, de izquierda a derecha. Por ejemplo, si
 * la secuencia contiene {'b','a','a','h','a','a','a','a','c','a','a','a','g'} después de quitar los repetidos, se quedaría 
 * como sigue: {'b','a','h','c','g'} Implemente los siguientes algoritmos para resolver ester problema:
 *
 * a) Usando un vector local sin_repetidos en el que almacenamos una única aparición de cada componente:
 * Recorrer todas las componentes de la secuencia original Si la componente NO está en "sin_repetidos", añadirla (al vector 
 * "sin_repetidos") Asignar las componentes de "sin_repetidos" a la secuencia
 *
 * b) El problema del algoritmo anterior es que usa un vector local, lo que podría suponer una carga importante de memoria si 
 * trabajásemos con vectores grandes. Por lo tanto, vamos a resolver el problema sin usar vectores locales. Si una componente 
 * está repetida, se borrará de la secuencia. Para borrar una componente, llamamos al método Elimina.
 *
 * c) El anterior algoritmo nos obliga a desplazar muchas componentes cada vez que encontremos una repetida. Proponga una alternativa 
 * (sin usar vectores locales) para que el número de desplazamientos sea el menor posible e impleméntela.
 */

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
	
	caracteres.SinRepetidos();
	
	cout << endl << "El Vector sin Mayusculas: " << caracteres.ToString() << endl;
	
	system("pause");
	return 0;
}
