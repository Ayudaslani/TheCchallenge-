#include <stdio.h>

void main()
{
    int unit;
    float totalBill = 0;

    printf("Enter the number of unit : ");
    scanf("%d", &unit);

    if (unit <= 100)
    {
        totalBill = unit * 1.5;
    }
    else if (unit <= 200)
    {
        totalBill = (100 * 1.5) + ((unit - 100) * 2.5);
    }
    else
    {
        totalBill = (100 * 1.5) + (100 * 2.5) + ((unit - 200) * 3.5);
    }

    if (totalBill > 500)
    {
        totalBill = totalBill + (totalBill * 0.1);
    }

    printf("Total Electicity Bill : %.2f\n", totalBill);
}