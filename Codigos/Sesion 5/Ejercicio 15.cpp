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

int main() {
	char letra_original, letra_convertida;
	string tipo = "";
	
	cout << "Introduce la Letra Mayuscula o Minuscula: ";
   cin >> letra_original;
   
	if(letra_original >= 'a' && letra_original <= 'z'){
      letra_convertida = minusculasMayusculas(letra_original);
      tipo = "minuscula y en mayuscula es ";
	}else if(letra_original >= 'A' && letra_original <= 'Z'){
      letra_convertida = mayusculasMinusculas(letra_original);
      tipo = "mayuscula y en minuscula es ";
	}else{
      letra_convertida = letra_original;
		tipo = "no alfabetico y el valor original es ";
	}
	
	cout << "El caracter introducido es " << tipo << letra_convertida << endl;
	
	system("pause");
   return 0;
}
