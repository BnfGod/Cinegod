#include "menu.hpp"
#include "cine.hpp"
#include"sala.hpp"

int main() {
	Menu menu;
	int opc;
	Cine cine1;
	
	do
	{	
		opc = menu.menuPrincipal();
		switch(opc)
		{
			case 1: 
			{	
				cine1.mostrarCatalogo();//Recibe el arreglo de salas, y retorna el método toString para imprimir 
				break;					//la informacion de las peliculas registradas, y el horario donde se pueden ver
			}
			
			case 2: 
			{
					//venderTicket();
				break;
			}
			case 3:	
			{
					do{
						opc = menu.menuCliente();
						switch(opc)
						{
							case 1: break;
							case 2: break;
							case 3: break;
						}
					} while(opc!=3);
					break;
			}
			case 4: cine1.registrarPelicula();
					break;
			case 5: //eliminarPelicula();
					break;
			case 6: break;
		}	
	}while(opc!=6);
	
	system("pause");
	return 0;
}