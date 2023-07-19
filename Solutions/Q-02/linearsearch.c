// By - Kaustav Purkayastha ( Gurucharan University, Silchar - @ Department of Computer Science )

// 2. Write a program to implement Linear Search algorithm.


#include <stdio.h>

void main()
{
    int arr[100], search, i, n;

    printf("How many numbers do you want to enter: ");
    scanf("%d", &n);
    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nEnter the number you want to search: ");
    scanf("%d", &search);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            printf("\n%d is present at location %d!\n", search, i + 1);
            break;
        }
    }
    if (i == n)
        printf("\n%d isn't present in the array!\n", search);
}
