#include <stdio.h>
int main()
{
  int v[22];
  int input;
  v[20] = 0;
  for(int i = 0; i < 20; i++)
  {
    for(int f = 0; f < 15; f++)
    {
      printf("ingrese la cantidad de unidades vendidas por el vendedor %d en el dia %d: ", i,f);
      scanf("%d", &input);
      v[i] += input;
      v[21] += input;
      if (input > v[20])
         v[20] = input;
    }
    printf("venta total del vendedor %d: %d",i,v[i]);
  }
  printf("total: %d, mayor: %d", v[21], v[20]);
}
