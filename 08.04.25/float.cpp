#include<iostream>
#include<conio.h>

using namespace std;
//declarar funcion
float promedio (float v1,float v2);
int main()
{
	float rp=0;
	//llamado de la funcion 
	rp=promedio(8,20);
	cout<<"el promedio es "<<rp<<endl;
	
	
	getch();
	return 0;
}//fin main


//deinir funciones
float promedio (float v1,float v2)
{
	//declarar variable
	float pro=0;
	//operacion
	pro=(v1+v2)/2;
	
	//salida
	
	return pro;
	
}
