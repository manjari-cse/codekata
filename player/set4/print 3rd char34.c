#include<stdio.h>
#include<string.h>
void main()
{
char a[10000];
int i;
scanf("%s",a);
for(i=0;a[i]!='\0'&&i<=strlen(a);i++)
{
	printf("%c",a[i]);
	i=i+2;
}
}
