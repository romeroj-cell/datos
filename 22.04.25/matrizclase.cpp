#include <iostream>
#include <conio.h>>

using namespace std;
int main()
{
	//crear matriz 8,4
	int v=2,d=3;//v-> vemdeores  d ->dias
	int ventas[v][d];
	//llenar matriz de 0
	for(int i=0;i<v;i++)
	{
		for(int j=0;j<d;j++)
		{
			ventas[i][j]=0;
		}
	}
	
	for(int i=0;i<v;i++)
	{
		for(int j=0;j<d;j++)
		{
			cout<<ventas[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	getch();
	return 0;
}//fin mainn
