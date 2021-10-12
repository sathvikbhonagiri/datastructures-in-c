#include"stack function.h"
int isOperator(char ch)
{
if(ch == '+' || ch == '-' || ch == '*' || ch == '/')
	return 1;
   return 0;
}


int prec(char ch)
{
	switch(ch)
           {
		case '*' :
		case '/' : return 3;
		case '-' :
		case '+' : return 2;
		case '(' : return 1;
           }
}


void findPostfix(char ine[])
{  char pose[20];
   char ch;
   int i,j = 0;
  stack s; 
  s.top = -1;
 for(i = 0; ine[i] != '\0'; i++)
{
   ch = ine[i];
  if(ch == '(') 
   {push(&s,ch);}
  else if(ch == ')')
  {
    while(peek(s)!='(')
          pose[j++] = pop(&s);
      pop(&s);   }
 else if(isOperator(ch))
{
  if(isempty(s)) 
	push(&s,ch);
 else{
  while(prec(ch) < prec(peek(s)))
    {pose[j++] = pop(&s);}
  push(&s,ch);}
}    

else 
{pose[j++] = ch;}

}
   while(!isempty(s))
      {pose[j++] = pop(&s);}
   pose[j] = '\0';
   printf("%s",pose);
}

void main()
{
char inexpr[20];
printf("\n Enter Infix Expression :");
gets(inexpr);
findPostfix(inexpr);
}
