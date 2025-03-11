#include<iostream>
#include<conio.h>
//*capturar el nombre de tres personas*
using namespace std;

int main()
{
	// declarar el vector 
	string per[3];
	//captura de datos 
	for(int n=0; n<3;n++)
	
	{
		cout<<(n+1)<<"ingrese un nombre...";
		cin>>per[n];
		for(int n=0; n<3;n++)
		{
			cout<<"registro #"<<(n+1)<<endl;
			cout<<"usuario...:"<<per[n]<<endl;
		}
	}//fin for
	
	
	
	
	
	
	
	
	
	
	
	
	
	getch();
	return 0;
}//fin main

