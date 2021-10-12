#include "stack function.h"
int isOperator(char ch)
{
if(ch == '+' || ch == '-' || ch == '*' ||  ch == '/')  
	return 1;
else
return 0;
}
int calc(int a,int b,char op)
{
switch(op)
{
case '*' : return a * b;
case '/' : return a/b;
case '+' : return a + b;
case '-' : return a - b;
}
return 0;
}

void main()
{
char postfix[20],ch;
int i,oprd1,oprd2,res;
stack s; 	
s.top = -1;
printf("\n Enter postfix expression :");
gets(postfix);
i = 0;
while(postfix[i] != '\0')
{
ch = postfix[i++];
if(isOperator(ch))
{
oprd1 = pop(&s);
oprd2 = pop(&s);
res = calc(oprd1,oprd2,ch);
push(&s,res);
}
else  push(&s,ch-'0');
}
printf("\n Result :%d",res);
getch();
}