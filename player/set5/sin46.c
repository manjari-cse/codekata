#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main () {
   double x, ret, val;
   float round1;
   int a;

scanf("%lf",&x);
   val = PI / 180;
   ret = sin(x*val);
   round1=(float)(ret);
   if(round1==-1.000000||round1<=-0.000000||round1==0.000000||round1==1.000000)
   {
   	a=(int)(round1);
   	printf("%d",a);
   }
   else
   printf("%.1f",round1);
   
   return(0);
}
