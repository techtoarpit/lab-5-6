#include <stdio.h>
int main()
{
    int arr[10];
            printf("Enter the integers ");

    for (int i = 0; i < 10; i++)
    {
       
        scanf("%d", &arr[i]);

        if (arr[i] > 0)
        {
            printf("The given no. is positive %d\n", arr[i]);
        

        }
        else{
            printf("The no. is negative %d\n",arr[i]);
        }
    }
}