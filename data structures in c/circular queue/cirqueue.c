#include"circularqueue fun.h"
int menu()
{
int ch; 
printf("\n circular queue  Operations :");
printf("\nenter 1 to enqueue \n 2 to dequeue\n 3 to display \n 4 to exit");
printf("\n which function to be done:");
scanf("%d",&ch);
 return ch;}

 void main()
{
int ch,ele;
cqueue cq;
cq.front=-1;
 cq.rear=-1;
do 
{ 
ch = menu();
switch(ch)
{
case 1: printf("\n Enter element :");
           scanf("%d",&ele);
           enqueue(&cq,ele);
            break;
case 2:ele= dequeue(&cq);
     printf("\n the deleted element is %d",ele);
      break;
case 3: display(&cq);	
        break;
case 4: break;
default : printf("\n enter correct function");
}
}while(ch!=4);
}