// By - Kaustav Purkayastha ( Gurucharan University, Silchar - @ Department of Computer Science )

// 11. Write a program to implement Stack using Linked List.


#include <stdio.h>
#include <stdlib.h>

struct node
{
    int val;
    struct node *next;
};
struct node *head;

void push();
void pop();
void display();

void main()
{
    int choice;
    while (1)
    {
        printf("\n***MENU***\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
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
            printf("\nInvalid Choice!!\n");
        }
    }
}

void push()
{
    int val;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
        printf("\nUnable to push data!!\n");
    else
    {
        printf("\nEnter the data you want to push: ");
        scanf("%d", &val);
        if (head == NULL)
        {
            ptr->val = val;
            ptr->next = NULL;
            head = ptr;
        }
        else
        {
            ptr->val = val;
            ptr->next = head;
            head = ptr;
        }
        printf("\nItem Pushed Successfully!!\n");
    }
}

void pop()
{
    int item;
    struct node *ptr;
    if (head == NULL)
        printf("\nStack Underflow!!\n");
    else
    {
        item = head->val;
        ptr = head;
        head = head->next;
        free(ptr);
        printf("\nPopped value: %d\n", item);
    }
}

void display()
{
    int i;
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
        printf("\nStack is empty!!\n");
    else
    {
        printf("\nPrinting Stack elements: \n");
        printf("\nTOP->\n");
        while (ptr != NULL)
        {
            printf("%d\n", ptr->val);
            ptr = ptr->next;
        }
    }
}
