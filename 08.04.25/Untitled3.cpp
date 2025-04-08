#include<iostream>
#include<conio.h>

using namespace std;
// decarar funcion
void suma(int d1, int d2);

int main()
{
	//llamado de la funcion
	suma(5,6);
	suma(8,8);
	suma(9,4);
	
	
	
	
	getch();
	return 0;
}// fin


//definir la funcion
void suma(int d1, int d2)
{
		int rs=0;
		
	//operacion
	
	 rs=d1+d2;
	 cout<<"la suma de "<<d1<<"+"<<d2<<"="<<rs<<endl;
	
}//fin funcion suma

