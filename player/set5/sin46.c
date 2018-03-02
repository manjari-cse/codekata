#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main () {
   float x, ret, val;

scanf("%f",&x);
   val = PI / 180;
   ret = sin(x*val);
   printf("The sine of %f is %f degrees", x, ret);
   
   return(0);
}
