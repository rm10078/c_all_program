#include <stdio.h>
int main() {
int age;
printf("Type your age: ");
scanf("%d",&age);

if (age>100 || age<5)
{
    printf("error");
}

else if (age<18)
{
    printf("go and watch pogo ");
}


else
{
    printf("welcome ");
}






return 0;
}