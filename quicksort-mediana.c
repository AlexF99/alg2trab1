#include "particiona.h"
#include "stdio.h"
#include "biblioteca.h"

/* -------------------------------------------------------------------------- */
/* devolve a mediana de a, b e c                                              */

static int mediana(int *v, int a, int b, int c)
{
  if ((v[a] > v[b]) ^ (v[a] > v[c]))
    return a;
  else if ((v[b] < v[a]) ^ (v[b] < v[c]))
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

  int middle_index = (int)((a + b) / 2) + (((a + b) % 2) != 0);
  int median_index = mediana(v, a, middle_index, b);
  troca(v, b, median_index);
  
  m = particiona(v, a, b, v[b]);
  quicksort_mediana(v, a, m - 1);
  quicksort_mediana(v, m + 1, b);
  return v;
}
