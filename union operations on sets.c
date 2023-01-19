// UNION OPERATIONS ON SETS IN C

#include <stdio.h>
 int main()
 {
    int a[10], b[10], c[10], i, j, k = 0, n1, n2;


    // Creating first set, Set A
  
    printf("Enter the size of set A\n");
    scanf("%d", &n1);
    printf("Enter the elements of set A\n");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }
  
    // Creating second set, Set B
  
    printf("Enter the size of set B\n");
    scanf("%d", &n2);
    printf("Enter the elements of set B\n");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    // logic for calculate union
    // copy the element of set A in set c
  
    for (i = 0; i < n1; i++)
    {
        // repeated element is not allowed so we checked is any value repeted
        for (j = 0; j < k; j++)
        {
            if (c[j] == a[i])
                break;
        }
        if (j == k) // if not repeated then store value in set c
        {
            c[k] = a[i];
            k++;
        }
    }
  
    // copy the element of set B in set c
  
    for (i = 0; i < n2; i++)
    {
        // repeated element is not allowed so we checked is any value repeted
     
        for (j = 0; j < k; j++)
        {
            if (c[j] == b[i])
                break;
        }
        if (j == k) 
         
        // if not repeated then store value in set c
         
        {
            c[k] = b[i];
            k++;
        }
    }
  
    // printing of union of set A and set B
  
    printf("\n\nUnion of set A and B is:- { ");
    for (i = 0; i < k; i++)
    {
        printf("%d  " , c[i]);
    }
    printf("}\n");
    return 0;
  }
