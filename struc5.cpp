#include<iostream>
#include<conio.h>

using namespace std;
//estructura curso
struct curso
{
	int cod_cur;
	char nom_cur[10];
	
};

//estructura estudiante
struct estudiante
{
	int cod_est;
	char nom_est[10];
	int edad;
	struct curso cursito;
	
}alumno[2]; 

int main()
{
	//captura de datos
	cout<<"CAPTURA DE DATOSDE LOS ESTUDIANTES\N";
	for(int i=0;i<2;i++)
	{
		cout<<"codigo....:";
		cin>>alumno[i].cod_est;
		fflush(stdin);
		cout<<"nombre...:";
		cin.getline(alumno[i].nom_est,10,'\n');
		cout<<"edad...:";
		cin>>alumno[i].edad;
		//captura datos del curso
		cout<<"codigo curso....: ";
		cin>>alumno[i].cursito.cod_cur;
			fflush(stdin);
		cout<<"curso...: ";
		cin.getline(alumno[i].cursito.nom_cur,10,'\n');
		cout<<endl;
	}
	
	//salida de datos
	for(int i=0;i<2;i++)
	{
	    cout<<"codigo estudiante"<<alumno[i].cod_est<<endl;
	    cout<<"codigo estudiante"<<alumno[i].nom_est<<endl;
	    cout<<"codigo estudiante"<<alumno[i].edad<<endl;
	    cout<<"codigo estudiante"<<alumno[i].cursito.cod_cur<<endl;
    	cout<<"codigo estudiante"<<alumno[i].cursito.nom_cur<<endl;
	}
	
	
	getch();
	return 0;
}
