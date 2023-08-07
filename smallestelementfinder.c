#include<stdio.h>

// Function to find the smallest element of an array

// int array[6] = {4,6,7,3,6};
int FindSmallestElement(int Arr[], int arraySize)
{ 
    int Smallest =  Arr[0]; // For example, Arr[0] = 4 ;
    for(int i = 0; i < arraySize; i++)
    {
    
    if(Arr[i] < Smallest)   //if ( Arr[1] < 4 ) Condition false for Arr[1] = 6;
    {
        Smallest =  Arr[i];         // Smallest = 
    }
    
    }
    return Smallest;

}

int main(){
    int arraySize;
    
    printf("Enter Array's Size:\n");
    if(scanf("%d", &arraySize) != 1 || arraySize <= 0)
    {
        printf("Invalid INPUT!");
        return 1;

    }

    int Arr[arraySize];

    printf("Enter desired %d Array's Elements :\n", arraySize);
    for(int i = 0; i < arraySize; i++)
    {
        scanf("%d", &Arr[i]);
    }
    
    printf("Smallest Element is : %d", FindSmallestElement(Arr , arraySize));
return 0;
}