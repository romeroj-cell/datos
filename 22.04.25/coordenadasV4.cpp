#include <iostream>
#include <conio.h>>

using namespace std;
int main()
{
	//matriz 3x3
	int v1 [3][3];
	int z=1;
	//captura de datos
	for(int f=0;f<3;f++)
	{
	   for(int c=0;c<3;c++)
	   {
	   	v1[f][c]=(c+1);
	   	
    	}//fin for columnas 	
	} //fin for
	
	//mostrar datos
		for(int f=0;f<3;f++)
	{
	   for(int c=0;c<3;c++)
	   {
	   	cout<<v1[f][c]<<"   ";
		   }//fin for columnas
		   cout<<endl; 	
	} //fin for
	
	
	
	
	getch();
	return 0;
}//fin mainn
