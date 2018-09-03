#include<iostream>
#include<conio.h>
#include<fstream>
#include<ctype.h>
using namespace std;
int main()
{
	int count=0;
	char a;
	fstream x("GOT.txt",ios::in);
	while(x)
	{
		x>>a;
		a = tolower(a);
		if(a=='a'|| a=='i'|| a=='e'|| a=='o' || a=='u'){
			count++;
		}
	}
	
	cout<<"The number of vowels are "<<count;
}
