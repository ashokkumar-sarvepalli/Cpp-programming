#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
	char a;
	int count=0;
	fstream x("Vivegam.txt",ios::in);
	while(x)
	{
		x>>a;
		if(a>=48&&a<=57){
			count++;
		}
	}
	cout<<"The number of digits in the file is"<<count;
	
	getch();
	return 0;
}
