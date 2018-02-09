
#include <stdio.h>

int main()
{char a[10000],b[10000];
int i,c;
    scanf("%s %s",a,b);
    for(i=0;a[i]!='\0';i++)
    {
    if(a[i]!=b[i])
    c++;
    }
    if(c==1)
    printf("yes");
    else
    printf("no");
    return 0;
}


