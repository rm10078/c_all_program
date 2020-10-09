#include <stdio.h>
int sum(int a,int b); //function prototype or declear function

int main() {
int a,b;
a=10;
b=30;
int r=sum(a,b);  //call function
printf("a+b=%d",r);
return 0;
}
int sum(int a,int b){       //funstion definition
//int sum -because we return integer value
    int result;
    result=a+b;
    return result;      //return statment
}