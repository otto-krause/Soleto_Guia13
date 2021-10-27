#include <stdio.h>
int main(){
  int e[100];
  for(int i = 0; i < 100; i++){
    scanf("%d", &e[i]);
  }
  int min = 100000
  int r;
  for(int i = 0; i < 100; i++)
    r=0;{
    if(min > e[i])
      min = e[i];
    for(int f = 0; f < 100; f++){
      if (e[i] == e[f])
	r++
    }
    if (r > 0)
      printf("%d se repite %d veces\n", e[i], r);
    
  }
  printf("el valor minimo es %d\n", min);
  return 0;
}
