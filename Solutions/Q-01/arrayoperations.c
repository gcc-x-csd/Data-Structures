// By - Kaustav Purkayastha ( Gurucharan University, Silchar - @ Department of Computer Science )

// 1. Write a program to implement insertion and deletion of an element in an array.


#include <stdio.h>
#include <stdlib.h>

void main()
{
    int arr[50], n, num, pos, i, choice;
    printf("How many elements do you want to enter in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

menu:
    printf("\n\n***MENU***\n");
    printf("1. Press 1 to insert an element.\n");
    printf("2. Press 2 to delete an element.\n");
    printf("3. Press 3 to display the array.\n");
    printf("4. Press 4 to exit the program.\n\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
    {
        printf("\nEnter the number you want to insert: ");
        scanf("%d", &num);
        printf("Enter the position at which you want to insert: ");
        scanf("%d", &pos);
        if (pos > n + 1)
            printf("\nInsertion is not possible!");
        else
        {
            for (i = n - 1; i >= pos - 1; i--)
            {
                arr[i + 1] = arr[i];
            }
            arr[pos - 1] = num;
            n = n + 1;
        }
        break;
    }
    case 2:
    {
        printf("\nEnter the position from where you want to delete the element: ");
        scanf("%d", &pos);
        if (pos > n)
            printf("\nDeletion is not possible!");
        else
        {
            for (i = pos - 1; i <= n - 1; i++)
            {
                arr[i] = arr[i + 1];
            }
            n = n - 1;
        }
        break;
    }
    case 3:
    {
        printf("\nThe array is: ");
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        break;
    }
    case 4:
    {
        printf("\nExiting the program... \n");
        exit(0);
        break;
    }
    default:
    {
        printf("\nInvalid Choice!!!");
        break;
    }
    }
    goto menu;
}
