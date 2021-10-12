#include<stdio.h>
#include<stdlib.h>

struct Node
{
   int data;
   struct Node *next;
}*front = NULL,*rear = NULL;

void insert(int);
void delete();
void display();
  int menu()
 {int ch;
     printf("which queue operation should be performed\n");
 printf("enter 1 to insert\n 2to delete\n 3to display\n");
 printf(" 4 to exit\n");  
  scanf("%d",&ch);
   return ch;}
  void main()
  {
   int ch, value;
   do
   {
 
    ch=menu();
      switch(ch)
     {
	 case 1: printf("Enter the value to be insert: ");
		 scanf("%d", &value);
		 insert(value);
		 break;
	 case 2: delete();
	         break;
	 case 3: display(); 
	         break;
	 case 4: exit;
	 default: printf("\nWrong selection!!! Please try again!!!\n");
      }
   }while(ch!=4);
}
void insert(int value)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   newNode -> next = NULL;
   if(front == NULL)
      front = rear = newNode;
   else{
      rear -> next = newNode;
      rear = newNode;
   }
   
}
void delete()
{
   if(front == NULL)
      printf("\nQueue is Empty!!!\n");
   else{
      struct Node *temp = front;
      front = front -> next;
      printf("\nDeleted element: %d\n", temp->data);
      free(temp);
   }
}
void display()
{
   if(front == NULL)
      printf("\nQueue is Empty!!!\n");
   else{
      struct Node *temp = front;
      while(temp->next != NULL){
	 printf("%d--->",temp->data);
	 temp = temp -> next;
      }
      printf("%d--->NULL\n",temp->data);
   }
}




  
          