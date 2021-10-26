#include <stdio.h>
int main(){
  int e[13];
  for(int i = 0; i < 10; i++){
    scanf("%d", &e[i]);
  }
  e[10] = 0;
  e[11] = 1;
  for(int i = 0; i< 10; i++){
    e[10] += e[i];
    e[11] = e[i] * e[11];
  }
  e[12] = e[10]/10;
  int c = 0;
  for(int i = 0; i< 10; i++){
    if(e[i] < e[12])
      c++;
  }
  printf("suma: %d, producto: %d, promedio %d, menores al promedio: %d\n", e[10], e[11], e[12], c);
}
