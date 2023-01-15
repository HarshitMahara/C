// Display Prime Numbers Between Intervals Using Function

#include <stdio.h>

// Function to check if a number is prime

int is_prime(int num)
{
    if (num <= 1)
    {
        return 0;
    }
    else if (num <= 3)
    {
        return 1;
    }
    else if (num % 2 == 0 || num % 3 == 0)
    {
        return 0;
    }
    int i;
    for (i = 5; i * i <= num; i += 6)
    {
        if (num % i == 0 || num % (i + 2) == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int start, end, i;

    // Read the start and end numbers from the user
    
    printf("Enter start number: ");
    scanf("%d", &start);
    printf("Enter end number: ");
    scanf("%d", &end);

    // Print all the prime numbers in the given range
    
    printf("Prime numbers in the range %d to %d:", start, end);
    for (i = start; i <= end; i++)
    {
        if (is_prime(i))
        {
            printf(" %d", i);
        }
    }
    printf("\n");

    return 0;
}
