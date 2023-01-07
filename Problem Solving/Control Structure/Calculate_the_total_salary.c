/*
Write a program to calculate the total salary of a person.
The user has to enter the basic salary (an integer) and the grade (an uppercase character), and depending upon which the
total salary is calculated as - totalSalary = basic + hra + da + allow – pf. where :
hra = 20% of basic, da = 50% of basic,
allow = 1700 if grade = ‘A’,
allow = 1500 if grade = ‘B’,
allow = 1300 if grade = ‘C'
or any other character, pf = 11% of basic.
Round off the total salary and then print the integral part only.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int basic;
    char grade;
    float hra, da, allow, pf, totalSalary;

    // Read basic salary and grade from user

    printf("Enter basic salary: ");
    scanf("%d", &basic);
    printf("Enter grade: ");
    scanf(" %c", &grade);

    // Calculate hra, da, allow, and pf

    hra = 0.2 * basic;
    da = 0.5 * basic;
    if (grade == 'A')
        allow = 1700;
    else if (grade == 'B')
        allow = 1500;
    else
        allow = 1300;
    pf = 0.11 * basic;

    // Calculate total salary

    totalSalary = basic + hra + da + allow - pf;

    // Round off the total salary and print the integral part

    printf("Total salary: %.0f", round(totalSalary));

    return 0;
}
