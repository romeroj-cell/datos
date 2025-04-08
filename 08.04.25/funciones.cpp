#include<iostream>
#include<conio.h>

using namespace std;
//definir funciones
void mensaje();
void mensaje_1();
void mensaje_anidado();


int main()
{
	//funcion vacia
	//llamada
	mensaje();
	mensaje();
	mensaje_1();
	mensaje();
	void mensaje_anidado();
	
	
	
	
	
	
	
	getch();
	return 0;
}//fin main
void mensaje()
{
	cout<<"mensaje uno"<<endl;
}//fin funcion

void mensaje_1()
{
	cout<<"mesaje otro "<<endl;
}//fin funcion
void mensaje_anidado()
{
	cout<<"mensaje anidado"<<endl;
	mensaje();
	mensaje_1();
}//fin funcion
