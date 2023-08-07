#include<stdio.h>

// Program to print access an individual  array's element
int main(){
    int i; // variable i loop ko execute karna kalya use karain ga
    int elements[5] = {4,6,3,6,7}; // ya 5 elements ka array banaya ha ma na

    printf("The First element of elements is:\n");
    printf("%d\n", elements[0]);
    
    printf("The Second element of elements is:\n");
    printf("%d\n", elements[1]);

    printf("The Third element of elements is:\n");
    printf("%d\n", elements[2]);

    printf("The Fourth element of elements is:\n");
    printf("%d\n", elements[3]);

    printf("The Fifth element of elements is:\n");
    printf("%d\n", elements[4]);
return 0;
}