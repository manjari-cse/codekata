#include<stdio.h>
void main()
{
	int N,a[10000],i,count=0,j;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	for(i=0;i<N-1;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(a[i]<a[j])
			count++;
		}
	}
	printf("%d",count);
}
