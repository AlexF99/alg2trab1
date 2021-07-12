#include "insercao.h"
#include "particiona.h"
#include "stdio.h"

/* -------------------------------------------------------------------------- */
/* ordena v[a..b] usando o algoritmo QuickSort com inser��o e devolve v       */

int *quicksort_insercao(int v[], int a, int b, unsigned int m)
{
  if (a < b)
  {
    if (b - a + 1 < m)
      return insercao(v, a, b);

    int pivot = particiona(v, a, b, v[b]);
    quicksort_insercao(v, a, pivot - 1, m);
    quicksort_insercao(v, pivot + 1, b, m);
  }

  return v;
}
