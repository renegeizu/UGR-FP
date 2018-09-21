#include <iostream>
#include <sstream>

using namespace std;

class Bicicleta{
	private:
		int estrella, pinhon;
		//Prec: 3 >= estrella > 0 && 7 => pinhon > 0
		//Asigna valores a las variables
		void SetBicicleta(int estrella, int pinhon){
			this->estrella = estrella;
			this->pinhon = pinhon;
		}
	public:
		//Prec: Ninguna
		//Inicia las variables con valores predeterminados
		Bicicleta(){
			SetBicicleta(1, 1);
		}
		//Prec: accion == 'S' || accion == 'B'
		//Incrementa la estrella en uno. Si llega a 3, no incrementa mas
		//Decrementa la estrella en uno. Si llega a 1, no baja mas
		void CambiarEstrella(char accion){
			if(accion == 'S' && this->estrella != 3){
				if(ComprobarEstado('E', accion))
					this->estrella++;
			}else if(accion == 'B' && this->estrella != 1){
				if(ComprobarEstado('E', accion))
					this->estrella--;
			}
		}
		//Prec: accion == 'T' || accion == 'S' || accion == 'C' || accion == 'B'
		//Incrementa el pinhon. Si llega a 7, no incrementa mas
		//Decrementa el pinhon. Si llega a 7, no baja mas
		void CambiarPinhon(char accion){
			if(accion == 'T'){
				if(this->pinhon != 7){
					if(this->pinhon == 6){
						if(ComprobarEstado('P', accion))
							this->pinhon++;
					}else{
						if(ComprobarEstado('P', accion))
							this->pinhon += 2;
					}
				}
			}else if(accion == 'S'){
				if(this->pinhon != 7){
					if(ComprobarEstado('P', accion))
						this->pinhon++;
				}
			}else if(accion == 'C'){
				if(this->pinhon != 1){
					if(this->pinhon == 2){
						if(ComprobarEstado('P', accion))
							this->pinhon--;
					}else{
						if(ComprobarEstado('P', accion))
							this->pinhon -= 2;
					}
				}
			}else if(accion == 'B'){
				if(this->pinhon != 1){
					if(ComprobarEstado('P', accion))
						this->pinhon--;
				}
			}
		}
		//Prec: Ninguna
		//Devuelve un string con las posiciones del pinhon y la estrella
		string GetPosicion(){
			stringstream stringConversor;
			stringConversor << "\nLa Estrella esta en la Posicion " << this->estrella << endl;
			stringConversor << "\nEl Pinhon esta en la Posicion " << this->pinhon << endl;
			return stringConversor.str();
		}
		//Prec: traccion == 'E' || traccion == 'P'
		//Prec: accion == 'B' || accion == 'S' || accion == 'C' || accion == 'T'
		//Devuelve true si puede hacer la subida/bajada, falso si no puede
		bool ComprobarEstado(char traccion, char accion){
			bool estado = true;
			if(traccion == 'E'){
				switch (accion){
					case 'B':
						if(this->estrella == 2 && this->pinhon >= 5)
							estado = false;
						if(this->estrella == 3 && (this->pinhon == 1 || this->pinhon == 7 ))
							estado = false;
						break;
					case 'S':
						if(this->estrella == 2 && this->pinhon <= 3)
							estado = false;
						if(this->estrella == 1 && (this->pinhon == 1 || this->pinhon == 7 ))
							estado = false;
						break;
				}
			}else if(traccion == 'P'){
				switch (accion){
					case 'B':
						if(this->estrella == 1 && this->pinhon-1 >= 5)
							estado = false;
						if(this->estrella == 2 && this->pinhon-1 == 1)
							estado = false;
						if(this->estrella == 3 && this->pinhon-1 <= 3)
							estado = false;
						break;
					case 'S':
						if(this->estrella == 1 && this->pinhon+1 >= 5)
							estado = false;
						if(this->estrella == 2 && this->pinhon+1 == 7)
							estado = false;
						if(this->estrella == 3 && this->pinhon+1 <= 3)
							estado = false;
						break;
					case 'C':
						if(this->pinhon == 2){
							if(this->estrella == 1 && this->pinhon-1 >= 5)
								estado = false;
							if(this->estrella == 2 && this->pinhon-1 == 1)
								estado = false;
							if(this->estrella == 3 && this->pinhon-1 <= 3)
								estado = false;
						}else{
							if(this->estrella == 1 && this->pinhon-2 >= 5)
								estado = false;
							if(this->estrella == 2 && this->pinhon-2 == 1)
								estado = false;
							if(this->estrella == 3 && this->pinhon-2 <= 3)
								estado = false;
						}
						break;
					case 'T':
						if(this->pinhon == 6){
							if(this->estrella == 1 && this->pinhon+1 >= 5)
								estado = false;
							if(this->estrella == 2 && this->pinhon+1 == 7)
								estado = false;
							if(this->estrella == 3 && this->pinhon+1 <= 3)
								estado = false;
						}else{
							if(this->estrella == 1 && this->pinhon+2 >= 5)
								estado = false;
							if(this->estrella == 2 && this->pinhon+2 == 7)
								estado = false;
							if(this->estrella == 3 && this->pinhon+2 <= 3)
								estado = false;
						}
						break;
				}
			}
			return estado;
		}
};

int main(){
	char traccion, accion;
	Bicicleta bike;
	
	cout << "E = Estrella, P = Pinhon, S = Subida, B = Bajada, T == Subida Doble (Pinhon), C = Bajada Doble (Pinhon)" << endl << endl;
	cout << "Introduce la secuencia separada por espacios (# para terminar): " << endl << endl;
	
	cin >> traccion;
	
	while(traccion != '#'){
		cin >> accion;
		if(traccion == 'E' && (accion == 'S' || accion == 'B'))
			bike.CambiarEstrella(accion);
		if(traccion == 'P')
			bike.CambiarPinhon(accion);
		cin >> traccion;
	}

	cout << bike.GetPosicion() << endl;
	
	system("pause");
	return 0;
}
