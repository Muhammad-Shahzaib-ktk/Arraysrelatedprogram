#include<stdio.h>

int findLargestElement(int array[], int arraySize) {
    int largest = array[0];
    for (int i = 1; i < arraySize; i++) {
        if (array[i] > largest) {
            largest = array[i];
        }
    }
    return largest;
}

int main(){
    int arraySize = 0;

    printf("Enter Array's Size:\n");
    if(scanf("%d", &arraySize) != 1 || arraySize <= 0) // Error handling for less than 0 input
    {
        printf("Invalid Input! Please, Enter Input greater than 0!\n");
        return 1;
    }

    int array[arraySize];

    printf("Now, Enter your desired %d elements: \n", arraySize); //Input Array elements 
    for(int i = 0; i < arraySize; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Largest Array's Element is : %d", findLargestElement(array, arraySize) );
    
return 0;
    }
    

