#include<stdio.h>
void main()
{
int count=0,i,j;
	char a[10000],b[10000];
	scanf("%s %s",a,b);
	for(i=0;a[i]!='\0';i++)
	{
		for(j=0;b[j]!='\0';j++)
		{
			if(a[i]==b[j])
			{
			count=1;
			break;
		}
		}
	}
	if(count==1)
	 printf("yes");
	 else
	 printf("no");
}
