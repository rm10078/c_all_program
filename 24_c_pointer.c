//--------------change any variable value use pointer--------
#include <stdio.h>
int main() {
int value=30;
printf("the value is %d\n",value);
printf("the value variable address is %p\n",&value);//%p and & for print address
//-------now we change the variable value address
int * ptn=&value; //declear and put the value address
*ptn=99;
printf("now the value is change %d",value);
return 0;
}