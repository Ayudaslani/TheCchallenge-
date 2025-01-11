#include <stdio.h>

int main() {
    int n = 5; // Number of rows
    int num = 1; // Starting number

    for (int i = 1; i <= n; i++) {
        int temp = num + i - 1; // Temporary variable to hold the last value of the row

        for (int j = 1; j <= i; j++) {
            if (j % 2 == 1) {
                // Print the current number (left-to-right)
                printf("%d ", num);
                num++; // Increment for the next number
            } else {
                // Print the temporary number (right-to-left)
                printf("%d ", temp);
                temp--; // Decrement for the next right-to-left number
            }
        }
        printf("\n");
    }

    return 0;
}

