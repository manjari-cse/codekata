#include <stdio.h>

int main()
{int r,num=0;
 long int p;
    scanf("%d",&p);
    while(p!=0)
    {
        r=p%10;
        num=num*10+r;
        p=p/10;
    }
    printf("%d",num);

    return 0;
}
