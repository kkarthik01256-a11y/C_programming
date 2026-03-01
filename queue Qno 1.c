#include <stdio.h>
#include <stdlib.h>

// Structure definition
struct Node
{
    int data;
    struct Node* next;
};

// Enqueue function
struct Node* enqueue(struct Node* rear, int value)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (rear == NULL)
    {
        return newNode;
    }

    rear->next = newNode;
    return newNode;
}

// Dequeue function
struct Node* dequeue(struct Node* front)
{
    if (front == NULL)
    {
        printf("Queue is empty\n");
        return NULL;
    }

    struct Node* temp = front;
    printf("Deleted: %d\n", front->data);
    front = front->next;
    free(temp);

    return front;
}

// Peek function
void peek(struct Node* front)
{
    if (front == NULL)
        printf("Queue is empty\n");
    else
        printf("Front element: %d\n", front->data);
}

// Display function
void display(struct Node* front)
{
    if (front == NULL)
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements: ");
    while (front != NULL)
    {
        printf("%d ", front->data);
        front = front->next;
    }
    printf("\n");
}

int main()
{
    struct Node* front = NULL;
    struct Node* rear = NULL;

    // Enqueue elements
    rear = enqueue(rear, 10);
    if (front == NULL) front = rear;

    rear = enqueue(rear, 20);
    rear = enqueue(rear, 30);

    display(front);

    // Dequeue
    front = dequeue(front);

    display(front);

    // Peek
    peek(front);

    return 0;
}