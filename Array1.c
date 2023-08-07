#include<stdio.h>

// Program to print an array's elements
int main(){
    int i; // variable i loop ko execute karna kalya use karain ga
    int elements[5] = {4,6,3,6,7}; // ya 5 elements ka array banaya ha ma na

    // abi ham loop lagain ga ta k array k 5ncho element ko print kar la

    printf("The elements of the given array are as follows:\n");
    
    for(i = 0 ; i <= 4 ; i++)
    {
        printf("%d\n", elements[i]); 
    }

    
return 0;
}