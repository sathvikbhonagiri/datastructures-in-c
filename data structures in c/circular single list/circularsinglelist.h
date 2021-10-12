#include<stdio.h>
#include<stdlib.h>
typedef struct node
       { int data;
         struct node*next; }cnode;

cnode*getnode(int ele)
{
 cnode*newnode;
  newnode=(cnode*)malloc(sizeof(cnode));
  newnode->data=ele;
  newnode->next=NULL;
  return newnode;
}
cnode*insertbeg(cnode*head,int ele)
{cnode*q=getnode(ele);
  if(!head)
   {head=q;
    q->next=head;
   }
  else
  {cnode*p;
   p=head;
  while(p->next!=head)
 {p=p->next;}
  p->next=q;
  q->next=head;
  head=q;}
  return head;
}
void display(cnode*head)
{    cnode*p=head;
     if(!head)              
     printf("list empty\n");
else{
      do
      {   
          printf("%d\t",p->data);
        p=p->next;
      }while(p!=head);
   }
 }
 cnode*insertend(cnode*head,int ele)
 {  
   cnode*p=head,*q=getnode(ele);
   if(!head)
  {head=q;
   q->next=head;}
   else
   { 
     while(p->next!=head)
     {p=p->next;}
     p->next=q;
     q->next=head;
  }
    return head;}
void delend(cnode*head)
{ 
  if(!head)  
 {  
  printf("\nlist is empty"); }

  else
  {cnode*p=head;
  cnode*q;
  while(p->next->next!=head)
  { p=p->next; }
  q=p->next;
  p->next=head; 
  free(q);
  }
}
cnode*delbeg(cnode*head)
{ 
 if(!head)  
 {  
  printf("\nlist is empty"); }
  else 
  { cnode*p=head;
    cnode*q=head;
    while(p->next!=head)
    { p=p->next;}
    head=head->next;
     p->next=head;
     free(q);
  }
  return head;

}
cnode*delpos(cnode*head,int pos)
{
cnode*p=head;
cnode*q;
 int i;
 for(i=1;i<pos-1;i++)
  {  p=p->next; }
   q=p->next;
  p->next=q->next;
   free(q);
return head;
}
cnode*insertpos(cnode*head,int pos,int ele)
{ cnode*q=getnode(ele);
  cnode*p=head;
  int i;
  for(i=1;i<pos-1;i++)
  {
   p=p->next;
  }
   q->next=p->next;
  p->next=q;


return head;
}


