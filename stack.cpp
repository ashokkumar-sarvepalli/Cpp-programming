#include<iostream>
#define MAX 100
using namespace std;


struct Employee
{
	
	int eid;
	char name[100];
};

int top = -1;
void push(Employee stack[100], Employee e);
void pop(Employee stack[100]);
void display(Employee stack[100]);

int main()
{
	Employee e1;
	Employee empstack[MAX];
	int ch;
	do
	{
	    cout<<"Enter your choice \n";
	    cout<<"(1. Push 2. Pop 3. Display 4. Size 5. Exit\n";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				cout<<"Enter the employee id\n";
				cin>>e1.eid;
				cout<<"Enter the employee name\n";
				cin>>e1.name;
				push(empstack,e1);
				break;
		    case 2:
		    	pop(empstack);
				break;
			case 3:
				display(empstack);
				break;
			case 4:
				cout<<"The number of elements in the stack is "<<top+1;
				break;
			case 5:
				break;
				
		    
		}
		
	}while(ch!=5);
		
		
	
}


void push(Employee stack[100], Employee e)
{
	if(top==MAX-1){
		cout<<"Stack Overflow";
		
	}else{
		
		top = top +1;
		stack[top] = e;
	}
}

void pop(Employee stack[100])
{
	if(top==-1){
		cout<<"Stack Underflow\n";
	}
	else
	{
	  Employee e1 = stack[top];
	  top = top-1;
	  cout<<"The element that got popped off is "<<e1.eid<<":"<<e1.name;
	}
}

void display(Employee stack[100]){
	
	int i;
	for(i=top;i>=0;i--){
		cout<<"The emplyee details ->\n";
		cout<<stack[i].eid<<":"<<stack[i].name<<endl;
	}
}
