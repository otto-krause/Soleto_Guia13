#include <stdio.h>
void mostrar(int * a, int n){
  for(int i = 0; i < n; i++){
    printf("%d.\t%d\n", i+1, a[i]);
  }
}
int main(){
  int a[8];
  for(int i = 0; i < 8; i++){
    scanf("%d", &a[i]);
    if(a[i] == 0){
      printf("no puede ser 0!\n");
      i--;
    }
  }
  mostrar(a, 8);
  int x;
  int blen = 0;
  int clen = 0;
  int b[8];
  int c[8];
  for(int i = 0; i < 8; i++){
    if(a[i] > 0){
      b[blen] = a[i];
      blen++;
    }
    else {
      c[clen] = a[i];
      clen++;
    }
  }
  for(int i = 0; i < blen; i++){
    for(int f = 0; f < blen-1; f++){
      if (b[i] > b[i+1]){
	x = b[i];
	b[i] = b[i+1];
	b[i+1] = x;
      }
    }
  }
  for(int i = 0; i < clen; i++){
    for(int f = 0; f < clen-1; f++){
      if (c[i] < c[i+1]){
	x = c[i];
	c[i] = c[i+1];
	c[i+1] = x;
      }
    }
  }
  mostrar(b, blen);
  mostrar(c, clen);
}
