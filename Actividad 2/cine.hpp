#ifndef CINE_HPP
#define CINE_HPP
#include <iostream>
#include "pelicula.hpp"
#include "sala.hpp"
#include "salag.hpp"
using namespace std;

class Cine
{
	private:

	Pelicula p[7];//peliculaauxiliar p[0] = Paux; (Pelicula recien creada)
	Sala s[5];
	int cont = 0;
	//SalaG sG[2];
	
	public:
		Cine();
		void mostrarCatalogo();//Muestra el catalogo de peliculas, si y solo si hay peliculas registradas en una sala
		void registrarPelicula();//Registro pelicula en una sala
		void venderTicket(); //Registra un cliente(nombre,id), selecciona asiento de pelicula a ver, 
};


#endif