#include "stdio.h"
#include "particiona.h"

/* -------------------------------------------------------------------------- */
/* ordena v[a..b] usando o algoritmo QuickSort e devolve v */

int *quicksort(int v[], int a, int b)
{
  if (b < a)
    return v;
  int m = particiona(v, a, b, v[b]);
  quicksort(v, a, m - 1);
  quicksort(v, m + 1, b);
}