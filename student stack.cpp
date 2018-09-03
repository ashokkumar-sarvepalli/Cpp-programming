#include<iostream>
#define MAX 100
using namespace std;
struct student{
	int rollno;
	char name[100];
	double cutoff;
};
int top=-1;
void push(student stack[100], student e);
void pop(student stack[100]);
void display(student stack[100]);
int main()
{
	student s1;
	student stdstack[MAX];
	int ch;
	do{
		cout<<"\n"<<"Enter the choice:";
		cout<<"\n"<<" 1.Push. 2.Pop. 3.Display. 4.Exit";
		cin>>ch;
		switch(ch){
		case 1: cout<<"\n"<<"Enter the rollno:";
		        cin>>s1.rollno;
		        cout<<"\n"<<"Enter the name:";
		        cin>>s1.name;
		        cout<<"\n"<<"Enter the cutoff:";
		        cin>>s1.cutoff;
		        push(stdstack,s1);
		        break;
		case 2:
		        pop(stdstack);
				break;        
		case 3:
		        display(stdstack);
				break;
		case 4:
		        break;	}	
						
	} while(ch!=4);
	
}
void push(student stack[MAX],student e)
{
	if(top==MAX-1){
		cout<<"Stack Overflow";
		
	}else{
		
		top = top +1;
		stack[top] = e;
	}
}
void pop(student stack[MAX])
{
	if(top==-1)
	{
		cout<<"\n"<<"Stack underflow.";
	}
else
{
	student s1 = stack[top];
	top = top-1;
	cout<<"The element that got popped off is "<<s1.rollno<<":"<<s1.name<<s1.cutoff;
	}
}
void display(student stack[MAX])
{
	int i;
	for(i=top;i>=0;i--)
	{
		cout<<"\n"<<"The student details :";
		cout<<stack[i].rollno<<stack[i].name<<stack[i].cutoff;
	}
}
