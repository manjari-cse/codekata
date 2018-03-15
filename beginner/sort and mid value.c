#include <stdio.h>

int main(void) {
	int a[1000],i,j,t,limit;
	scanf("%d",&limit);
	for(i=0;i<limit;i++)
	scanf("%d",&a[i]);
	for(i=0;i<limit;i++)
	{
		for(j=0;j<limit;j++)
		{
			if(a[i]>a[j])
			{
				t=a[j];
				a[j]=a[i];
				a[i]=t;
			 }
			
		}
	}
	printf("%d\t",a[limit/2]);
	return 0;
}
