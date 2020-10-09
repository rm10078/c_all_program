#include <stdio.h>
#include <stdbool.h>    //for boolean variable
int main() {
    //-------integers-------
int a=10;       //format--%d--or--%i--//integers variable **min 2 byte to 4 byte
long int b=1000000;     //format--%ld--%li--//long integers **min 4 byte to 8 byte
long long int c=500000000; //fromat--%lld--%lli--//long long integers **min 8 byte
short int d=8;  //format--%hd--short int **8 byte

float e=10.45;//format--%f--float **4byte
double f=109.678;//format--%lf--double **8byte
long double g=455415664.565666;//format--%Lf--long double **10 to 16 byte

char h='R';//format--%c--//character **1 byte
bool j=true;//**1 bit true or false
return 0;
}