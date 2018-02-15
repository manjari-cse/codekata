#include<stdio.h>
void main()
{
	char a[10],b[100];
	int i;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=a[i]+3;
	}
	printf("%s",b);
}
