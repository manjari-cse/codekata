#include<stdio.h>
void main()
{
char a[10000],b;
int i,count;
scanf("%s\t",a);
scanf("%c",&b);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==b)
count++;
}
printf("%d",count);
}
