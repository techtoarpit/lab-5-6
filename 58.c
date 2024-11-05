#include <stdio.h>
int main()
{
    int a[5];
    int b[5];
    int c[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the number %d for both arrays", i + 1);
        scanf("%d %d", &a[i], &b[i]);
    }
    for (int j = 0; j < 5; j++)
    {
        c[j] = a[j] + b[j];
        printf(" %d", c[j]);
    }
}
