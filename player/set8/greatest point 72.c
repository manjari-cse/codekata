#include<stdio.h>
void main()
{
	int N,a[100000],i;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	for(i=0;i<N;i++)
	{
		if(a[i+1]<a[i])
		break;
	}
	printf("%d",a[i]);
}
