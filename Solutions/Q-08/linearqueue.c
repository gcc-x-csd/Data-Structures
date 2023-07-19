// By - Kaustav Purkayastha ( Gurucharan University, Silchar - @ Department of Computer Science )

// 8. Write a program to implement all the operations of Linear Queue using array.


#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int queue[MAX], rear = 0, front = 0;
void insert();
void Delete();
void display();

void main()
{
    int choice;
    while (1)
    {
        printf("\n***MENU***\n");
        printf("1. Press 1 to insert element to queue.\n");
        printf("2. Press 2 to delete element from queue.\n");
        printf("3. Press 3 to display all elements of queue.\n");
        printf("4. Press 4 to exit the program.\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            Delete();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("\nExiting the program...\n");
            exit(1);
        default:
            printf("\nInvalid Choice!!!\n");
        }
    }
}

void insert()
{
    int add_item;
    if (rear == MAX)
        printf("\nQueue Overflow!\n");
    else
    {
        if (front == 0)
            front = 1;
        printf("\nInsert the element in queue: ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue[rear] = add_item;
    }
}

void Delete()
{
    if (front == 0 || front > rear)
    {
        printf("\nQueue Underflow!\n");
        return;
    }
    else if (front == rear)
    {
        printf("\nElement deleted from queue is: %d\n", queue[front]);
        front = 0;
        rear = 0;
    }
    else
    {
        printf("\nElement deleted from queue is: %d\n", queue[front]);
        front = front + 1;
    }
}

void display()
{
    int i;
    if (front == 0)
        printf("\nQueue is empty!\n");
    else
    {
        printf("\nQueue is: \n");
        printf("\nFront->");
        for (i = front; i <= rear; i++)
            printf("%d->", queue[i]);
        printf("Rear");
        printf("\n");
    }
}
