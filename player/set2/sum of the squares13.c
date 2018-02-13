#include<stdio.h>
void main()
{
	long int a,sum=0,r;
	scanf("%d",&a);
	while(a>0)
	{r=a%10;
	sum=sum+r*r;
	a=a/10;
	}
	printf("%d",sum);
}
