#include<stdio.h>
#include<stdlib.h>
typedef struct node
        { int data;
         struct node*next; }snode;


snode*getnode(int ele)
{ snode*newnode;
 newnode=(snode*)malloc(sizeof(snode));
newnode->data=ele;
newnode->next=NULL;
return newnode;
 }

 snode*insertbeg(snode*head,int ele)
 {  snode*newnode=getnode(ele);
   if(!head)
   head=newnode;
   else
   {
     newnode->next=head;
     head=newnode;
   }
   return head;
 }

void display(snode*head)
{    snode*p=head;
     if(!head)              
     printf("list empty\n");
else{
      while(p!=0)
      {
          printf("%d\t",p->data);
          p=p->next;
      }
   }
 }

 void delend(snode*head)
 {snode*q,*p=head;
 if(!head)  
 {  
  printf("\nlist is empty"); }
else{
  while(p->next->next!=0)
   {
       p=p->next;
   }  
q=p->next;
p->next=NULL;
free(q);}
 }
 snode*delatbeg(snode*head)
 { 
  if(!head)  
  {  
  printf("\nlist is empty"); }
  else
  {
  snode*p=head;
  head=head->next;
   free(p);
  } 
  return head;
 }
 snode*insertend(snode*head,int ele)
 {  
   snode*p=head,*q=getnode(ele);
   if(!head)
   head=q;
   else
   {
     while(p->next!=NULL)
     {p=p->next;}
     p->next=q;
  }
    return head;
}
snode*insertatpos(snode*head,int pos,int ele)
{snode*p=head,*q;
 int i;
 q=getnode(ele);
 for(i=1;i<pos-1;i++)
 {
  p=p->next;
 }
 q->next=p->next;
 p->next=q;
 return head;
}
snode*delatpos(snode*head,int pos)
{snode*p=head,*q;
 int i;
 for(i=1;i<pos-1;i++)
 {
  p=p->next;
 }
  q=p->next;
  p->next=q->next;
 free(q);
 return head;
}
  