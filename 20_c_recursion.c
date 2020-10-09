#include <stdio.h>
void sum(int a,int b);
int main() {
int a,b;
a=10;
b=30;
sum(a,b);
return 0;
}
void sum(int a,int b){
    int result;
    result=a+b;
   printf("\na+b=%d",result);
   if (result<70000)
   {
       sum(a,result); // sum() function calls itself
   }

}