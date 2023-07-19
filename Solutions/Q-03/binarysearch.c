// By - Kaustav Purkayastha ( Gurucharan University, Silchar - @ Department of Computer Science )

// 3. Write a program to implement Binary Search algorithm.


#include <stdio.h>

void main()
{
    int arr[100], search, i, n, beg, mid, end;

    printf("How many numbers do you want to enter: ");
    scanf("%d", &n);
    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nEnter the number you want to search: ");
    scanf("%d", &search);

    beg = 0;
    end = n - 1;
    mid = (beg + end) / 2;

    while (beg <= end)
    {
        if (arr[mid] < search)
            beg = mid + 1;
        else if (arr[mid] == search)
        {
            printf("\n%d found at location %d!\n", search, mid + 1);
            break;
        }
        else
            end = mid - 1;
        mid = (beg + end) / 2;
    }
    if (beg > end)
        printf("\n%d isn't present in the array!\n", search);
}
