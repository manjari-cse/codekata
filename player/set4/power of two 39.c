#include<stdio.h>
void main()
{
	long int a,n,i,k=2,count=0;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		k=k*2;
		if(k==a)
		{count++;
		}
	}
	if(count==1)
	
			printf("yes");
			else if(a==1)
			printf("yes");
			else
			printf("no");	
	
}
