#include <stdio.h>

void main()
{
    char a[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

    int row, col, i, j;

    int moves = 1;

    while (moves <= 9)
    {

        // for (int i = 0; i < 3; i++)
        // {
        //     for (int j = 0; j < 3; j++)
        //     {
        //         printf("%c ", a[i][j]);
        //     }
        //     printf("\n");
        // }

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

                    printf("%c", a[i][j]);
                }

                printf("\n");
            }
            if (a[0][0] == a[0][1] && a[0][0] == a[0][2] && a[0][1] == a[0][2])
            {
                printf("\n\n");
                printf("O is Win Super !!!!");

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

                    printf("%c", a[i][j]);
                }
                printf("\n");
            }
        }

        moves++;
    }
}
