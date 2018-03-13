#include<stdio.h>
#include<string.h>
void main()
{
	char name[200],name1[200];
	int count=0,i;
    scanf("%s",name);
    scanf("%s",name1);
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]==name1[i])
		count++;
	}
	if(count==strlen(name))
	printf("yes");
	else
	printf("no");
}
