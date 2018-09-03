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
void selectionsortBySal();
void selectionsortByName();
void selectionsortById();
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
				selectionsortBySal();
    			cout<<"after sorting data by salary "<<endl;
				output();
				break;
			case 2:
				selectionsortByName();
    			cout<<"after sorting data by salary "<<endl;
				output();
				break;
			case 3:
				selectionsortById();
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

void selectionsortBySal()
{
	int i,j,index;
	struct Employee temp;
	for(i=0;i<n;i++){
		int min=emp[i].salary;
		index=i;
		for(j=i+1;j<n;j++){
			if(min>emp[j].salary){
				min=emp[j].salary;
				index=j;
			}
			
		}
		if(index!=i)
		{
			temp = emp[i];
				emp[i] = emp[index];
				emp[index] = temp;
		}
	}
	
}

void selectionsortByName()
{
	int i,j,index;
	char min[100];
	struct Employee temp;
	for(i=0;i<n;i++){
		 strcpy(min,emp[i].name);
		index=i;
		for(j=i+1;j<n;j++){
			if(strcmpi(min,emp[j].name)>0){
				strcpy(min,emp[j].name);
				index=j;
			}
			
		}
		if(index!=i)
		{
			temp = emp[i];
				emp[i] = emp[index];
				emp[index] = temp;
		}
	}
	
}

void selectionsortById()
{
	int i,j,index;
	struct Employee temp;
	for(i=0;i<n;i++){
		int min=emp[i].id;
		index=i;
		for(j=i+1;j<n;j++){
			if(min>emp[j].id){
				min=emp[j].id;
				index=j;
			}
			
		}
		if(index!=i)
		{
			temp = emp[i];
				emp[i] = emp[index];
				emp[index] = temp;
		}
	}
	
}

void output()
{ 
   int i;
	for(i=0;i<n;i++){
		cout<<"employee id "<<endl;
		cout<<emp[i].id<<endl;
		cout<<"employee name "<<endl;
		cout<<emp[i].name<<endl;
		cout<<"employee salary "<<endl;
		cout<<emp[i].salary<<endl;
	}
}
