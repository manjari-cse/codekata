#include<stdio.h>
void main()
{
char a[10000],b;
int i;
scanf("%s\t",a);
scanf("%c",&b);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==b)
{
printf("%d",i+1);
break;
}
}
}
