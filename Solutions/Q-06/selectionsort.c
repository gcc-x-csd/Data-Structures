// By - Kaustav Purkayastha ( Gurucharan University, Silchar - @ Department of Computer Science )

// 6. Write a program to implement Selection Sort.


#include <stdio.h>

void main()
{
    int arr[100], n, i, j, t, pos;

    printf("How many numbers do you want to enter: ");
    scanf("%d", &n);
    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n - 1; i++)
    {
        pos = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[pos] > arr[j])
                pos = j;
        }
        if (pos != i)
        {
            t = arr[i];
            arr[i] = arr[pos];
            arr[pos] = t;
        }
    }

    printf("\nSorted List in ascending order: \n");
    for (i = 0; i < n; i++)
        printf("%d\n", arr[i]);
}
