#include <stdio.h>
int main()
{
  int a[31];
  for(int i = 1; i <= 30; i++)
  {
     printf("ingrese la nota del alumno %d: ");
     scanf("%d", &a[i]);
     a[0] += a[i];
  }
  printf("promedio: %d", a[0]/30);
}
