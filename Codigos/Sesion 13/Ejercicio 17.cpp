/*
 * Se está diseñando un sistema web que recolecta datos personales de un usuario y, en un momento dado, debe sugerirle un nombre de
 * usuario (login). Dicho login estará basado en el nombre y los apellidos; en concreto estará formado por los N primeros caracteres de 
 * cada nombre y apellido (en minúsculas, unidos y sin espacios en blanco). Por ejemplo, si el nombre es "Antonio Francisco Molina Ortega" 
 * y N=2, el nombre de usuario sugerido será "anfrmoor".
 *
 * Debe tener en cuenta que el número de palabras que forman el nombre y los apellidos puede ser cualquiera. Además, si N es mayor que alguna 
 * de las palabras que aparecen en el nombre, se incluirá la palabra completa. Por ejemplo, si el nombre es "Ana CAMPOS de la Blanca" y N=4, 
 * entonces la sugerencia será "anacampdelablan" (observe que se pueden utilizar varios espacios en blanco para separar palabras).
 *
 * Implemente la clase Login que tendrá como único dato miembro el tamaño N. Hay que definir el método Codifica que recibirá una cadena de 
 * caracteres (tipo string) formada por el nombre y apellidos (separados por uno o más espacios en blanco) y devuelva otra cadena con la sugerencia de 
 * login.
 *
 * Los únicos métodos que necesita usar de la clase string son size y push_back. Para probar el programa lea los caracteres de la cadena uno a uno con 
 * cin.get(), hasta que el usuario introduzca el carácter #.
 */

#include <iostream>

using namespace std;

class Login{
	private:
		int num_caracteres_a_coger;
	public:
		Login (int numero_caracteres_a_coger):num_caracteres_a_coger(numero_caracteres_a_coger){
		
		}
		string Codifica(string nombre_completo){
			string usuario = "";
			int cont = 0;
			for(int i = 0; i < nombre_completo.size(); i++){
				if(nombre_completo[i] != ' ' && nombre_completo[i] != '#' && nombre_completo[i] != '\n'){
					if(cont != num_caracteres_a_coger){
						usuario.push_back(tolower(nombre_completo[i]));
						cont++;
					}
				}else{
					cont = 0;
				}
			}
			return usuario;
		}
};

int main(){
	string nombre_completo = "";
	char caracter;
	int tamanho = 0;
	
	do{
		cout << "\nIntroduce el numero de caracteres a coger: ";
		cin >> tamanho;
	}while(tamanho < 1);
	
	Login sistema_acceso(tamanho);
	
	cout << "\nIntroduce el nombre completo terminado en #: ";
	caracter = cin.get();
	
	while(caracter != '#'){
		nombre_completo.push_back(caracter);
		caracter = cin.get();
	}
	
	cout << "\nPara el nombre " << nombre_completo << " el usuario es " << sistema_acceso.Codifica(nombre_completo) << endl;
	
	system("pause");
	return 0;
}
