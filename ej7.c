#include <stdio.h>
int main(){
  int b[15];
  for(int i = 0; i < 15; i++){
    printf("ingrese la nota del alumno %d", i);
    scanf("%d", b[i]);
  }
  for(int i = 0; i < 15; i++){
    if(b[i] > 8)
      printf("el alumno %d tiene mas de 8\n", b[i]);
  }
  return 0;
}
