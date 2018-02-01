#include<stdio.h>
#include<string.h>
void main()
{
int i,j;
char a[100];
printf("enter the string");
scanf("%[^\n]s",a);
for(i=0;i<strlen(a);i++)
{
printf("%c",a[i]);
i++;
}
printf(" ");
for(i=1;a[i]!='\0';i++)
{
printf("%c",a[i]);
i++;
}
}
