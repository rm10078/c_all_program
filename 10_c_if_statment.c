#include <stdio.h>
int main() {
int a;
printf("Type any number : ");
scanf("%d",&a);

if (a % 2)
{
    printf("Number is odd.");
}
else
{
    printf("Number is even.");
}

return 0;
}