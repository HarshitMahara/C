// Write a program to find the sum of the series using the function: 1!/1+2!/2+3!/3+4!/4+5!/5

#include <stdio.h>

long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main(void) {
    long long sum = 0;
    for (int i = 1; i <= 5; i++) {
        sum += factorial(i) / i;
    }
    printf("The sum of the series is: %lld\n", sum);
    return 0;
}
