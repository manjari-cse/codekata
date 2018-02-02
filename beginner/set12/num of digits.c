#include<stdio.h>
void main()
{int num,r,count=0;
scanf("%d",&num);
while(num>0)
{r=num%10;
num=num/10;
count++;
}
printf("%d",count);
}
