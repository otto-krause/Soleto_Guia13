#include <stdio.h>
int main()
{
  int p[20];
  for(int i = 0; i < 20; i++){
    printf("ingrese el sueldo %d: ", i+1);
    scanf("%d", &p[i]);
  }
  int m = 0;
  for(int i = 0; i < 20; i++){
    if (p[i] > 2000)
      m++;
  }
  printf("los que ganan mas de 200 son %d  los que no son %d", m, 20-m);
}
