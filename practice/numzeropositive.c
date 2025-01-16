#include <stdio.h>

int main()
{
    int num;

    printf("Enter the number :");
    scanf("%d", &num);

    switch (num > 0)
    {
    case 1:
        printf("%d is postive number", num);
        break;

    case 0:
        switch (num < 0)
        {
        case 1:
            printf("%d is nagative number ", num);
            break;

        case 0:
            printf("%d is zero", num);
            break;
        }
        break;
    }
    return 0;
}