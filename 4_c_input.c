#include <stdio.h>
int main() {
int a;
float b;
char ch;
printf("Type any character :=");
scanf("%c",&ch);
printf("Type any integer :=");
scanf("%d",&a);// %d for format and &a for store the value in a
printf("type any float :=");
scanf("%f",&b);//scanf for input

printf("\nThe integer valu is %d ,\nfloat valu %f ,\ncharacter value %c ",a,b,ch);
return 0;
}