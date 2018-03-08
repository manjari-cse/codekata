#include<stdio.h>
void main()
{
	long int n;
	scanf("%d",&n);
	if(n<=32767&&n>=-32768||n>=-2147483647&&n<=2147483647 )
	{
		printf("integer");
	}
	else
	printf("not integer");
}
