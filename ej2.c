#include <stdio.h>
int main()
{
  int a[7];
  a[0] = 0;
  a[1] = 0;
  for(int i = 2; i < 7; i++)
  {
     printf("Valor %d: ", i-1);
     scanf("%d", &a[i]);
     a[1] += a[i];
     if(a[i] > a[0]){
        a[0] = a[i];
     }
  }
  for(int i = 2; i < 7; i++)
  {
     printf("Valor %d: %d\n", i-1, a[i]);
  }
  printf("mayor: %d, promedio: %d\n", a[0], a[1]/5);
}
