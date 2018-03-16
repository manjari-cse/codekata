#include<stdio.h>
void main()
{
	long int n,x,a[100],sum=0,i;
	scanf("%d %d",&n,&x);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	sum=sum+a[i];
	if(sum==x)
	printf("yes");
	else
	printf("no");
}
