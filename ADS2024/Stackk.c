#include <stdio.h>
int top = -1;
void push(int stack[], int max)
{
    int e;
    if (top != (max - 1))
    {
        printf("\nEnter the element to be pushed : \n");
        scanf("%d", &e);
        top++;
        stack[top] = e;
    }
    else
        printf("The stack is full!!\n");
}
void IsEmpty(int stack[])
{
    if (top == -1)
        printf("The Stack is Empty!");
    else
        printf("The stack is Not Empty!");
}
void IsFull(int stack[], int max)
{
    if (top == max - 1)
        printf("The Stack is FULL!");
    else
        printf("The Stack is NOT Full!");
}
int pop(int stack[])
{
    if (top == -1)
        printf("The Stack has no Elements to pop!\n");
    else
    {
        printf("%d is Popped from the stack!", stack[top]);
        top--;
    }
}
void Display(int stack[])
{
    int i;
    printf("Your Stack is :\t[");
    for (i = 0; i <= top; i++)
    {
        printf("%d\t", stack[i]);
    }
    printf("]");
}
void main()
{
    int max, choose;
    printf("Enter MAX of your Stack : ");
    scanf("%d", &max);
    int stack[max];
    while (1)
    {
        printf("\nChoose : \n1. Push an Element into the stack\n2. Pop an Element from the stack\n3. Check if Stack is Empty\n4. Check if Stack is Full\n5. Display Your Stack\n6. End\n");
        scanf("%d", &choose);
        switch (choose)
        {
        case 1:
            push(stack, max);
            break;
        case 2:
            pop(stack);
            break;
        case 3:
            IsEmpty(stack);
            break;
        case 4:
            IsFull(stack, max);
            break;
        case 5:
            Display(stack);
            break;
        case 6:
            break;
        default:
            printf("Instructions Unclear!!!");
            break;
        }
        if (choose == 6)
            break;
    }
}