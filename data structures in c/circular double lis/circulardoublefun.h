#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node*next;
    struct node*pre;
}cdnode;
cdnode*head;
cdnode*getnode(int ele)
{
    cdnode*newnode;
newnode=(cdnode*)malloc(sizeof(cdnode));
newnode->data=ele;
newnode->next=NULL;
newnode->pre=NULL;
return newnode;
 }
 cdnode*insertbeg(cdnode*head,int ele)
{ cdnode*q=getnode(ele);
    if(!head)
    {head=q;
     head->next=q;
     head->pre=q;}
    else
    { cdnode*p=head;
      q->pre=head->pre;
      head->pre=q;
      q->next=head;
      while(p->next!=head)
      {p=p->next;}
      p->next=q;
      head=q;
    }
    return head;}
void display(cdnode*head)
 {cdnode*p=head;
 if(!head)              
printf("list empty\n");
else{
  do
 {   
  printf("%d\t",p->data);
 p=p->next;
 }while(p!=head);
} }
cdnode*insertend(cdnode*head,int ele)
{ cdnode*q=getnode(ele);
  cdnode*p=head;
    if(!head)
      {head=q;
     head->next=q;
     head->pre=q;}

    else
    {
        while(p->next!=head)
        {
            p=p->next;
        }
      q->next=p->next;
      q->pre=p;
      p->next=q;
      head->pre=q;
    }
    return head;
}
cdnode*insertpos(cdnode*head,int pos,int ele)
 {cdnode*q=getnode(ele);
 cdnode*p=head;
  if(!head)
 { head=q;
  head->next=q;
   head->pre=q;}
  else
  {int i;
    for(i=1;i<pos-1;i++)
   {
     p=p->next;
   }
   q->next=p->next;
   p->next=q;
    q->pre=p;
    q->next->pre=q;
  }
return head;
 }
cdnode*delpos(cdnode*head,int pos)
{cdnode*q;
 cdnode*p=head;
    if(!head)
 printf("list is empty\n");
 else
 { int i;
   for(i=1;i<pos-1;i++)
  {
    p=p->next;
  }
  q=p->next;
  p->next=q->next;
  q->next->pre=p;
 }
 return head;}
 cdnode*delbeg(cdnode*head)
{cdnode*q;
 cdnode*p=head;
    if(!head)
 printf("list is empty\n");
 else
 {
   q=head;
   head->next->pre=head->pre;
   while(p->next!=head)
   {p=p->next;}
   p->next=head->next;
   head=head->next;
   free(q);

 }
 return head;
}
cdnode*delend(cdnode*head)
{cdnode*q;
    if(!head)
 printf("list is empty\n");
else
{cdnode*p=head;
 while(p->next->next!=head)
 {
   p=p->next;
 }
q=p->next;
p->next=head;
head->pre=p;
free(q); }
return head;}
