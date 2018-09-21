#include <iostream>

using namespace std;


char minusculasMayusculas(char letra){
	// Pasar Minuscula a Mayuscula
	letra -= 'a' - 'A'; // Metodo 1
	// letra += 'A' - 'a'; // Metodo 2
	// letra = 'A' + (letra - 'a'); // Metodo 3
	return letra;
}

char mayusculasMinusculas(char letra){
	// Pasar Mayuscula a Minuscula
	letra -= 'A' - 'a'; // Metodo 1
	// letra += 'a' - 'A'; // Metodo 2
	// letra = 'a' + (letra - 'A'); // Metodo 2
	return letra;
}

enum class TipoCaracter{mayuscula, minuscula, no_alfabetico};

int main(){
	char letra_original, letra_convertida;
	TipoCaracter tipo;
	
	cout << "Introduce la Letra Mayuscula o Minuscula: ";
   cin >> letra_original;
   
   
	if(letra_original >= 'a' && letra_original <= 'z'){
      letra_convertida = minusculasMayusculas(letra_original);
      tipo = TipoCaracter::minuscula;
	}else if(letra_original >= 'A' && letra_original <= 'Z'){
      letra_convertida = mayusculasMinusculas(letra_original);
      tipo = TipoCaracter::mayuscula;
	}else{
      letra_convertida = letra_original;
		tipo = TipoCaracter::no_alfabetico;
	}
	
	switch (tipo){
		case TipoCaracter::mayuscula:
			cout << "El caracter introducido es " << letra_original << " y en minuscula es " << letra_convertida << endl;
			break;
		case TipoCaracter::minuscula:
			cout << "El caracter introducido es " << letra_original << " y en mayuscula es " << letra_convertida << endl;
			break;
		case TipoCaracter::no_alfabetico:
			cout << "El caracter introducido es " << letra_original << " y no es alfabetico" << endl;
			break;
	}
	
	system("pause");
	return 0;
}
