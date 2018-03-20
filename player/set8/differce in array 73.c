#include<stdio.h>
void main()
{
	int N,a[10000],i,k;
	scanf("%d %d",&N,&k);
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	for(i=0;i<N-1;i++)
	{
    if(a[i]-a[i+1]==k)
    {
	 printf("%d",a[i]);
     break;
	}
}
}
