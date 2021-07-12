#include "biblioteca.h"

/* -------------------------------------------------------------------------- */

int minimo(int v[], int a, int b)
{
  int ultimo = v[b];

  for (int i = a; i < b; i++)
    if (compara(v[i], ultimo) == 1)
      return i;

  return b;
}

void insere(int v[], int a, int b)
{
  int minIndex = minimo(v, a, b);

  for (int i = b; i > minIndex; i--)
    troca(v, i, i - 1);
}

//Ordena v[a..b] pelo método da seleção e devolve v.
int *insercao(int v[], unsigned int a, unsigned int b)
{
  if (a < b)
  {
    insercao(v, a, b - 1);
    insere(v, a, b);
  }
  return v;
}