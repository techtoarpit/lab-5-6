#include <stdio.h>

void main() {
    int arr1[3][3], i, j;
    int max, min;

    // Prompt user for input
    printf("\n\nRead a 2D array of size 3x3 and print the matrix:\n");
    printf("------------------------------------------------------\n");

    // Input values for the matrix
   for(int i=0;i<3;i++){
        printf("Enter 3 integers for row %d : ",i+1);
        for(int j=0;j<3;j++){
            scanf("%d",&arr1[i][j]);}}
    // Display the matrix
    printf("\nThe matrix is:\n");
    for (i = 0; i < 3; i++) {
        printf("\n");
        for (j = 0; j < 3; j++)
            printf("%d\t", arr1[i][j]);
    }
    printf("\n\n");

    // Initialize max and min with the first element of the matrix
    max = arr1[0][0];
    min = arr1[0][0];

    // Find the maximum and minimum elements
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (arr1[i][j] > max) {
                max = arr1[i][j];
            }
            if (arr1[i][j] < min) {
                min = arr1[i][j];
            }
        }
    }

    // Display the max and min elements
    printf("Maximum element in the matrix: %d\n", max);
    printf("Minimum element in the matrix: %d\n", min);
}

