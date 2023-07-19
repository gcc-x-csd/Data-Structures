// By - Kaustav Purkayastha ( Gurucharan University, Silchar - @ Department of Computer Science )

// 5. Write a program to implement Insertion Sort.


#include <stdio.h>

void main()
{
    int arr[100], n, i, j, t, Z = 0;

    printf("How many numbers do you want to enter: ");
    scanf("%d", &n);
    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 1; i <= n - 1; i++)
    {
        t = arr[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > t)
            {
                arr[j + 1] = arr[j];
                Z = 1;
            }
            else
                break;
        }
        if (Z)
            arr[j + 1] = t;
    }

    printf("\nSorted List in ascending order: \n");
    for (i = 0; i < n; i++)
        printf("%d\n", arr[i]);
}
