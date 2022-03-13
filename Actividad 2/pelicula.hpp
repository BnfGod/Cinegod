#ifndef PELICULA_HPP
#define PELICULA_HPP
#include <iostream>
#include<sstream>
using namespace std;

class Pelicula
{
	private:

	string nombre; //Nombre de la pelicula(titulo)
	string director; //Nombre del director
	int duracionMinutos;	//Duración de la película (minutos)
	int horarioPelicula[6]; //5 HORARIOS APROX UNA PELICULA DURA 2 HORAS HASTA 2 Y MEDIA
	
	public:
	//Constructores
		Pelicula();
		Pelicula(string nombre,string director,int duracionMinutos);
	//Métodos
		void setHorario();
		string toString(); //Devuelve la información de la pelicula c/tipo: nombre,director,duracion
		string getNombre();
		string getDirector();
		void getHorario();
		
};


#endif