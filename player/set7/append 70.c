#include<stdio.h>
#include<string.h>
void main()
{int s,i;
	char a[100000],b[100]=" Answer";
	scanf("%s",a);
	s=strlen(a);
	for(i=0;b[i]!='\0';i++)
	{
		a[s]=b[i];
		s++;
	}
	printf("%s",a);
	
}
