#include <stdio.h>

int main()
{int num,place,a[10],i;
    scanf("%d %d",&num,&place);
    for(i=0;i<num;i++)
    scanf("%d",&a[i]);
    printf("%d",a[place-1]);

    return 0;
}


