#include<stdio.h>
void push();
void pop();
void traverse();
int top=0,ele,element;
int stack[40],i;
char a[200];
void main()
{
    
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
    if(a[i]=='(')
    {
       push(a[i]); 
    }
    else
    pop();
}
if(top==0)
printf("yes");
else
printf("no");
}
void push(element)
{
    stack[top]=element;
    top++;
}
void pop()
{
top--;
ele=stack[top];
}
