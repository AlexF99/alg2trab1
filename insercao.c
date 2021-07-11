#include "biblioteca.h"

/* -------------------------------------------------------------------------- */
/* ordena v[a..b] pelo metodo da insercao e devolve v */

int *insercao(int v[], unsigned int a, unsigned int b)
{
  int length = b - a + 1;
  int i = length - 1;

  if (length <= 1)
    return v;

  insercao(v, a, b - 1);

  while (i > 0 && compara(v[i], v[i - 1]) < 0)
  {
    troca(v, i, i - 1);
    i--;
  }

  return v;
}
