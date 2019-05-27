#include <stdio.h>

int
arrayAdd (int *arr, int s, int n)
{
  for (int i = 0; i < s; i++)
    {
      arr[i] = arr[i] + n;
      printf ("%d\n", arr[i]);
    }
}

int
main ()
{
  int array[100];

  for (int i = 0; i < 100; i++)
    {
      array[i] = i * i;
      printf ("array[%d] = %d\n", i);
    }
  arrayAdd (array, 100, 16);
}
