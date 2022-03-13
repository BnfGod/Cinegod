#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <iostream>
#include <time.h>
using namespace std;

class Cliente
{
	private:
		string nombre;
		int id;

	public:
		Cliente();
		Cliente(string nombre,const Cliente &c);//Constructor con parametros
		
};

#endif