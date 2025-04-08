#include<iostream>
#include<conio.h>

using namespace std;
void mul(int d1, int d2);

int main()
{
	mul(8,6);
	mul(6,3);
	mul(4,8);
	
	
	getch();
	 return 0;
}

void mul(int d1, int d2)
{
	int rs=0;
	
	rs=d1*d2;
	cout<<"la multiplicacion de "<<d1<<"*"<<d2<<"="<<rs<<endl;
}
