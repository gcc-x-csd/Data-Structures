// By - Kaustav Purkayastha ( Gurucharan University, Silchar - @ Department of Computer Science )

// 12. Write a program to implement Linear Queue using Linked List.


#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front;
struct node *rear;

void insert();
void Delete();
void display();

void main()
{
    int choice;
    while (1)
    {
        printf("\n***MENU***\n");
        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
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
            exit(0);
        default:
            printf("\nInvalid Choice!!\n");
        }
    }
}

void insert()
{
    struct node *ptr;
    int item;

    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\nOVERFLOW!!\n");
        return;
    }
    else
    {
        printf("\nEnter value to be inserted: ");
        scanf("%d", &item);
        ptr->data = item;
        if (front == NULL)
        {
            front = ptr;
            rear = ptr;
            front->next = NULL;
            rear->next = NULL;
        }
        else
        {
            rear->next = ptr;
            rear = ptr;
            rear->next = NULL;
        }
    }
}

void Delete()
{
    struct node *ptr;
    if (front == NULL)
    {
        printf("\nUNDERFLOW!!\n");
        return;
    }
    else
    {
        ptr = front;
        front = front->next;
        printf("\nElement deleted from queue is: %d\n", ptr->data);
        free(ptr);
    }
}

void display()
{
    struct node *ptr;
    ptr = front;
    if (front == NULL)
    {
        printf("\nQueue is empty!!\n");
    }
    else
    {
        printf("\nQueue is: \n");
        printf("\nFront->");
        while (ptr != NULL)
        {
            printf("%d->", ptr->data);
            ptr = ptr->next;
        }
        printf("Rear\n");
    }
}
