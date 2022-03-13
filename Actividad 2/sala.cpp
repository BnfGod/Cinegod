#include"sala.hpp"

//CONSTRUCTOR SALA
Sala::Sala()
{
	for(int i=0;i<7;i++)
	{
		for(int j=0;j<8;j++)
		{
			asientos[i][j] = 'D';
		}
	}
	
	for(int i=0;i<7;i++)
	{
		for(int j=0;j<8;j++)
		{
			cout<<"["<<asientos[i][j]<<"]";
		}
		cout<<endl;
	}
	
	cout<<"CONSTRUCTOR Sala()"<<endl; 
}

