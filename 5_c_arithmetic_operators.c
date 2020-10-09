#include <stdio.h>
int main() {
int a=15;
int b=5;
int c;

c=a+b;
printf("\n%d + %d=%d",a,b,c);
c=a-b;
printf("\n%d - %d=%d",a,b,c);
c=a*b;
printf("\n%d * %d=%d",a,b,c);
c=a/b;
printf("\n%d / %d=%d",a,b,c);
c=a%b;
printf("Remainder when a divided by b = %d \n",c);
return 0;
}