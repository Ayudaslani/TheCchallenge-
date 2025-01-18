#include <stdio.h>
//structure define
struct House
{
    int room_quantity;
    int established_year;
    char city[50];
};

void main()
{
    int size;
    printf("Enter size :");
    scanf("%d", &size);

    //structure object
    struct House h1[size];

    
    for (int i = 0; i < size; i++)
    {
        printf("\n");
        printf("\nEnter  details for house %d\n", i + 1);
        printf("Enter room quantity :");
        scanf("%d", &h1[i].room_quantity);
        printf("Enter established year :");
        scanf("%d", &h1[i].established_year);
        printf("Enter city :");
        scanf("%s", &h1[i].city);
    }
    printf("\n");
    printf("OUTPUT :\n");
    for (int i = 0; i < size; i++)
    {
        printf("\n");
        printf("Room Quantity : %d\n", h1[i].room_quantity);
        printf("Established Year : %d\n", h1[i].established_year);
        printf("City : %s\n", h1[i].city);
    }
}
