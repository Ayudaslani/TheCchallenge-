#include <stdio.h>
main()
{
    char name[50];

    printf("Enter the name :");
    scanf("%[^\n]", &name);

    printf("\n\n");
    printf("%s", name);
}
