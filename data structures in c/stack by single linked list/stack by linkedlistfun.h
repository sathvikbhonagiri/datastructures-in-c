#include<stdio.h>
#include<stdlib.h>

typedef struct node
          { int data;
            struct node*next;
          }snode,*top;

snode*getnode(int ele)
{
  snode*newnode=(snode*)malloc(sizeof(snode));
   newnode->data=ele;
   newnode->next=NULL;
   return newnode;
 }


int isempty(snode*top)
{if(top==NULL)
 return 1;
 else 
   return 0;
}
snode*push(int value,snode*top)
{ snode*newnode=getnode(value);
  if(isempty(top))
  {newnode->next=NULL;
   top=newnode;
    return top;}
  else
  {newnode->next=top;
   top=newnode;
    return top;}
}

snode*pop(snode*top)
{
  if(isempty(top))
  {printf("\n stack under flow\n");
  return top;}
 else
 {snode*temp=top;
  top=top->next;
  free(temp);
  return top;
 }
}


void display(snode*top)
{ if(isempty(top))
  {printf("\n stack empty\n");}
 else
  {printf("\n the elements are\n");
   snode*temp=top;
   while(temp!=NULL)
   { printf("%d--->",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
  }
}