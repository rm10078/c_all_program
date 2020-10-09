#include <stdio.h>
int main() {
int a=9;//1001
int b=3;//0011
int d=1;//0001
int e=8;//1000
int c;
c= a & b;
printf("\n& result is %d",c);//0001=1

c= a | b;
printf("\n| result is %d",c);//1011=11

c= a ^ b;
printf("\n^ result is %d",c);//1010=10

c= d << 2;
printf("\n<< 2 result is %d",c);//0100=4

c= e >> 2;
printf("\n>> 2 result is %d",c);//0010=2
return 0;
}