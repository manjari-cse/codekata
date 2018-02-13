#include<stdio.h>
void main()
{
	char a[20];
	int i,j,count,max,count1=0;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
	count=0;
	for(j=i;a[j]!='\0';j++)
	{if(a[i]==a[j])
	count++;
	}
	if(count>max)
	max=count;
	}
	for(i=0;a[i]!='\0';i++)
	{
		count1=0;
		for(j=i;a[j]!='\0';j++)
		{if(a[i]==a[j])
		count1++;
		}
	if(count1==max)
	{
	printf("%c",a[i]);
break;
}
}
}
