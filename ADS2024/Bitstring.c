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

void Arrange(int uni[], int set[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (uni[i] == element)
        {
            set[i] = element;
            return;
        }
    }
}

void clearset(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        arr[i] = 0;
}

void Bitstring(int uni[], int arr[], int bit[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == uni[i])
            bit[i] = 1;
        else
            bit[i] = 0;
    }
}

void Setmake(int Universal[], int n, int Firstset[])
{
    int n1, elet;
    printf("Limit of Your Set : ");
    scanf("%d", &n1);
    if (n1 > n)
    {
        printf("Size of your set can't be more than Universal set\nSize reassigned as the Size of Universal Set!\n");
        n1 = n;
    }
    for (int i = 0; i < n1; i++)
    {
        printf("Enter %dth element in your set : ", i + 1);
        scanf("%d", &elet);

        if (IsElement(Universal, n, elet) == 1 && IsElement(Firstset, n, elet) == 0)
        {
            Arrange(Universal, Firstset, n, elet);
        }
        else
        {
            printf("Errorr!!\nYour value not Found in the Universal set or it's duplicated!\n");
            i--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (Firstset[i] != Universal[i])
        {
            Firstset[i] = 0;
        }
    }
}

void Union(int first[], int second[], int n, int uni[])
{
    clearset(uni, n);
    for (int i = 0; i < n; i++)
    {
        if (first[i] == 1 && second[i] == 1)
            uni[i] = 1;
    }
}

void Intersection(int first[], int second[], int n, int Inter[])
{
    clearset(Inter, n);
    for (int i = 0; i < n; i++)
    {
        if (first[i] == 1 || second[i] == 1)
            Inter[i] = 1;
    }
}

void readBitstring(int Uni[], int Bit[], int n, int set[])
{
    for (int i = 0; i < n; i++)
    {
        if (Bit[i] == 1)
            set[i] = Uni[i];
        else
            set[i] = 0;
    }
}

int main()
{
    int n, elet;
    printf("Enter size of Universal set : ");
    scanf("%d", &n);
    int Universal[n];
    clearset(Universal, n);

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

    int Firstset[n];
    clearset(Firstset, n);
    Setmake(Universal, n, Firstset);

    int Secondset[n];
    clearset(Secondset, n);
    Setmake(Universal, n, Secondset);

    int B1[n];
    Bitstring(Universal, Firstset, B1, n);

    int B2[n];
    Bitstring(Universal, Secondset, B2, n);

    printf("Universal Set : ");
    Display(Universal, n);
    printf("\nSet 1 : ");
    Display(Firstset, n);
    printf("\nBitstring 1 is : ");
    Display(B1, n);
    printf("\nSet 2 : ");
    Display(Secondset, n);
    printf("\nBitstring 2 is : ");
    Display(B2, n);
}