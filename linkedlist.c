#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};

struct Node *head,*temp;

void insertAtBegin(int userdata);
void insertAtEnd(int userdata);
void deleteAtBegin();
void deleteAtEnd();
int search(int userdata);
void insertAfter(int userdata, int key);
void insertBefore(int userdata, int key);
//int deleteMiddle(int userdata);
void display();
int main()
{
	int choice;
	int userdata,searchResult;
	int key;
	do
	{
		printf("1.insert at begin\n2.insert at end\n.3.insert after\n4.insert before\n.5.delete at begin\n6.delete at end\n7.delete at middle\n8.search\n9.display\n10.exit");
		printf("\nEnter your choice :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter the element to be inserted at beginning\n");
				scanf("%d",&userdata);
				insertAtBegin(userdata);
				break;
			case 2:
				printf("Enter the element to be inserted at end\n");
				scanf("%d",&userdata);
				insertAtEnd(userdata);
				break;
			case 3:
				printf("Enter the element to be inserted\n");
				scanf("%d",&userdata);
				printf("Enter the data after which i have to insert\n");
				scanf("%d",&key);
				insertAfter(userdata, key);
				break;
			case 4:
				printf("Enter the element to be inserted\n");
				scanf("%d",&userdata);
				printf("Enter the data before which i have to insert\n");
				scanf("%d",&key);
				insertBefore(userdata, key);
				break;
			case 5:
				deleteAtBegin();
				break;
			case 6:
				deleteAtEnd();
				break;
			/*case 7:
				printf("Enter the element to be deleted \n");
				scanf("%d",&userdata);
				searchResult = deleteMiddle(userdata);
				if(searchResult==-1){
					printf("The data is not found\n");
				}else{
					printf("The data is deleted\n");
				}
				break;*/
			case 8:
				printf("Enter the element to be found \n");
				scanf("%d",&userdata);
				searchResult = search(userdata);
				if(searchResult==-1){
					printf("The data is not found\n");
				}else{
					printf("The data is found\n");
				}
				break;
			case 9:
				display();
				break;
				
		}
	}while(choice!=10);
}


void insertAtBegin(int userdata){
	
	struct Node *newnode = (struct Node*) malloc (sizeof (struct Node));
	newnode->data = userdata;
	newnode->next = NULL;
	
	if(head==NULL){
		head = newnode;
		
	}else{
		newnode->next = head;
		head = newnode;
	}
	
	
}

void insertAtEnd(int userdata){
	struct Node *newnode = (struct Node*) malloc (sizeof (struct Node));
	newnode->data = userdata;
	newnode->next = NULL;
	if(head==NULL){
		head = newnode;
		
	}else{
		temp = head;
		while(temp->next!=NULL){
			temp = temp->next;
		}
		temp->next = newnode;
	}
	
}

void deleteAtBegin(){
	
	if(head==NULL){
		printf("The list is empty");
	}else{
		temp = head;
		head = head->next;
		printf("The element got deletedis %d",temp->data);
	}
}

void deleteAtEnd(){
	struct Node *prevNode;
	if(head==NULL){
		printf("The list is empty");
	}else{
		temp = head;
			while(temp->next!=NULL){
			prevNode = temp;
			temp = temp->next;
		}
		prevNode->next =NULL;
	}
}

int search(int userdata)
{
	
	temp = head;
	while(temp!=NULL){
		if(temp->data == userdata){
			return 0;
		}
		temp = temp->next;
	}
	return -1;
	
}

void display()
{
	temp = head;
	while(temp!=NULL){
		printf("%d->",temp->data);
		temp = temp->next;
	}
	
}

void insertAfter(int userdata, int key)
{
	struct Node *newnode = (struct Node*) malloc (sizeof (struct Node));
	newnode->data = userdata;
	newnode->next = NULL;
	struct Node *myNode = NULL;
	temp = head;
	while(temp!=NULL){
		if(temp->data == key){
			myNode = temp;
			break;
		}
		temp = temp->next;
	}
	
	if(myNode==NULL){
		printf("The element entered after is not there in the list\n");
		
	}else{
		newnode->next = myNode->next;
		myNode->next = newnode;
	}
}

void insertBefore(int userdata, int key)
{
	struct Node *newnode = (struct Node*) malloc (sizeof (struct Node));
	newnode->data = userdata;
	newnode->next = NULL;
	struct Node *myNode = NULL;
	temp = head;
	struct Node *prevNode;
	while(temp!=NULL){
		if(temp->data == key){
			myNode = temp;
			break;
		}
		
		prevNode = temp;
		temp = temp->next;
	}
	
	if(myNode==NULL){
		printf("The element entered after is not there in the list\n");
		
	}else{
		newnode->next = prevNode->next;
		prevNode->next = newnode;
	}
	
}
