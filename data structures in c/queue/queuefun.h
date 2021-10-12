#include<stdio.h>
#define max 10
int i;
typedef struct 
{
  int front;
  int rear;
  int qele[max];
}queue;
queue q;
queue*qp;
//checking empty or not
int isempty(queue q)
  {
  if(q.front>q.rear)
   return 1;
  else
     return 0;
}
//checking full or not
int isfull(queue q)
   {
  if (q.rear==max-1)
   return 1;
 else
    return 0;
}
int insert(queue*qp,int ele)
{
  if(!isfull(q))
   qp->qele[++qp->rear]=ele;
  else
   printf("\nqueue over flow");
}
int del(queue*qp)
 {
  if(!isempty(q))
  return qp->qele[qp -> front++];
  else
  {printf("\nqueue Underflow");
  return 0;}
}
void display(queue q)
{
if(!isempty(q))
{
printf("\n queue elements are :");
for(i = q.front; i <= q.rear; i ++)
  printf("%d\t",q.qele[i]);
}
else
{printf("\n queue is empty"); }
}