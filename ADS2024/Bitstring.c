#include <stdio.h>

int IsElement(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
            return 1;
    }
    return 0;
}

void Display(int arr[], int size)
{
    printf("{");
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
        if (i != size - 1)
            printf(",\t");
    }
    printf("}");
}

void Arrange(int uni[], int set[], int size, int element, int j)
{
    for (int i = 0; i < size; i++)
    {
        if (uni[i] == element)
        {
            set[i] = element;
            return;
        }
        set[j] = 0;
    }
}

int main()
{
    int n, elet, n1;
    printf("Enter size of Universal set : ");
    scanf("%d", &n);
    int Universal[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %dth element in Universal set : ", i + 1);
        scanf("%d", &elet);
        if (IsElement(Universal, n, elet) == 0)
            Universal[i] = elet;
        else
        {
            printf("Cannot ADD Duplicate elements in a SET!\n");
            i--;
        }
    }

    printf("Limit of Your Set : ");
    scanf("%d", &n1);
    if (n1 > n)
    {
        printf("Size of your set can't be more than Universal set\nSize reassigned as the Size of Universal Set!\n");
        n1 = n;
    }
    int Firstset[n];
    for (int i = 0; i < n1; i++)
    {
        printf("Enter %dth element in your set : ", i + 1);
        scanf("%d", &elet);

        if (IsElement(Universal, n, elet) == 1 && IsElement(Firstset, n, elet) == 0)
        {
            Arrange(Universal, Firstset, n, elet, i);
        }
        else
        {
            printf("Errorr!!\nYour value not Found in the Universal set or it's duplicated!\n");
            i--;
        }
    }

    printf("Universal Set : ");
    Display(Universal, n);
    printf("\nSet 1 : ");
    Display(Firstset, n);
}