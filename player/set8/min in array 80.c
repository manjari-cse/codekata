#include<stdio.h>
void main()
{
	int N,b,a[1000000],i=0,min=N;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	for(i=0;i<N;i++)
{
	if(a[i]>a[i+1])
	{
	b=a[i]-a[i+1];
	if(b<min)
	min=b;

}
}
printf("%d",min);
}
