#include <iostream>
#include <conio.h>

using namespace std;
int numero =0;
string validarganador();
int main()
{
	// matriz 3,3
	string raya [3][3];
	int f,c;
	
	
	raya[0][0]="1";
	raya[0][1]="2";
	raya[0][2]="3";
	
	raya[1][0]="4";
	raya[1][1]="5";
	raya[1][2]="6";
	
	raya[2][0]="7";
	raya[2][1]="8";
	raya[2][2]="9";
	
	//imprimir matriz
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		}
	}
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<raya[i][j]<<" ";
		}
		cout<<endl;
	}
	do{ 
	cout<<"numero de jugadas 9 "<<endl;
	// j1
	cout<<"jugador 1\n";
	cout<<"indique fila... ";
	cin>>f;
	cout<<"indique columna... ";
	cin>>c;
	raya[f][c]="O";
	
	//ver matriz
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		}
	}
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<raya[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	//j2
	cout<<"jugador 2\n";
		cout<<"indique fila... ";
	cin>>f;
	cout<<"indique columna... ";
	cin>>c;
	raya[f][c]="x";
	
	//ver matriz
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		}
	}
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<raya[i][j]<<" ";
		}
		cout<<endl;
	}
	   }while(numero=9);
	   
	   
	
	
	
	
	
	
	getch();
	return 0;
}//fin mainn

string validarganador(string raya [3][3])
{
		for(int i=0;i<3;i++)
		{
			if(raya [i][0] == raya[i][1] && raya[i][1] == raya[i][2])
			{
				return raya[i][0];
			}
		}
		
			for(int j=0;j<3;j++)
			{
				if(raya [0][j] == raya[1][j] && raya[1][j] == raya[2][j])
				{
					return raya[0][j];
				}
			}
			
		    for(int i=0;i<3;i++)
		{
			if(raya [0][0] == raya[1][1] && raya[1][1] == raya[2][2])
	 	{
				return raya[0][0];
			}
			if(raya [0][2] == raya[1][1] && raya[1][1] == raya[2][0])
   {
				return raya[0][2];
			}
			return"";
			
		}	
}
