#include<stdio.h>
#define max 5
int x,i;
typedef struct
       {int front;
        int rear;
        int cqele[max];
       }cqueue;

cqueue cq;

int isfull(cqueue cq)
{
  if((cq.rear+1)%max==cq.front)
   return 1;
 else
   return 0;
}

int isempty(cqueue cq)
{
  if((cq.rear==-1)&&(cq.front==-1))
  return 1;
 else
  return 0;
}
void enqueue(cqueue*cq,int ele)
{if(isfull(*cq))
  printf("\n  circular queue over flow\n");
 else
 { if(cq->rear==-1&&cq->front==-1)
 {
   cq->rear=0;
   cq->front=0;
   cq->cqele[cq->rear]=ele;
 }
 else
 {
  cq->rear=(cq->rear+1)%max;
  cq->cqele[cq->rear]=ele;
  }
}
}
int dequeue(cqueue*cq)
{ if(isempty(*cq))
  {printf("circular queue under flow");
   return 0;}
  else
  {if(cq->rear==cq->front)
  { x=cq->cqele[cq->front];
   cq->rear=cq->front=-1;
   return x;
  }
  else
  {x=cq->cqele[cq->front];
   cq->front=(cq->front+1)%max;
   return x;
  }
}
}

void display(cqueue*cq)
{
 if(isempty(*cq))
  printf("\ncircular queue empty\n");
 else
 {
  printf("\n the elements are");
  for(i=cq->front;i<=cq->rear;i)
  { 
    printf("%d\t",cq->cqele[i]);
    i=(i+1)%max;
  }
 }
}
