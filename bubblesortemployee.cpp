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
void bubblesortBySal();
void bubblesortByName();
void bubblesortById();
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
				bubblesortBySal();
    			cout<<"after sorting data by salary "<<endl;
				output();
				break;
			case 2:
				bubblesortByName();
    			cout<<"after sorting data by salary "<<endl;
				output();
				break;
			case 3:
				bubblesortById();
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

void bubblesortBySal()
{
	int i,j;
	struct Employee temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(emp[j].salary>emp[j+1].salary){
				temp = emp[j];
				emp[j] = emp[j+1];
				emp[j+1] = temp;
			}
			
		}
	}
	
}

void bubblesortByName()
{
	int i,j;
	struct Employee temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(strcmpi(emp[j].name,emp[j+1].name)>0){
				temp = emp[j];
				emp[j] = emp[j+1];
				emp[j+1] = temp;
			}
			
		}
	}
	
}

void bubblesortById()
{
	int i,j;
	struct Employee temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(emp[j].id>emp[j+1].id){
				temp = emp[j];
				emp[j] = emp[j+1];
				emp[j+1] = temp;
			}
			
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
