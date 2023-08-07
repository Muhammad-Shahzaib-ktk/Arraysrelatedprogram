#include<stdio.h>

int main(){

    int arraySize, result = 0;

    printf("Enter Array's Size:\n ");
    if (scanf("%d", &arraySize) != 1 || arraySize <=0)
    {
        printf("Invalid Input! Dear User, Please Enter a valid Input!\n");
        return 1;
    }

    int sum[arraySize];

    printf("Now, Enter your desired %d Elements:\n", arraySize);
    for(int i = 0; i < arraySize; i++)
    {
        scanf("%d", &sum[i]);
    }

    for(int i = 0; i < arraySize; i++)
    {
        result = result +  sum[i];
    }
    printf("Your Sum is : %d ", result);

return 0;
}