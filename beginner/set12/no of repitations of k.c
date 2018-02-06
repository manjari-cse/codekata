
#include <stdio.h>

int main(void) {
	int a[1000],i,count=0,lim,k;
	scanf("%d %d",&lim,&k);
	for(i=0;i<lim;i++)
	scanf("%d",&a[i]);
	for(i=0;i<lim;i++)
	{
if(a[i]==k)
{
count++;
    
}
	}
	printf("%d",count);
	return 0;
}
