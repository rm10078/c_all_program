#include <stdio.h>
int main() {
int a=10;
int b=5;
printf("a vlue is %d",a);
//--------assignment Operators------------
a+=b; //it's work like a=a+b
printf("\nThe a value is %d",a);

a+=b; //it's work like a=a+b
printf("\nThe a value is %d",a);
a=10; //for reset value

a-=b; //it's work like a=a-b
printf("\nThe a value is %d",a);
a=10; //for reset value

a*=b; //it's work like a=a*b
printf("\nThe a value is %d",a);
a=10; //for reset value

a/=b; //it's work like a=a/b
printf("\nThe a value is %d",a);
return 0;
}