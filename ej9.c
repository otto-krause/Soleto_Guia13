#include <stdio.h>
int main(){
  unsigned int l;
  printf("ingrese cuantos valores va a tener la lista: ");
  if (l <= 0){
    printf("la lista debe ser mayor a 0");
  }
  scanf("%d", &l);
  int e[l];
  for(int i = 0; i<l; i++){
    scanf("%d", &e[i]);
  }
  for(int i = 1; i<l; i++){
    if(e[i-1] < e[i]){
      if(i == l-1)
        printf("se ingresaron los numeros de forma ascendente");
      continue;
    }
    if(e[i-1] > e[i]){
      if(i == l-1)
        printf("se ingresaron los numeros de forma descendente");
      continue;
    }
    else {
      printf("se ingresaron los numeros de forma desordenada");
      break;
    }
  }
  printf("%d", e[0] + e[l-1]);

}
