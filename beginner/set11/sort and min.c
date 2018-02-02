#include<stdio.h>
void main()
{
	long int i,a[10],t,j;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
	for(j=1;j<10;j++)
	{if(a[i]>a[j])
	{t=a[i];
	a[i]=a[j];
	a[j]=t;
	}
	}
}
	printf("%d",a[0]);
}
