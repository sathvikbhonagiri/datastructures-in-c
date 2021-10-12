#include"queuefun.h"
int menu()
{
int ch; 
printf("\n queue  Operations :");
printf("\nenter 1 to insert \n 2 to del\n 3 to display \n 4 to exit");
printf("\n which function to be done:");
scanf("%d",&ch);
 return ch;}

 void main()
{
int ch,ele;
queue q;
q.front = 0;
 q.rear = -1;
do 
{
ch = menu();
switch(ch)
{
case 1: printf("\n Enter element :");
           scanf("%d",&ele);
           insert(&q,ele);
            break;
case 2:ele= del(&q);
     printf("\n the deleted element is %d",ele);
      break;
case 3: display(q);	
        break;
case 4: break;
default : printf("\n enter correct function");
}
}while(ch!=4);
}