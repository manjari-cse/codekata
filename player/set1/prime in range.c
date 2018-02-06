
#include <stdio.h>

int main(void) {
    long int value1,value2;
	int count=0,i,k;
	printf("enrter the number");
	scanf("%d%d",&value1,&value2);
	for(k=value1+1;k<value2;k++)
	{
		count=0;
	for(i=2;i<k;i++)
	{
		if(k%i==0)
		{
			count++;
		}
	}
	if(count==0)
	printf("%d\t",k);
	}
	
	return 0;
}

