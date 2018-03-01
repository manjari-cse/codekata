#include<stdio.h>
void main()
{long int n,k,r,count=0;
	scanf("%d %d",&n,&k);
	while(n>0)
	{
		r=n%10;
		if(r==k)
		count++;
		n=n/10;
	}
	printf("%d",count);
}
