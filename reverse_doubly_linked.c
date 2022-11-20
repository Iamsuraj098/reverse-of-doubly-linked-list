#include<stdio.h>
#include<stdlib.h>
typedef struct nodetype
{
    struct nodetype* pre;
    int data;
    struct nodetype* next;
}node;
node*head = NULL;
node*tail = NULL;
void insertionAtBeginning(int data)
{
    node* temp = (node*)malloc(sizeof(node));
    temp->data = data;
    temp->pre = NULL;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
        return;
    }
    head->pre = temp;
    temp->next = head;
    head = temp;
}
void print()
{
    node*temp = head;
    printf("List: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void reverse()
{
    node* temp = head;
    printf("Reverse List: ");
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->pre;
    }
}
int main()
{
    int n, x=0;
    printf("enter the number of element: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Element: ");
        scanf("%d", &x);
        insertionAtBeginning(x);
        print();
    }
    reverse();
return 0;
}