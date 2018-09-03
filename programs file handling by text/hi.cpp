#include<iostream>
#include<conio.h>
#include<string.h>
#include<fstream>
using namespace std;
int main()
{
	int count=0;
	char a[80];
	fstream x("hi.txt",ios::in);
	while(x)
	{
		x>>a;
		if(strcmpi(a,"he")==0||strcmpi(a,"she")==0)
		{
			count++;
		}
	}
	cout<<"The number of the words 'he' and 'she' is"<<" "<<count;
	getch();
	return 0; 
	
}
