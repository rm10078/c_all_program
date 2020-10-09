/*---------make a calculator use switch case --------*/
#include <stdio.h>
int main() {
float a,b;
char op;
printf("Type your opration :");
scanf("%c",&op);

printf("\nType first number : ");
scanf("%f",&a);

printf("\nType second number :");
scanf("%f",&b);

switch (op)
{
case '+':
    printf("%f + %f = %f",a,b,a+b);
    break;
case '-':
    printf("%f - %f = %f",a,b,a-b);
    break;
case '*':
    printf("%f * %f = %d",a,b,a*b);
    break;
case '/':
    printf("%f / %f = %f",a,b,a/b);
    break;

default:
    printf("error");
    break;
}

return 0;
}