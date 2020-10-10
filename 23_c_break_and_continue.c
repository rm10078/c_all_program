#include <stdio.h>
int main() {
int a=20;
for(int i=0;i<a;i++){
printf("%d\n",i);
if (i==10)
{
    printf("stop loop");//break loop
    break;
}
}
for(int i=0;i<a;i++){
if (i==10)
{
    printf("continue loop\n"); //continue loop
    continue;
}
printf("%d\n",i);
}
return 0;
}