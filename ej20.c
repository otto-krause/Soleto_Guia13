#include <stdio.h>
#include <string.h>
unsigned int c;
void mostrar(int* a, char** b){
  for(int i = 0; i < c; i++){
    printf("%s %d - $%d\n", b[i], i, a[i]);
  }
}
int main(){
  printf("ingrese la cantidad de productos");
  scanf("%d", &c);
  char* prod[20];
  int prec[c];
  int p;
  char s[20];
  printf("ingrese \"PRODUCTO PRECIO\"");
  for(int i = 0; i < c; i++){
    scanf("%s %d", &prod[i], &prec[i]);
  }
  for(int i = 0; i < c; i++){
    for(int f = 0; f < c; f++){
      p = prec[i];
      prec[i] = prec[i+1];
      prec[i+1] = p;
      strcpy(s, prod[i]);
      strcpy(prod[i], prod[i+1]);
      strcpy(prod[i+1], s);
    }
  }
  mostrar(prec,prod);
  for(int i = 0; i < c; i++){
    prec[i] = prec[i] * 1.5;
  }
  mostrar(prec, prod);
}
