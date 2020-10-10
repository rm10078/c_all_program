/*--------------two_dimensional_array---------*/
#include <stdio.h>
int main() {
int a[3][5]={{12,45,78,90,33},
             {55,67,87,99,33},
             {70,66,58,69,80}};
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 5; j++)
        {
            printf("\na[%d][%d] vlue is %d",i,j,a[i][j]);
        }
        
    }
    


return 0;
}
