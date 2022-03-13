#include "cine.hpp"

Cine::Cine()
{
	cout<<"CINE CREADO"<<endl;
}

void Cine::mostrarCatalogo()
{
	cout<<"Cartelera"<<endl;
	for(int i=0;i<7;i++)	
	{
	cout<<"["<<i<<"]->";
	p[i].toString();	
	}
	cout<<"\n";
}
//Registra una pelicula en el cine
void Cine::registrarPelicula()
{
	
		if(cont<7)
		{
			string aux,aux2;
			int duracionAux;
			cout<<"Ingrese nombre de pelicula: ";
			cin>>aux;
			cout<<"Ingrese director de pelicula: ";
			cin>>aux2;
			cout<<"Ingrese duracion de pelicula (m): ";
			cin>>duracionAux;
			
			Pelicula Paux(aux,aux2,duracionAux);
			
			p[cont] = Paux;
			
			cont++;
			
			cout<<"Prueba 1";
			cout<<"cont"<<cont;
			cout<<"aux"<<aux;
			cout<<"aux2"<<aux2;
			cout<<"duracion"<<duracionAux;
			
		}else
		{
			cout<<"Arreglo de peliculas lleno...";
		}
}