#include <stdio.h>

int Addition(int num1, int num2)
{

    return num1 + num2;
}
int Subtraction(int num1, int num2)
{
    return num1 - num2;
}
int Multiplication(int num1, int num2)
{
    return num1 * num2;
}
int Division(int num1, int num2)
{
    return num1 / num2;
}
int Modular(int num1, int num2)
{
    return num1 % num2;
}

void main()
{
    int ch;
    int res, num1, num2;
    do
    {
        printf("\n\nPress 1 for + \n");
        printf("Press 2 for - \n");
        printf("Press 3 for * \n");
        printf("Press 4 for / \n");
        printf("Press 5 for %% \n");
        printf("Press 0 for the exit \n\n");

        printf("Enter  your choice :");
        scanf("%d", &ch);
        if (ch < 0 || ch > 5)
        {
            printf("Invalid choice.!!!\n");
            continue;
        }
        if (ch == 0)
        {
            break;
        }
        printf("\n\n");

        printf("Enter the first  number :");
        scanf("%d", &num1);

        printf("Enter the second number :");
        scanf("%d", &num2);

        printf("\n\n");

        switch (ch)
        {
        case 1:
            res = Addition(num1, num2);
            printf("Addtion of %d and %d  is %d ", num1, num2, res);

            break;

        case 2:
            res = Subtraction(num1, num2);
            printf("Subtractin of %d and %d  is %d", num1, num2, res);

            break;

        case 3:
            res = Multiplication(num1, num2);
            printf("Multiplication of %d and %d  is %d", num1, num2, res);

            break;

        case 4:
            res = Division(num1, num2);
            printf("division of %d and %d  is %d", num1, num2, res);

            break;

        case 5:
            res = Modular(num1, num2);
            printf("modular of %d and %d  is %d", num1, num2, res);
            printf("\n\n");

            break;
        }
    } while (ch != 0);
}