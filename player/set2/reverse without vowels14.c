#include<stdio.h>
void main()
{char a[20],b[20];
 int i,j=0,count;
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
	count++;
	if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U');
	else
	{
		b[j]=a[i];
		j++;
	}
}
j=0;
for(i=count-1;i>=0;i--)
{a[j]=b[i];
j++;
}
printf("%s",a);
}
