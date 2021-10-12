#include"stackfunctions.h"
#include<stdio.h>
int menu()
{ int ch;
printf("which stack operation should be performed\n");
 printf("enter 1 to push\n 2to pop\n 3to display\n 4 to peek\n");
 printf(" 5 to exit\n");  
  scanf("%d",&ch);
   return ch;}
void main()
{  int ch,ele;
int*topele;
 typedef struct 
{ int top;
  int sele[9];
}stack;
stack s;
s.top=-1;
do
{
 ch=menu();
 switch(ch)
 {case 1:
         printf("\nenter an element");
         scanf("%d",&ele);
         push(&s,ele);
        break;
   case 2:
          ele=pop(&s);
          if(ele!=-1)
          {printf("\nthe deleted element %d",ele);
          }
          break;
   case 3:
          display(&s);
          break;
    case 4:
        topele=peek(&s);
         printf("\nthe top element is%d",topele);
         break;
  case 5:
         break;
   default: 
          printf("\ninvalid selection");}
}while(ch!=5);
}