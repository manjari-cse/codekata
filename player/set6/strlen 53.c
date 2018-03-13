#include<stdio.h>
void main()
{
	char name[200];
	int i,count=0;
	gets(name);
	for(i=0;name[i]!='\0';i++)
	count++;
	printf("%d",count);
}
