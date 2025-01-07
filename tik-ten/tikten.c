#include <stdio.h>

void main()
{
    char a[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

    int row, col, i, j;

    int moves = 1;

    while (moves <= 9)
    {

        if (moves % 2 == 0)
        {

            printf("Enter the player 2 : ");
            scanf("%d %d", &row, &col);
            if (row < 0 || row >= 3 || col < 0 || col >= 3 || a[row][col] != ' ')
            {
                printf("Invalid move. Try again.\n");
                continue;
            }

            a[row][col] = 'O';

            for (int i = 0; i < 3; i++)
            {

                for (int j = 0; j < 3; j++)
                {

                    printf("%c ", a[i][j]);
                }

                printf("\n");
            }

            if ((a[0][0] != ' ' && a[0][0] == a[0][1] && a[0][0] == a[0][2]) || // Row 1
                (a[1][0] != ' ' && a[1][0] == a[1][1] && a[1][0] == a[1][2]) || // Row 2
                (a[2][0] != ' ' && a[2][0] == a[2][1] && a[2][0] == a[2][2]) || // Row 3
                (a[0][0] != ' ' && a[0][0] == a[1][0] && a[0][0] == a[2][0]) || // Column 1
                (a[0][1] != ' ' && a[0][1] == a[1][1] && a[0][1] == a[2][1]) || // Column 2
                (a[0][2] != ' ' && a[0][2] == a[1][2] && a[0][2] == a[2][2]) || // Column 3
                (a[0][0] != ' ' && a[0][0] == a[1][1] && a[0][0] == a[2][2]) || // Diagonal 1
                (a[0][2] != ' ' && a[0][2] == a[1][1] && a[0][2] == a[2][0]))   // Diagonal 2
            {
                printf("\n\nPlayer 2 - O is winner !!!!\n");
                break;
            }
        }

        else
        {
            printf("Enter the player 1 : ");
            scanf("%d %d", &row, &col);
            if (row < 0 || row >= 3 || col < 0 || col >= 3 || a[row][col] != ' ')
            {
                printf("Invalid move. Try again.\n");
                continue;
            }
            a[row][col] = 'X';
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {

                    printf("%c ", a[i][j]);
                }
                printf("\n");
            }

            if ((a[0][0] != ' ' && a[0][0] == a[0][1] && a[0][0] == a[0][2]) || // Row 1
                (a[1][0] != ' ' && a[1][0] == a[1][1] && a[1][0] == a[1][2]) || // Row 2
                (a[2][0] != ' ' && a[2][0] == a[2][1] && a[2][0] == a[2][2]) || // Row 3
                (a[0][0] != ' ' && a[0][0] == a[1][0] && a[0][0] == a[2][0]) || // Column 1
                (a[0][1] != ' ' && a[0][1] == a[1][1] && a[0][1] == a[2][1]) || // Column 2
                (a[0][2] != ' ' && a[0][2] == a[1][2] && a[0][2] == a[2][2]) || // Column 3
                (a[0][0] != ' ' && a[0][0] == a[1][1] && a[0][0] == a[2][2]) || // Diagonal 1
                (a[0][2] != ' ' && a[0][2] == a[1][1] && a[0][2] == a[2][0]))   // Diagonal 2
            {
                printf("\n\nPlayer 1 - X is winner !!!!\n");
                break;
            }
        }

        moves++;
    }
}
