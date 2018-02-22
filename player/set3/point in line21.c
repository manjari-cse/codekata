#include<stdio.h>
void main()
{int i,a[20][20],j,count=0;
for(i=0;i<3;i++)
{	for(j=0;j<2;j++)
scanf("%d",&a[i][j]);
}
	for(i=0;i<3;i++)
	{
		if(a[i][0]==0)
		count++;
	}
	
	if(count==3)
	printf("yes");
	else
	printf("no");
}
