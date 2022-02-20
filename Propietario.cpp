#include "Persona.cpp"
#include <iostream>
using namespace std;
class Propietario : Persona{
	//atributos
	private: string nit;
			 double cui;
	public : Propietario(string nom,string ape,string dir,int tel,string fe,string n,double c): Persona(nom,ape,dir,tel,fe)
	{nit=n; cui=c;
	}
	
	//metodo set agregar
	void setNombres(string nom){nombres=nom;}
	void setApellidos(string ape){apellidos=ape;}
	void setDireccion(string dir){direccion=dir;}
	void setTelefono(int tel){telefono=tel;}
	void setFecha_nacimiento(string fe){fecha_nacimiento=fe;}
	void setNit(string n){nit=n;}
	void setCui(double c){cui=c;}
	
	//metodo get mostrar
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	int    getTelefono(){return telefono;}
	string getFecha_nacimiento(){return fecha_nacimiento;}
	string getNit(){return nit;}
	double getCui(){return cui;}
	
};

