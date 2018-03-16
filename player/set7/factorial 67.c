#include <stdio.h>

int main(void) {
	int i,n,ans=1;
	printf("enter the number");
	scanf("%d",&n);
	if(n<=25&&n>=1)
	{
	for(i=n;i>=1;i--)
	ans=ans*i;
	printf("%d",ans);
}
	return 0;
}
