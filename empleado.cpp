#include<iostream>
#include<conio.h>

using namespace std;
//estructura empleado
struct empleado
{
	int cod_saldo;
	char nom_empleado[20];
	
};

//estructura contacto
struct contato
{
	char nom_dir[20];
	char nom_ciu[20];
	char nom_depar[20];
	struct empleado esclavo;
	
}empl[2]; 

int main()
{

	//capturar datos
	for(int i=0;i<2;i++)
	{
		fflush(stdin);
	cout<<"ingrese la direccion...:";
	cin>>empl[i].nom_dir;
	fflush(stdin);
	cout<<"ingrese el nombre de la ciudad...:";
	cin.getline(empl[i].nom_ciu,20,'\n');
	cout<<"ingrese el departamento..:";
	cin>>empl[i].nom_depar;
	//captura datos del empleado
		cout<<"saldo....: ";
		cin>>empl[i].esclavo.cod_saldo;
			fflush(stdin);
		cout<<"nombre...: ";
		cin.getline(empl[i].esclavo.nom_empleado,20,'\n');
		cout<<endl;
	
	}
	//salida
	for(int i=0;i<2;i++)
	{
		cout<<"direccion...:"<<empl[i].nom_dir<<endl;
		cout<<"ciudad...:"<<empl[i].nom_ciu<<endl;
		cout<<"departamento...:"<<empl[i].nom_depar<<endl;
		cout<<"saldo...:"<<empl[i].esclavo.cod_saldo<<endl;
		cout<<"nombre empleado...:"<<empl[i].esclavo.nom_empleado<<endl;
	}
	
	
   getch();
   return 0;	
}
