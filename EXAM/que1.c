#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    switch (num > 0)
    {
    case 1:
        printf("%d is Positive number ", num);
        break;

    case 0:
        switch (num == 0)
        {
        case 1:
            printf("%d is zero ", num);
            break;

        case 0:
            printf("%d is nagative number ", num);
            break;
        }
    }
}
