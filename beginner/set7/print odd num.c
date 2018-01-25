
#include <stdio.h>

int main(void) {
    int value,k,r,ans=0;
	printf("enter the number");
	scanf("%d",&value);
	k=value;
	while(k>0)
	{
		r=k%10;
		ans=(ans*10)+r;
		k=k/10;
	}
	
		while(ans>0)
	{
		r=ans%10;
	if(r%2==0);
	else
	printf("%d\t",r);
		ans=ans/10;
	}
	}
