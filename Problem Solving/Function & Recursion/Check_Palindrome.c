// Program to find if the given no is a palindrome

#include <stdio.h>

// Function to check if a number is a palindrome

int is_palindrome(int num)
{
    int reversed = 0, remainder, original;

    // Store the original number
    original = num;

    // Reverse the number
    while (num != 0)
    {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    // Check if the original and reversed numbers are equal
    if (original == reversed)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int main()
{
    int num;

    // Read the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is a palindrome
    if (is_palindrome(num))
    {
        printf("%d is a palindrome\n", num);
    }
    else
    {
        printf("%d is not a palindrome\n", num);
    }

    return 0;
}


