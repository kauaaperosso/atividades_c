#include <stdio.h>

#include "data.h"

int main() {

  data d1, d2;

  setData(&d1,10,5,2010);

  setData(&d2,1,11,2026);

  mostraData(d1);
  mostraData(d2);

  printf("Ano: %d\n",getData(d2,'Y'));

  printf("Diferença: %d dias\n",pegaDiff(d1,d2));

  return 0;

}