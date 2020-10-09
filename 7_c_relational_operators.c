#include <stdio.h>
int main()
{
    int a = 15, b = 15, c = 10,r;//declear all variable in one line
    //-------------Relational Operators-----------------------------
    // all code return 1 or 0.
    r=a==b;
    printf("%d == %d is %d \n", a, b, r);
    r=a==c;
    printf("%d == %d is %d \n", a, c, r);
    //      now write all code in one line
    printf("%d > %d is %d \n", a, b, a > b);
    printf("%d > %d is %d \n", a, c, a > c);
    printf("%d < %d is %d \n", a, b, a < b);
    printf("%d < %d is %d \n", a, c, a < c);
    printf("%d != %d is %d \n", a, b, a != b);
    printf("%d != %d is %d \n", a, c, a != c);
    printf("%d >= %d is %d \n", a, b, a >= b);
    printf("%d >= %d is %d \n", a, c, a >= c);
    printf("%d <= %d is %d \n", a, b, a <= b);
    printf("%d <= %d is %d \n", a, c, a <= c);

    return 0;
}