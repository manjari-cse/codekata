#include<stdio.h>
void main()
{int k,n,i,count;
	scanf("%d %d",&n,&k);
	for(i=0;i<k;i++)
	{
		if(k*i==n)
		{
			count++;
		}
	}
	if(count==1)
	printf("yes");
	else
	printf("no");
}
