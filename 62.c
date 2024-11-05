//) PROGRAM TO REVERSE AN ARRAY.//
#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[5];  

    printf("The Reversed value is: [ ");
    for (int i = 0; i < 5; i++)
    {
        b[i] = a[4 - i];
        printf("%d ", b[i]);
    }
    printf("]");
}