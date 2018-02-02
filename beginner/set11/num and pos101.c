
#include <stdio.h>

int main(void) {
	int num,pos,a=1,i;
	scanf("%d %d",&num,&pos);
for(i=0;i<pos;i++)
   a=a*10;
   printf("%d",num%a);

	return 0;
}
