#include<stdio.h>
void main()
{
	int n, a[100000],b[100000],i,j,count;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	scanf("%d",&b[i]);
	for(i=0;i<n;i++)
	{
		count=0;
			for(j=0;j<n;j++)
			{
				if(a[i]==b[j])
			     count++;
			}
			if(count!=0)
			printf("%d ",a[i]);
	}

	
}
