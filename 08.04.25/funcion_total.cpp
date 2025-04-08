//pedir al usuario 5 numeros en funcion vacia, muestre lo datos en eni funcion parametrizda, calcule el promedio y devuelvalo 

#include<iostream>
#include<conio.h>

using namespace std;
//variables globales 
const int TAM=5;
int numeros[TAM];
//definir funciones
//campturar datos
void capturar();	

void mostrar (int num[],int tam);
float calcular_promedio(int num[],int tam);

int main()
{
	capturar();
	mostrar(numeros,TAM);
   float pro=calcular_promedio(numeros,TAM);
	cout<<"el promedio es "<<pro<<endl;
	
	
	getch();
	return 0;
}//fin main


//definir funcion
void capturar()
{
	cout<<"ingrese "<<TAM<<"numeros enteros"<<endl;
	for(int i=0;i<TAM;i++)
	{
		cout<<"["<<(i+1)<<"ingrese el numero....:";
		cin>>numeros[i];
	}//fin for
}//fin funcion

/*__________________________________*/
void mostrar (int num[],int tam)
{
	cout<<"\t\t REPORTE DE DATOS \n";
	for(int i=0;i<tam;i++)
	{
		cout<<num[i]<<" ";
	}//fin for
	
}//FIN FUNCION 2
/*_______________________________*/

float calcular_promedio(int num[],int tam)
{
	int suma=0;
		for(int i=0;i<tam;i++)
	{
		suma+=num[i];
	}//fin for
	
	return static_cast<float>(suma)/tam;
	
	
	
	
	

}//fin funcion 3
