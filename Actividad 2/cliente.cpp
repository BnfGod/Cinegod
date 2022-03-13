#include "cliente.hpp"

Cliente::Cliente()
{
	nombre="";
	id=-1;
	cout<<"Cliente por Defecto";
}
/*Cliente::Cliente(string nombre,const Cliente &c)
{
	int i=0;
    srand(time(NULL));
    cout<<"Nombre: ";
    cin.getline(nombre,'\n');
    c.id=0+rand()%2800;
    cout<<"Su id es: "<<.id<<endl;
    cout<<endl;
    c++;
	this->nombre=nombre;
	cout<<"Cliente por Parametros";
}

*/
