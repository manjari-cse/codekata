#include<stdio.h>
void main()
{int n,k,val=1,i;
scanf("%d %d",&n,&k);
for(i=1;i<=k;i++)
val=val*n;
printf("%d",val);
}
