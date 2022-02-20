#include <iostream>
using namespace std;
class Persona{
	//atributos
	protected : string nombres,apellidos,direccion,fecha_nacimiento;
				int telefono;
	//metodos
	protected :
	//constructor
	Persona(string nom,string ape,string dir,int tel,string fe){
		nombres=nom;
		apellidos=ape;
		direccion=dir;
		telefono=tel;
		fecha_nacimiento=fe;
		
	}
	
	//metodo
	void agregar();
	void mostrar();
};
