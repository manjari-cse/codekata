#include<stdio.h>
void main()
{int i,n;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			if(i%2!=0)
			{
			printf("%d",i);
			break;
		}
		}
	}
}
