#include<stdio.h>
#include"circularsinglelist.h"
  int menu()
 { int ch;
printf("\nwhich  circular single list operation should be performed\n");
 printf("enter 1 to insertatbeg\n 2to insertatend\n 3to insert at pos\n 4 to del at beg\n");
 printf("enter 5 to del at end\n enter 6 to del at pos \n 7 to display\n 8 to exit\n");
  scanf("%d",&ch);
   return ch;    }
void main()
{cnode*head=NULL;
 int ch,ele,pos;
 do{
 ch=menu();
 switch(ch)
 {case 1:
         printf("\nenter an element");
         scanf("%d",&ele);
        head=insertbeg(head,ele);
        break;
   case 2:
           printf("\nenter an element");
         scanf("%d",&ele);
        head=insertend(head,ele);
          break;
   case 3:
          printf("\nenter an element and position");
         scanf("%d%d",&ele,&pos);
        head=insertpos(head,pos,ele);
          break;
    case 4:
          head=delbeg(head);
          break;
    case 5:
          delend(head);
          break;
   case 6:
         printf("\nenter a position");
         scanf("%d",&pos);
          delpos(head, pos);
           break;
   case 7:
           display(head);
           break;
   case 8:
         break;
   default: 
          printf("\ninvalid selection");}
}while(ch!=8);
}

