#include<stdio.h>
void main()
{int i,N,K,a[100000];
	scanf("%d %d",&N,&K);
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
		for(i=N-1;i>N-K-1;i--)
		{
			a[i]=0;
		}
	for(i=0;i<N-K;i++)
	printf("%d ",a[i]);
}
