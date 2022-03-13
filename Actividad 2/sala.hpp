#ifndef SALA_HPP
#define SALA_HPP
#include "pelicula.hpp"

class Sala
{
	private:	
		//int horario[5];
		Pelicula pRegistrada; //guarda la informacion pelicula registrada
	protected:
		char asientos[7][8];
	public:
		Sala();
		
};


#endif