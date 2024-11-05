/*PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND SWAP VALUES THESE
ARRAYS*/
#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int b[5]={6,7,8,9,10},c[5];
    for(int i=0;i<5;i++)
    {
        c[i]=a[i];
        a[i]=b[i];
        b[i]=c[i];

    }
    for (int j = 0; j < 5; j++)
    {
        printf("%d ", a[j]);
      
    }
    printf("\n");
    for (int j = 0; j < 5; j++)
    {
        printf("%d ", b[j]);

    }
    
     
}