// By - Kaustav Purkayastha ( Gurucharan University, Silchar - @ Department of Computer Science )

// 7. Write a program to implement all the operations of Stack using array.


#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void push(int);
void pop();
void display();

int stack[SIZE], top = -1;

void main()
{
    int value, choice;
    while (1)
    {
        printf("\n\n\n***MENU***\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit");
        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the value to be inserted: ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("\nExiting the program...\n");
            exit(0);
        default:
            printf("\nWrong selection!!! Try again!!!");
        }
    }
}

void push(int value)
{
    if (top == SIZE - 1)
        printf("\nStack is full!!!");
    else
    {
        top = top + 1;
        stack[top] = value;
        printf("\nInserted element is %d", stack[top]);
    }
}

void pop()
{
    if (top == -1)
        printf("\nStack is empty!!!");
    else
    {
        printf("\nDeleted element is %d", stack[top]);
        top = top - 1;
    }
}

void display()
{
    int i;
    if (top == -1)
        printf("\nStack is empty!!!");
    else
    {
        printf("\nStack is...\n");
        for (i = top; i >= 0; --i)
            printf("%d\n", stack[i]);
    }
}
