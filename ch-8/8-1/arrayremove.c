#include <stdio.h>

main()
{
  int size;
  int i, j;
  printf("Enter size of array :");
  scanf("%d", &size);

  int a[size];

  printf("\n Input Array :\n");
  for (int i = 0; i < size; i++)
  {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }

  for (int i = 0; i < size; i++)
  {
    for (int j = i + 1; j < size; j++)
    {
      if (a[i] == a[j])
      {
        a[j] = '\0';
      }
    }
  }
  printf("\n output Array :\n");
  for (int i = 0; i < size; i++)
  {
    if (a[i] != 0)
      printf("%d", a[i]);
  }
}
