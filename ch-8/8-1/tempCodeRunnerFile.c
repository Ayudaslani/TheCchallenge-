for (int i = 0; i < size; i++)
  {
    for (int j = i + 1; j < size;)
    {
      if (a[i] == a[j])
      {
        a[j] = '\0';
      }
    }
  }