#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	//crear matriz 2,2
	int v1[2][2];
	
	//captuara de datos
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<"ingrese un valor numerico...";
			cin>>v1[i][j];
			
			
		}
	}
	
	//mostar informacion
	 for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<"valor ingresado: "<<v1[i][j]<<endl;
		}
	}
	
	
	
	
	
	getch();
	return 0;
}//fin mainn
