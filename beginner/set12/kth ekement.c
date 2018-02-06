

#include <stdio.h>

int main(void) {
	int a[1000],i,j,t,lim,k;
	scanf("%d %d",&lim,&k);
	for(i=0;i<lim;i++)
	scanf("%d",&a[i]);
	for(i=0;i<lim;i++)
	{
		for(j=0;j<lim;j++)
		{
			if(a[i]<a[j])
			{
				t=a[j];
				a[j]=a[i];
				a[i]=t;
			 }
			
		}
	}
	printf("%d\t",a[k-1]);
	return 0;
}
