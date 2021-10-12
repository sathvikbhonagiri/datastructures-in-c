#include"stack function.h"
#include<stdio.h>
void main()
{int j=0,i=0,n,num[20];
 printf("enter num\n");
 scanf("%d",&n);
 while(n>0)
 {push(&s,n%2);
  n=n/2;
 }
while(!isempty(s))
{num[i]=pop(&s);
 i++;}
 for(j=0;j<i;j++)
 {printf("%d",num[j]);
 }
}
