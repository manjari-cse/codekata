#include<stdio.h>
#include<string.h>
void main()
{
	char name[200],name1[200];
	int i,count=0;
	scanf("%s",name);
	scanf("%s",name1);

	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]>='a'&&name[i]<='z')
		{
			name[i]=name[i]-32;
		}
	}

		for(i=0;name1[i]!='\0';i++)
	{
		if(name1[i]>='a'&&name1[i]<='z')
		{
			name1[i]=name1[i]-32;
		}
	}

	if(strlen(name)==strlen(name1))
	{
		for(i=0;name[i]!='\0';i++)
		{
			
		if(name[i]==name1[i])
		count++;
	    }
		}

	
			if(count==strlen(name))
	printf("yes");
	else
	printf("no");
	}
