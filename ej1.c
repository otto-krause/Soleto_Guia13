#include <stdio.h>
int main()
{
  int r[6];
  r[0] = 0;
  for(int i = 1; i < 6; i++)
  {
    printf("R%d:", i);
    scanf("%d", &r[i]);
  }
  for(int i = 1; i < 6; i++)
  {
    r[0] += r[i];
    printf("R%d: %d\n", i, r[i]);
  }
  printf("RT: %d\n", r[0]);
}
