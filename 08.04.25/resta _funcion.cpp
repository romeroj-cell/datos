#include<iostream>
#include<conio.h>

using namespace std;
void res(int d1, int d2);

int main()
{
	res(8,6);
	res(6,3);
	res(4,8);
	
	
	getch();
	 return 0;
}

void res(int d1, int d2)
{
	int rs=0;
	
	rs=d1-d2;
	cout<<"la resta de "<<d1<<"-"<<d2<<"="<<rs<<endl;
}
