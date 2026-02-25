#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

// Insert at beginning
struct node* insbeg(struct node* head, int value)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = head;
    head = newnode;
    return head;
}

// Delete at beginning
struct node* delbeg(struct node* head)
{
    struct node* temp = head;
    head = head->next;
    free(temp);
    return head;
}

// Insert at end
struct node* insend(struct node* head, int value)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;

    if (head == NULL)
        return newnode;

    struct node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    return head;
}

// Delete at end
struct node* delend(struct node* head)
{
    if (head == NULL || head->next == NULL)
    {
        free(head);
        return NULL;
    }

    struct node* temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    struct node* del = temp->next;
    temp->next = NULL;
    free(del);
    return head;
}

// Insert at middle (position)
struct node* insmid(struct node* head, int value, int pos)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;

    struct node* temp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }

    newnode->next = temp->next;
    temp->next = newnode;
    return head;
}

// Delete at middle (position)
struct node* delmid(struct node* head, int pos)
{
    struct node* temp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }

    struct node* del = temp->next;
    temp->next = del->next;
    free(del);
    return head;
}

// Traverse
void traverse(struct node* head)
{
    struct node* temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

// Main function
int main()
{
    struct node* head = NULL;

    head = insbeg(head, 10);
    head = insbeg(head, 20);
    head = insbeg(head, 30);
    head = insend(head, 40);
    head = insend(head, 50);
    head = insend(head, 60);
    head = insmid(head, 35, 4);
    head = delmid(head, 4);
    head = delbeg(head);
    head = delend(head);

    traverse(head);

    return 0;
}