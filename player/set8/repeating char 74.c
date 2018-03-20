#include<stdio.h>
void main()
{
	char a[2000];
	int i,count=0,flag=0,j;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{count=0;
		for(j=i+1;a[j]!='\0';j++)
		{
			if(a[i]==a[j])
			count++;
       }
       if(count!=0)
       flag=1;
	}
	if(flag==1)
	printf("yes");
	else
	printf("no");
	}
