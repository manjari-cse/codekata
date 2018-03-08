#include<stdio.h>
void main()
{
	int n1,n2,n3;
	scanf("%d %d %d",&n1,&n2,&n3);
	if(n1<180&&n1>0&&n2<180&&n2>0&&n3<180&&n3>0)
	{
		printf("yes");
	}
	else
	printf("no");
}
