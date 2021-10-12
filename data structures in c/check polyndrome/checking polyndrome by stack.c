#include"stack function.h"
#include<string.h>
void main()
{int i=0,j=0;
 char str1[4];
 char str2[4];
 printf("enter string 1:");
 gets(str1);
 while(str1[i]!='\0')
 {push(&s,str1[i]);
   i++;}
  while(!isempty(s))
  { str2[j]=pop(&s);
    j++;}
if(!strcmp(str1,str2))
printf("polyndrome\n");
else
printf("not polyndrome\n");
}
