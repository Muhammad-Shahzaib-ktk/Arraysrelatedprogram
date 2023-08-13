/*  Array[6] = {6,7,3,8,2,5}
Step1 : I will have to find Largest
Ste2 : I will have to check all the elements to find the second largest

*/

#include<stdio.h>
#include<limits.h>

int findLargest(int Arr[], int arraySize) // Function to find the largest Element
{
    int largest = Arr[0];
    for(int i = 1; i < arraySize; i++)
    {
        if(Arr[i] > largest )
        largest = Arr[i];
    }
    
    return largest;
}

int findSecondLargest(int Arr[], int arraySize, int largest) // Function to find the Secondlargest Element
{
    int secondlargest = INT_MIN;
    for(int i = 0; i < arraySize; i++)
    {
        if(Arr[i] > secondlargest && Arr[i] < largest )
        secondlargest = Arr[i];
    }
    
    return secondlargest;
}


int main(){
    int arraySize;
    int i;
    printf("Enter Array's Size:\n");
    scanf("%d", &arraySize);

    int Arr[arraySize];
    printf("Enter %d Elements!", arraySize);
    for(i = 0; i < arraySize; i++)
    {
        scanf("%d", &Arr[i] );
    }

    int largest = findLargest(Arr , arraySize);
    printf("Largest = %d\n", largest);

    int secondLargest = findSecondLargest(Arr , arraySize, largest);
    printf("SecondLargest = %d", secondLargest);



return 0;
}