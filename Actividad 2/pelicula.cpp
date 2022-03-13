#include "pelicula.hpp"

Pelicula::Pelicula()
{
	cout<<"CONSTRUCTOR Pelicula()"<<endl;
}
//parametrizado
Pelicula::Pelicula(string nombre,string director,int duracionMinutos)
{
	this->nombre=nombre;
	this->director=director;
	this->duracionMinutos=duracionMinutos;
	for(int i=0;i<6;i++)
	this->horarioPelicula[i]=1;
}

string Pelicula::toString()
{
	string cadena;  
	
	cadena="";
	cadena+="Nombre: ";
	cadena+=getNombre();
	cadena+="Director: ";
	cadena+=getDirector();
	
		for(int i=0;i<6;i++)
		{
			cadena += "Funcion ";
			cadena += to_string(i+1);
			cadena += " ";
			cadena += to_string(horarioPelicula[i]);
			cadena += "\n";		
		}
	
		return cadena;
}

/*void Pelicula::setHorario()
{
	//2 horas
	//50 minutos
	int posHorarioH,posHorarioM;
	for(int i=0;i<6;i++)
	{
	cout<<"Ingrese la hora de comienzo de la funcion"<<i+1; // 9.30
	cin>>posHorarioH;
	horaElegida = (int)posHorarioH;
	aux = posHorarioH-horaElegida; // = 0.30
	minutoElegido = aux*100;
	cout<<"Ingrese la hora de la funcion"<<i+1; // i=0 i+1=1
	cin>>posHorarioM; //9 horario[0] = {9,11,13,15,17,19} horario[1]=poshorario+duracion+limpieza; horario
	if(posHorario>=9&&posHorario<22)
	{
		if(duracionMinutos)
		horarioPelicula[i] = posHorario;
	}
	
	}

}*/

string Pelicula::getDirector()
{
	return director;
}

string Pelicula::getNombre()
{
	return nombre;
}


