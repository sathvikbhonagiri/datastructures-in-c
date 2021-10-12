#include"stack by linkedlistfun.h"
#include<stdio.h>
int menu()
{ int ch;
printf("which stack operation should be performed\n");
 printf("enter 1 to push\n 2to pop\n 3to display\n");
 printf(" 4 to exit\n");  
  scanf("%d",&ch);
   return ch;}
void main()
{  int ch,ele;
  snode*top=NULL;
do
{
 ch=menu();
 switch(ch)
 {case 1:
         printf("\nenter an element");
         scanf("%d",&ele);
        top=push(ele,top);
        break;
   case 2:
          top=pop(top);
          {printf("\nthe deleted element %d",top->data);
          }
          break;
   case 3:
          display(top);
          break;
  case 4:
         break;
   default: 
          printf("\ninvalid selection");}
}while(ch!=4);
}