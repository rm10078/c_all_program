#include <stdio.h>
int sum(int a,int b){  //this is other function
    int result;
    result=a+b;
    return result;
}
int main() {
int a,b;
a=10;
b=30;
int r=sum(a,b);
printf("a+b=%d",r);
return 0;
}