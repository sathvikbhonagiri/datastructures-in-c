#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node*next;
    struct node*pre;
}dnode;
dnode*head;
dnode*getnode(int ele)
{
    dnode*newnode;
newnode=(dnode*)malloc(sizeof(dnode));
newnode->data=ele;
newnode->next=NULL;
newnode->pre=NULL;
return newnode;
 }
dnode*insertbeg(dnode*head,int ele)
{ dnode*q=getnode(ele);
    if(!head)
      head=q;
    else
    {
      q->next=head;
      head->pre=q;
      head=q;
    }
    return head;
}
void display(dnode*head)
{
  dnode*p=head;
  while(p!=0)
  {printf("%d\t",p->data);
   p=p->next;
  }
}
dnode*insertend(dnode*head,int ele)
{ dnode*q=getnode(ele);
  dnode*p=head;
    if(!head)
      head=q;
    else
    {
        while(p->next!=NULL)
        {
            p=p->next;
        }
      p->next=q;
      q->pre=p;
    }
    return head;
}
dnode*delbeg(dnode*head)
{dnode*q;
    if(!head)
 printf("list is empty\n");
else
{q=head;
 head=head->next;
  head->pre=NULL;
 free(q);
}
return head;}
void delend(dnode*head)
{dnode*q;
    if(!head)
 printf("list is empty\n");
else
{dnode*p=head;
 while(p->next->next!=NULL)
 {
   p=p->next;
 }
q=p->next;
p->next=NULL;
free(q);
}}
dnode*delpos(dnode*head,int pos)
{dnode*q;
 dnode*p=head;
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
 dnode*insertpos(dnode*head,int pos,int ele)
 {dnode*q=getnode(ele);
  dnode*p=head;
  if(!head)
  head=q;
  else
  {int i;
    for(i=1;i<pos-1;i++)
   {
     p=p->next;
   }
   q->next=p->next;
   p->next->pre=q;
   p->next=q;
   q->pre=p;
  }
  return head;
 }