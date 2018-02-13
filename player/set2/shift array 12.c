#include<stdio.h>
void main()
{
long int a[10],j,i,k,n,t;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(j=0;j<k;j++)
	{
			t=a[n-1];
	for(i=n-2 ;i>=0;i--)
	{		a[i+1]=a[i];	
	}
	a[0]=t;
}
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}
