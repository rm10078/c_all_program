#include <stdio.h>
void sum(int a,int b);//void sum--because this function return
int main() {
int x=10,y=70;
sum(x,y); //sum not return anything
return 0;
}
void sum(int a,int b){ //no return in thhis function
int r=a+b;
printf("a+b=%d",r);
}