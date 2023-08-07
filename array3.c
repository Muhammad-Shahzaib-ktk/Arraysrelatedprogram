#include<stdio.h>
int main(){
    //program ek array ka element change karna kalya. Ham index ko access kr k karain ga
    int array[] = {43,54,34,64,34,35,64,34,64};

    array[4] = 75;
    array[7] = 99;

    printf("Elements of array are as follows:\n");
    for(int i = 0; i < 9; i++)
    {
        printf("%d\n", array[i]);
    }
return 0;
}