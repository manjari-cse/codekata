#include<stdio.h>
#include<string.h>
void main()
{
	int i,count=0;
	char a[200];
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='0'&&a[i]<='9')
            count++;
				}
if(count==strlen(a))
printf("yes");
else
printf("no");
}
