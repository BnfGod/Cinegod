#include "menu.hpp"

Menu::Menu()
{
	
}
int Menu::menuPrincipal()
{
	int opc;
	
	cout<<"---------- MENU ----------"<<endl;
	cout<<"1. Mostrar catalogo"<<endl;
	cout<<"2. Vender un ticket"<<endl;
	cout<<"3. Buscar y mostrar cliente"<<endl;
	cout<<"4. Agregar pelicula a sala"<<endl;
	cout<<"5. Eliminar pelicula de una sala"<<endl;
	cout<<"6. Salir"<<endl;
	cin>>opc;
	
	return opc;
}

int Menu::menuCliente()
{
	int opc;
	
	cout<<"---------- MENU BUSCAR ----------"<<endl;
	cout<<"1. Buscar por id"<<endl;
	cout<<"2. Buscar por nombre"<<endl;
	cout<<"3. Salir"<<endl;
	cin>>opc;
	
	return opc;
}