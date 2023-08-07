#include <stdio.h>
#include <stdlib.h> // Include this header for dynamic memory allocation

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int *values = (int *)malloc(size * sizeof(int)); // Use dynamic memory allocation

    int similarValue;
    printf("Enter a single integer value: ");
    scanf("%d", &similarValue);

    printf("Storing similar integers in the array...\n");
    for (int i = 0; i < size; ++i) {
        values[i] = similarValue;
    }

    printf("Displaying integers from the array:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d\n", values[i]);
    }

    free(values); // Release the allocated memory
    return 0;
}
