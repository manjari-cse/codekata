#include<stdio.h>
void main()
{
	int N,b,a[1000000],i=0,count=0,j=1,max=0;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	for(i=0;i<N;i++)
{
	for(j=0;j<N;j++)
	{
		b=a[i]-a[j];
		if(b>max)
		max=b;
	}
}
printf("%d",max);
}
