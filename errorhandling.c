#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
   scanf("%d", &size); 
    if (size <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1; // Return non-zero to indicate an error
    }

    int *values = (int *)malloc(size * sizeof(int));

    int similarValue;
    printf("Enter a single integer value: ");
    if (scanf("%d", &similarValue) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        free(values);
        return 1; // Return non-zero to indicate an error
    }

    printf("Storing similar integers in the array...\n");
    for (int i = 0; i < size; ++i) {
        values[i] = similarValue;
    }

    printf("Displaying integers from the array:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d\n", values[i]);
    }

    free(values);
    return 0;
}
