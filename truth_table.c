// Program to print the truth table of OR, AND and  NOT Gate 

#include<stdio.h>
void main()
{
    printf("NAME: HARSHIT SINGH MAHARA \n");

    int i , c ,a[4]={0,0,1,1},b[4]={0,1,0,1};
    printf("\n----------------------------------------------------------------------------------------------");
    printf("\nA\t\B\t\A AND B");
    printf("\n----------------------------------------------------------------------------------------------");
    for (i=0;i<4;i++)
    {
        c=a[i]&&b[i];
        printf("\n%d\t%d\t%d",a[i],b[i],c);
    }
    printf("\n----------------------------------------------------------------------------------------------------");
    printf("\n----------------------------------------------------------------------------------------------");
    printf("\nA\t\B\t\A OR B");
    printf("\n----------------------------------------------------------------------------------------------");
    for (i=0;i<4;i++)
    {
        c=a[i]||b[i];
        printf("\n%d\t%d\t%d",a[i],b[i],c);
    }
    printf("\n----------------------------------------------------------------------------------------------------");
    printf("\n----------------------------------------------------------------------------------------------");
    printf("\nA\t\NOT A");
    printf("\n----------------------------------------------------------------------------------------------");
    for (i=0;i<2;i++)
    {
        c=!b[i];
        printf("\n%d\t%d",b[i],c);
    }
}
