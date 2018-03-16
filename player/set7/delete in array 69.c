#include<stdio.h>
void main()
{int i,n,k,a[100000];
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
		for(i=n-1;i>n-k-1;i--)
		{
			a[i]=0;
		}
	for(i=0;i<n-k;i++)
	printf("%d ",a[i]);
}
