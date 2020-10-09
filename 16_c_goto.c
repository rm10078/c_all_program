#include <stdio.h>
int main() {
float gpa;
printf("Type your gpa : ");
scanf("%f",&gpa);

if (gpa>10.0 || gpa<0.0)
{
    printf("error");
    goto first;
}


else if (gpa<6.0)
{
    printf("not allow");
    goto first;
}
else
{
    printf("wooooooow");
}
printf("\nyou are selected.");

first:
{
    printf("\nThe end");
}


return 0;
}