#include<stdio.h>
void main()
{
	char a[10],b[100];
	int i;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
 		if(a[i]=='X')
 			b[i]='A';
 		else if(a[i]=='Y')
 			b[i]='B';
 		else if(a[i]=='Z')
 			 b[i]='C';
 		else
		b[i]=a[i]+3;
	}
	printf("%s",b);
}
