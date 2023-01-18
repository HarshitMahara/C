//Program for traversing array elements.

#include <stdio.h>

#define MAX_SIZE 100  // Maximum size of the array

int main()
{
    int arr[MAX_SIZE];  // Declare the array
    int size;  // Size of the array
    int i;  // Loop variable

    // Read the size of the array
    
    printf("Enter size of the array: ");
    scanf("%d", &size);

    // Read the array elements
    
    printf("Enter elements in the array: ");
    for (i=0; i<size; i++)
        scanf("%d", &arr[i]);

    // Traverse the array and print its elements
    
    printf("\nArray elements: ");
    for (i=0; i<size; i++)
        printf("%d ", arr[i]);

    return 0;
}
