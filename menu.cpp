#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	//declarar variables
	int opc;
	
	do
	{
		system("cls");
		cout<<("menu")<<endl;
		cout<<("1. nmenu 1")<<endl;
		cout<<("2. nmenu 2")<<endl;
		cout<<("3. nmenu 3")<<endl;
		cout<<("4. salir")<<endl;
		cout<<("seleccione opcion de menu..:");
		cin>>opc;
		switch(opc)
		{
		case 1:system("cls");
		cout<<"modulo 1"<<endl;
		system("pause");
			break;
			
		case 2:system("cls");
		cout<<"modulo 2"<<endl;
		system("pause");
			break;
			
		case 3:system("cls");
		cout<<"modulo 3"<<endl;
		system("pause");
			break;
			
		case 4:system("cls");
		cout<<"salir"<<endl;
		system("pause");
			break;
			
		default:system("cls");
		cout<<"opcion no valida"<<endl;
		system("pause");
			break;
			
		}//fin switch
	
}while(opc!=4);
	
	
	
		getch();
	return 0;
}//fin main

