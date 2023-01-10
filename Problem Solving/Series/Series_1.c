// Find the sum of first n terms of the following series: 1! + 2! + 3! + 4!...................

#include <stdio.h>

int main(void) {
    int n;
    long long sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        long long factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }
        sum += factorial;
    }

    printf("The sum of the first %d terms is: %lld\n", n, sum);

    return 0;
}
