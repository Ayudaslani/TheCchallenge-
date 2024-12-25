 for (int k = i; k < j + 1; k++)
            {
                if (a[i][j] > a[i][k])
                {
                    int n = a[i][j];
                    a[i][j] = a[i][k];
                    a[i][k] = n;
                }
               
            }