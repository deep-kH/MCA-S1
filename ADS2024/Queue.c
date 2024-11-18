#include <stdio.h>
int max, front = 0, rear = -1, item;
void Add(int queue[])
{
    if (rear == max - 1)
        printf("The Queue is Full!");
    else
    {
        printf("Enter the item : ");
        scanf("%d", &item);
        rear++;
        queue[rear] = item;
    }
    printf("\n%d\t%d\n",front,rear);
}
void Delete(int queue[])
{
    printf("\n%d\t%d\n",front,rear);
    if (rear == -1 || front > rear)
        printf("The Queue is Empty!!");
    else
    {
        printf("%d ha been deleted from the Queue!", queue[front]);
        front++;
    }
}
void display(int queue[])
{
    if (rear == -1 || front > rear)
        printf("The Queue is Empty");
    else
    {
        printf("[");
        for (int i=front; i <= rear; i++)
            printf("%d,\t", queue[i]);
    }
    printf("\b\b\b\b\b]");
    printf("\n%d\t%d\n",front,rear);
}
void main()
{
    printf("Limit of your Queue");
    scanf("%d", &max);
    int queue[max];
    int ch;
    while (1)
    {
        printf("\nChoose a value \n1. Insert\n2. Delete\n3. Display\n4. End\t");
        scanf("%d", &ch);
        if (ch == 4)
            break;
        switch (ch)
        {
        case 1:
            Add(queue);
            break;
        case 2:
            Delete(queue);
            break;
        case 3:
            display(queue);
            break;
        default:
            printf("Instructions Unclear");
            break;
        }
    }
}