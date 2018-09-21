#include <iostream>
#include <sstream>

using namespace std;

class AlumnoFP{
	private:
		string nombre, apellido, dni;
		float teoria, parcial_pract1, parcial_pract2, participacion_clase;
		//Prec: 10 => teoria > 0 && 10 => parcial_pract1 > 0 && 10 => parcial_pract2 > 0 && 10 => participacion_clase > 0
		//Agrega los valores a las variables
		void SetAlumno(string nombre, string apellido, string dni, int teoria, int parcial_pract1, int parcial_pract2, int participacion_clase){
			this->nombre = nombre;
			this->apellido = apellido;
			this->dni = dni;
			this->teoria = teoria;
			this->parcial_pract1 = parcial_pract1;
			this->parcial_pract2 = parcial_pract2;
			this->participacion_clase = participacion_clase;
		}
	public:
		//Prec: 10 => teoria > 0 && 10 => parcial_pract1 > 0 && 10 => parcial_pract2 > 0 && 10 => participacion_clase > 0
		//Constructor
		AlumnoFP(string nombre, string apellido, string dni, int teoria, int parcial_pract1, int parcial_pract2, int participacion_clase){
			SetAlumno(nombre, apellido, dni, teoria, parcial_pract1, parcial_pract2, participacion_clase);
		}
		//Prec: Ninguna
		//Constructor
		AlumnoFP(string nombre, string apellido, string dni){
			SetAlumno(nombre, apellido, dni, 0, 0, 0, 0);
		}
		//Prec: Ninguna
		//Devuelve la nota final del alumno
		float NotaFinal(){
			return ((this->teoria*70)/100)+((this->parcial_pract1*5)/100)+((this->parcial_pract2*15)/100)+((this->participacion_clase*10)/100);
		}
		//Prec: Ninguna
		//Devuelve un string con las notas suspensas del alumno
		string Suspensos(){
			string texto = "";
			stringstream stringConversor;
			
			if(this->teoria < 5.0){
				stringConversor << "\nLa Nota de Teoria esta Suspensa con un " << this->teoria;
				texto += stringConversor.str();
				stringConversor.str(string());
			}
			if(parcial_pract1 < 5.0){
				stringConversor << "\nLa Nota del Parcial de Practicas 1 esta Suspensa con un " << this->parcial_pract1;
				texto += stringConversor.str();
				stringConversor.str(string());
			}
			if(parcial_pract2 < 5.0){
				stringConversor << "\nLa Nota del Parcial de Practicas 2 esta Suspensa con un " << this->parcial_pract2;
				texto += stringConversor.str();
				stringConversor.str(string());
			}
			if(participacion_clase < 5.0){
				stringConversor << "\nLa Nota de la Participacion en Clase esta Suspensa con un " << this->participacion_clase;
				texto += stringConversor.str();
			}
			
			return texto;
		}
};

int main(){
	string nombre, apellido, dni;
	int teoria, parcial_pract1, parcial_pract2, participacion_clase;
	
	cout << "\nIntroduce el Nombre del Alumno: ";
	cin >> nombre;
	
	cout << "\nIntroduce el Apellido del Alumno: ";
	cin >> apellido;
	
	cout << "\nIntroduce el DNI del Alumno: ";
	cin >> dni;
	
	do{
		cout << "\nIntroduce la Nota de Teoria: ";
		cin >> teoria;
	}while(teoria < 0 || teoria > 10);
	
	do{
		cout << "\nIntroduce la Nota del Parcial de la Practica 1: ";
		cin >> parcial_pract1;
	}while(parcial_pract1 < 0 || parcial_pract1 > 10);
	
	do{
		cout << "\nIntroduce la Nota del Parcial de la Practica 2: ";
		cin >> parcial_pract2;
	}while(parcial_pract2 < 0 || parcial_pract2 > 10);
	
	do{
		cout << "\nIntroduce la Nota de la Participacion en Clase: ";
		cin >> participacion_clase;
	}while(participacion_clase < 0 || participacion_clase > 10);
	
	AlumnoFP alumno(nombre, apellido, dni, teoria, parcial_pract1, parcial_pract2, participacion_clase);
	
	cout << endl <<"\nLa nota final del alumno es " << alumno.NotaFinal() << endl;
	
	cout << endl << alumno.Suspensos() << endl << endl;
	
	system("pause");
	return 0;
}
