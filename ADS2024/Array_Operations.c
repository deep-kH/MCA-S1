#include <stdio.h>
int i, w, e, j, n;
void read(int a[], int n)
{
    for (i = 0; i < n; i++)
    {
        printf("Enter %dth element : ", i + 1);
        scanf("%d", &a[i]);
    }
}
void display(int a[], int n)
{
    printf("\nThe array is given : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}
void insert(int a[], int n)
{
    printf("Enter the position to insert the element : ");
    scanf("%d", &w);
    printf("Enter the element to be inserted : ");
    scanf("%d", &e);
    n = n + 1;
    for (i = n; i > w - 1; i--)
    {
        a[i] = a[i - 1];
    }
    a[w - 1] = e;
}
void delete(int a[], int n)
{
    int c;
    int f;
    printf("\nDelete by index or Element(1/2) : ");
    scanf("%d", &c);
    if (c == 1)
    {
        printf("\nEnter the position to be deleted : ");
        scanf("%d", &w);
        for (i = w - 1; i < n; i++)
        {
            a[i] = a[i + 1];
        }
        n--;
    }
    else
    {
        printf("\nEnter the Element to be deleted : ");
        scanf("%d", &w);
        f = 0, i = 0;
        for (i = 0; i < n; i++)
        {
            if (a[i] == w)
            {
                f = 1;
                break;
            }
        }
        if (f == 1)
        {
            for (j = i; j < n; j++)
            {
                a[j] = a[j + 1];
            }
            n--;
        }
        else
        {
            printf("\nERROR!!! The Element is not found in the array!\n");
        }
    }
}
void sort(int a[], int n)
{
    int temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < (n - 1); j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
void merge(int a[], int n)
{
    int m;
    printf("Enter the limit of the array to be merged : ");
    scanf("%d", &m);
    int b[m];
    for (i = 0; i < m; i++)
    {
        printf("Enter %dth element : ", i + 1);
        scanf("%d", &b[i]);
    }
    int c[m+n];
    for (i = 0; i < (n + m); i++)
    {
        if (i < n)
            c[i] = a[i];
        
        c[i + n ] = b[i];
    }
    for (i = 0; i < m+n; i++)
    {
        printf("The Merged Array is Shown \n%d\t", c[i]);
    }
}
int main()
{
    printf("Enter limit of array : ");
    scanf("%d", &n);
    int a[n], type;
    read(a, n);
    while (1)
    {
        printf("\nChoose your action : \n1. Sort Array\n2. Insert into array\n3. Delete from array\n4. Display the array\n5. Replace array\n6. Merge Arrays\n");
        scanf("%d", &type);
        switch (type)
        {
        case 1:
            sort(a, n);
            break;
        case 2:
            insert(a, n);
            n++;
            break;
        case 3:
            delete (a, n);
            n--;
            break;
        case 4:
            display(a, n);
            break;
        case 5:
            read(a, n);
            break;
        case 6:
            merge(a, n);
            break;
        default:
            printf("ERROR !!!!");
            break;
        }
    }
    return 0;
}