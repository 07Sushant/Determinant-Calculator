#include <stdio.h>

int main() {
    int inputMatrix[3][3];  // create a 3x3 matrix to store user input
    printf("Enter matrix values:\n");

    // prompt user for input and store it in the matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c: ", 'A' + (i * 3) + j);  // print the corresponding character
            scanf("%d", &inputMatrix[i][j]);
        }
    }

    // print out the matrix
    printf("\n");
    printf("The Given Matrix is:\n\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", inputMatrix[i][j]);
        }
        printf("\n");
    }

    // calculate and print the determinant
    int a = inputMatrix[0][0], b = inputMatrix[0][1], c = inputMatrix[0][2];
    int d = inputMatrix[1][0], e = inputMatrix[1][1], f = inputMatrix[1][2];
    int g = inputMatrix[2][0], h = inputMatrix[2][1], i = inputMatrix[2][2];

    int det = (a * e * i) + (b * f * g) + (c * d * h)
            - (c * e * g) - (b * d * i) - (a * f * h);

    printf("\n");
    printf("The Determinant of Given Matrix is: %d\n", det);
    printf("\n");
    return 0;
}

//Sushant
