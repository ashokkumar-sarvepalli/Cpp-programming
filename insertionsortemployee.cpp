#include<iostream>
#include<string.h>

using namespace std;
struct Employee
{
	int id;
	char name[100];
	double salary;
};

struct Employee emp[100];
int n;

void input();
void insertionsortBySal();
void insertionsortByName();
void insertionsortById();
void output();
int main()
{
	cout<<"Enter the number of Employees "<<endl;
	cin>>n;
	int ch;
	input();
	cout<<"before sorting data "<<endl;
	output();
	do
	{
		cout<<"1. sortBySalary 2. sortByName 3.sortById 4. Exit"<<endl;
		cin>>ch;
		switch(ch){
			case 1:
				insertionsortBySal();
    			cout<<"after sorting data by salary "<<endl;
				output();
				break;
			case 2:
				insertionsortByName();
    			cout<<"after sorting data by salary "<<endl;
				output();
				break;
			case 3:
				insertionsortById();
    			cout<<"after sorting data by salary "<<endl;
				output();
				break;
			case 4:
				break;
			default:
				cout<<"Invalid choice "<<endl;
				break;
				
		}
		
	}while(ch!=4);
	
}

void input()
{ 
   int i;
	for(i=0;i<n;i++){
		cout<<"Enter the employee id "<<endl;
		cin>>emp[i].id;
		cout<<"Enter the employee name "<<endl;
		cin>>emp[i].name;
		cout<<"Enter the employee salary "<<endl;
		cin>>emp[i].salary;
	}
}

void insertionsortBySal()
{
	int i,j;
	struct Employee temp;
	double tempsal;
	for(i=1;i<n;i++)
	{
	  temp = emp[i];
	  tempsal = emp[i].salary;
	  j = i-1;
	  // the below loop is to identify the position and shift all the elements to the right based on position.
	  while(j>=0 && emp[j].salary>tempsal)
	  {
	     emp[j+1] =emp[j];
	     j = j-1;
	   }
	   // insert in the actual position
	   emp[j+1] = temp;
	}

	
}

void insertionsortByName()
{
  	int i,j;
	struct Employee temp;
	char tempname[100];
	for(i=1;i<n;i++)
	{
	  temp = emp[i];
	  strcpy(tempname,emp[i].name);
	  j = i-1;
	  // the below loop is to identify the position and shift all the elements to the right based on position.
	  while(j>=0 && strcmpi(emp[j].name,tempname)>0)
	  {
	     emp[j+1] =emp[j];
	     j = j-1;
	   }
	   // insert in the actual position
	   emp[j+1] = temp;
	}
}

void insertionsortById()
{
	int i,j;
	struct Employee temp;
	int tempid;
	for(i=1;i<n;i++)
	{
	  temp = emp[i];
	  tempid = emp[i].id;
	  j = i-1;
	  // the below loop is to identify the position and shift all the elements to the right based on position.
	  while(j>=0 && emp[j].id>tempid)
	  {
	     emp[j+1] =emp[j];
	     j = j-1;
	   }
	   // insert in the actual position
	   emp[j+1] = temp;
	}
}
void output()
{ 
   int i;
	for(i=0;i<n;i++){
		cout<<"-----------------------------------------------------------"<<endl;
		cout<<"employee id "<<endl;
		cout<<emp[i].id<<endl;
		cout<<"employee name "<<endl;
		cout<<emp[i].name<<endl;
		cout<<"employee salary "<<endl;
		cout<<emp[i].salary<<endl;
		cout<<"-----------------------------------------------------------"<<endl;
	}
}
