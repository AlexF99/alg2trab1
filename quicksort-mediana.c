#include "particiona.h"

/* -------------------------------------------------------------------------- */
/* devolve a mediana de a, b e c                                              */

static int mediana(int a, int b, int c)
{
  if ((a > b) ^ (a > c))
    return a;
  else if ((b < a) ^ (b < c))
    return b;
  else
    return c;
}

/* -------------------------------------------------------------------------- */
/* -------------------------------------------------------------------------- */
/* ordena v[a..b]  usando o algoritmo  "QuickSort com mediana de  3" e
   devolve v                                                                  */

int *quicksort_mediana(int v[], int a, int b)
{
  int m;
  if (b < a)
    return v;

  if (b - a > 2)
  {
    int middle_index = (int)((a + b) / 2) + (((a + b) % 2) != 0);
    int median = mediana(v[a], v[middle_index], v[b]);
    m = particiona(v, a, b, median);
  }
  else
    m = particiona(v, a, b, v[b]);

  quicksort_mediana(v, a, m - 1);
  quicksort_mediana(v, m + 1, b);
  return v;
}
