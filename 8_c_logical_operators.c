#include <stdio.h>
int main() {
/*
&&   logical and
||   logical or
!    logical not
*/
int a=1;
int b=0;
int c=1;
int r;

r=(a && b);
printf("\n%d and %d result is %d",a,b,r);
r=(a && c);
printf("\n%d and %d result is %d",a,c,r);

r=(a || b);
printf("\n%d or %d result is %d",a,b,r);
r=(a || c);
printf("\n%d or %d result is %d",a,c,r);

r=!a;
printf("\n%d not result is %d",a,r);
r=!b;
printf("\n%d not result is %d",b,r);

return 0;
}