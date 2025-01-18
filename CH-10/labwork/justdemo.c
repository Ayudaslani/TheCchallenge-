#include <stdio.h>

// Function to find all elements greater than the given value in a 2D array
void findGreaterElements(int matrix[3][3], int rows, int cols, int value) {
    printf("Elements greater than %d in the matrix are:\n", value);
    
    // Iterate over the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] > value) {
                printf("%d ", matrix[i][j]);
            }
        }
    }
    printf("\n");
}

int main() {
    int matrix[3][3] = {
        {1, 5, 8},
        {10, 15, 2},
        {7, 3, 12}
    };
    int value;

    // Input value to compare against
    printf("Enter a value: ");
    scanf("%d", &value);

    // Call function to find elements greater than the input value
    findGreaterElements(matrix, 3, 3, value);

    return 0;
}
