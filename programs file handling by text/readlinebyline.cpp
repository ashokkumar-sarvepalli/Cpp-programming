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
		x.getline(a,40);
		if(a[0]=='T'||a[1]=='h'||a[2]=='e')
		{
			count++;
		}
		
	}
	
	cout<<"The no of words with 'The' in the file are "<<count;
	
	getch();
	return 0;
	
	
	
}
