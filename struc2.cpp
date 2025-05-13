#include<iostream>
#include<conio.h>

using namespace std;
//creacion de struct
struct estudiante 
{
    int cod;
	char nombre[10];
	int edad;	
}estu_1,estu_2;



int main()
{
	//capturar datos
	cout<<"ingrese el codigo...:";
	cin>>estu_1.cod;
	fflush(stdin);
	cout<<"ingrese el nombre del estudiante...:";
	cin.getline(estu_1.nombre,10,'\n');
	cout<<"edad del estudiante..:";
	cin>>estu_1.edad;
	cout<<endl;
	//captura datos estudiante 2
	cout<<"codigo.....";
	cin>>estu_2.cod;
	fflush(stdin);
	cout<<"nombre de estudiante...:";
	cin.getline(estu_2.nombre,10,'\n');
	cout<<"edad del estudiante..:";
	cin>>estu_2.edad;
	
	//salida de datos
	cout<<"codigo...: "<<estu_1.cod<<endl;
	cout<<"estudiante..: "<<estu_1.nombre<<endl;
	cout<<"edad..: "<<estu_1.edad<<endl;
	cout<<endl;
	cout<<"codigo...: "<<estu_2.cod<<endl;
	cout<<"estudiante..: "<<estu_2.nombre<<endl;
	cout<<"edad..: "<<estu_2.edad<<endl;
	
	
	
	
	
	
	
	getch();
	return 0;
}
