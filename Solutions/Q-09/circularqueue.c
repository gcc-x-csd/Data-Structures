// By - Kaustav Purkayastha ( Gurucharan University, Silchar - @ Department of Computer Science )

// 9. Write a program to implement all the operations of Circular Queue using array.


#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int queue[MAX], front = -1, rear = -1;
void enqueue();
void dequeue();
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
            enqueue();
            break;
        case 2:
            dequeue();
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

void enqueue()
{
    int element;
    printf("\nInsert the element in queue: ");
    scanf("%d", &element);
    if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        queue[rear] = element;
    }
    else if ((rear + 1) % MAX == front)
    {
        printf("\nQueue Overflow!\n");
    }
    else
    {
        rear = (rear + 1) % MAX;
        queue[rear] = element;
    }
}

void dequeue()
{
    if ((front == -1) && (rear == -1))
    {
        printf("\nQueue Underflow!\n");
    }
    else if (front == rear)
    {
        printf("\nThe dequeued element is %d\n", queue[front]);
        front = -1;
        rear = -1;
    }
    else
    {
        printf("\nThe dequeued element is %d\n", queue[front]);
        front = (front + 1) % MAX;
    }
}

void display()
{
    int i = front;
    if (front == -1 && rear == -1)
    {
        printf("\nQueue is empty!\n");
    }
    else
    {
        printf("\nQueue is: \n");
        printf("\nFront->");
        while (i <= rear)
        {
            printf("%d->", queue[i]);
            i = (i + 1) % MAX;
        }
        printf("Rear");
        printf("\n");
    }
}
