#include<iostream>
using namespace  std;
#define MAX 5
class CQueue
{
	private:
		int q[MAX];
		int front,rear;

	public:
		CQueue()
		{
			front = -1;
			rear = -1;
		}

		void enque(int ele)
		{
			if((rear==MAX-1 && front==0) || front==rear+1)
			{
				cout<<"Queue is full";
			}
			else 
			{
				if(rear==-1)
				{
				rear =0;
				front =0;
				}
				else if(rear==MAX-1)
				{
					rear =0;
				}
				else
				{
					rear = rear+1;
				}
				q[rear] = ele;
			}
		}

		void deque()
		{
			if(front==-1)
			{
				cout<<"Queue is empty";
			}
			else
			{
				int temp = q[front];
				if(front==rear)
				{
					front = -1;
					rear = -1;
				}
				else if(front==MAX-1)
				{
					front =0;
				}
				else
				{
					front = front +1;
				}
				cout<<"The element dequed is "<<temp<<endl;
			}
		}

		void display()
		{
			if(front<=rear)
			{
				for(int i=front;i<=rear;i++)
				{
					cout<<q[i]<<"<-";
				}
			}
			else
			{
				for(int i=front;i<MAX;i++)
				{
					cout<<q[i]<<"<-";
				}

				for(int i=0;i<=rear;i++)
				{
					cout<<q[i]<<"<-";
				}
			}
			cout<<endl;
		}

};


int main()
{
  int choice;
  CQueue que;
  int ele;
  do
  {
  	cout<<"1.Enque\n2.Deque\n3.Display\n4.Exit"<<endl;
  	cout<<"Enter your choice"<<endl;
  	cin>>choice;
  	switch(choice)
  	{
  		case 1:
  		cout<<"Enter the element to be pushed"<<endl;
  		cin>>ele;
  		que.enque(ele);
  		break;

  		case 2:
  		que.deque();
  		break;

  		case 3:
  		que.display();
  		break;

  		case 4:
  		break;

  		default:
  		cout<<"Invalid choice entered"<<endl;
  	}
  }while(choice!=4);

}