#include<stdio.h>
void main()
{long int a[100],i,count=0,k,n;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
	
			if(a[i]==k)
			{
count++;
			}
	}
	if(count==0)
	{
		printf("no");
	}
	else
	printf("yes");
}
