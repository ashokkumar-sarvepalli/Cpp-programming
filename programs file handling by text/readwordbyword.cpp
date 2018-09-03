#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{
	int count=0;
	char a[80];
	fstream x("GOT.txt",ios::in);
	while(x)
	{
		x>>a;
		if(strcmpi(a,"the")==0)
		{
			count++;
		}
	}
	
	cout<<"The no of words with 'The' in the file are "<<count;
	
	getch();
	return 0;
	
	
	
}
