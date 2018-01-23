#include <stdio.h>

int main(void) {
	int a,b,i;
	scanf("%d%d",&a,&b);
	for(i=0;i<=1000;i++)
	{
		if(a*b==i*i)
		printf("yes");
	}
	return 0;
}
