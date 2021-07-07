#include "stdio.h"
#include "quicksort.h"

void readArray(int *v, int length)
{
  for (int i = 0; i < length; i++)
    scanf("%d", &v[i]);
}

void showArray(int *v, int length)
{
  for (int i = 0; i < length; i++)
    printf("%d ", v[i]);
}

void swapArrayElements(int *v, int a, int b)
{
  int aux = v[a];
  v[a] = v[b];
  v[b] = aux;
}

int main(void)
{

  int vet[30], n;
  int *sorted;

  printf("escreva um numero: ");
  scanf("%d", &n);

  printf("escreva um array:\n");
  readArray(vet, n);

  sorted = quicksort(vet, 0, n - 1);
  printf("ordenado:\n");
  showArray(sorted, n);

  printf("\n\n");
  return 0;

  return 0;
}