#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	//declarar variable
	int opc,tam=2;
		// declarar el vector 
	string productos[tam];
	string codigo[tam];
	string precio[tam];
	do
	{
		system("cls");
		cout<<("almacen de cadena ")<<endl;
		cout<<("1. capturar productos")<<endl;
		cout<<("2. reporte de productos ")<<endl;
		cout<<("3. nmenu 3")<<endl;
		cout<<("4. salir")<<endl;
		cout<<("seleccione opcion de menu..:");
		cin>>opc;
		switch(opc)
		{
		case 1:system("cls");
	    	cout<<"modulo de captura de productos\n"<<endl;
	    	//captura de productos
			for(int n=0; n<tam;n++)
			{
				cout<<"producto # {"<<(n+1)<<"]"<<endl;
				cout<<"referencia producto...:";
				cin>>codigo[n];
				cout<<"producto.....:";
				cin>>productos[n];
				cout<<"producto precio...$";
				cin>>precio[n];
				cout<<endl;
			}//fin for
			system("pause");
			break;
			
		case 2:system("cls");
		cout<<"modulo reporte de productos\n"<<endl;
			for(int n=0; n<tam;n++)
		{
			cout<<"producto # {"<<(n+1)<<"]"<<endl;
			cout<<"referencia.."<<codigo[n]<<endl;
			cout<<"producto...:"<<productos[n]<<endl;
			cout<<"producto precio...$"<<precio[n]<<endl;
			cout<<endl;
		}
		system("pause");
			break;
			
		case 3:system("cls");
		cout<<"modulo 3 en proceso"<<endl;
		system("pause");
			break;
			
		case 4:system("cls");
		cout<<"salir"<<endl;
		system("pause");
			break;
			
		default:system("cls");
		cout<<"opcion no valida"<<endl;
			for(int n=0; n<3;n++)
			{
				cout<<(n+1)<<"producto...:";
				cin>>productos[n];
			}//fin for
		system("pause");
			break;
			
		}//fin switch
	
}while(opc!=4);
	
	
	
	
		
	getch();
	return 0;
}//fin main
