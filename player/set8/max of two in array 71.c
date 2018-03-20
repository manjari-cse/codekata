#include<stdio.h>
void main()
{
	int N,a[10000],i;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	for(i=0;i<N-1;i++)
	{
		if(a[i]>a[i+1])
		printf("%d ",a[i]);
		else
		printf("%d ",a[i+1]);
	}
}
