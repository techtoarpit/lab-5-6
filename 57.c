// PROGRAM TO READ N NOS AND FINDOUT MAX AND SECOND MAX.//
#include<stdio.h>
int main()
{
    int arr[100];
    printf("Enter n numbers ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];

    for(int i=0;i<10;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("The no. is max %d",max);
}   