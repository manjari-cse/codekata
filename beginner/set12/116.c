#include <stdio.h>

void main()
{
int n,k,count=0,r1,rev,r;
scanf("%d %d",&n,&k);
while(k>0)
{
    r=k%10;
    rev=rev*10+r;
    k=k/10;
    count++;
}
while(rev>0)
{r1=rev%10;
    n=n*10+r1;
    rev=rev/10;
}
printf("%d",n);
   
}
