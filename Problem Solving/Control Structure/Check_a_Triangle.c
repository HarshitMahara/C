// Program to check whether a triangle is Equilateral, Isosceles or Scalene.

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the lengths of the sides of the triangle: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a == b && b == c)
    {
        printf("The Triangle is Equilateral.\n");
    }
    else if (a == b || b == c || a == c)
    {
        printf("The Triangle is Isosceles.\n");
    }
    else
    {
        printf("The Triangle is Scalene.\n");
    }

    return 0;
}
