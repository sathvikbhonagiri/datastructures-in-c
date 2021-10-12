#define max 20
#include<stdio.h>
int*topele;
typedef struct 
{int top;
 int sele[max];
}stack;
stack s;
int isempty(stack s)
{ if(s.top==-1)
  { return 1; }  
  else
  {return 0;}    
}
int isfull(stack s)
{if(s.top==(max-1))  
  {return 1;} 
  else
  {return 0;} }

  int pop(stack*sp)
  { if(!isempty(*sp))
      { return sp->sele[sp->top--]  ; 
       }    
      else
      { printf("stack underflow");
        return s.top;}  }


int peek(stack s)
{                       
 return s.sele[s.top];}

 void push(stack*sp,int ele)
 {if(!isfull(*sp))
   {  sp->sele[++sp->top]=ele;
       topele=sp->top;           }
    else
    {  printf("stack overflow") ;  } }


    void display(stack*sp)
    { int i;
      if(!isempty(*sp))
      {printf("the elements \n"); 
        for(i=0;i<=sp->top;i++)
        { 
          printf("%d\n",sp->sele[i]); }   
        } 
        else
        {printf("stack empty\n");}    
        
   }