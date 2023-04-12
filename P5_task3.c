#include <stdio.h>

int main() {
    int matrix[10][10], i, j, row, column, sum=0;

    printf("Enter the num of row & column: ");
    scanf("%d %d", &row, &column);

    printf("Enter the elements of the matrix: ");

    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            if (i == j) {
                sum += matrix[i][j];
            }
        }
    }

    printf("The sum of elements is: %d", sum);

}
