#include<stdio.h>
#include<string.h>
void main()
{int i,j=0,n;
char a[10000],b[10000];
	scanf("%s",a);
	scanf("%d",&n);
	for(i=n;i<=strlen(a);i++)
	{
		b[j]=a[i];
		j++;
	}	
			j=strlen(a)-n;
			for(i=0;i<n;i++)
			{
				b[j]=a[i];
				j++;
			}
				printf("%s",b);
		
}
