#include <stdio.h>
void mostrar(int* v){
  for(int i = 0; i <= 20; i++){
    printf("%d ", v[i]);
  }
  printf("\n");
}
int main(){
  int a[20];
  for(int i = 0; i < 20; i++){\
    printf("%d", i);
    scanf("%d", &a[i]);
  }
  int p;
  for(int f = 0; f<20;f++){
    for(int i = 0; i<20;i++){
      if(a[i] > a[i+1]){
	p = a[i];
	a[i] = a[i+1];
	a[i+1] = p;
      }
    }
  }
  int b[20];
  for(int i = 0; i<20;i++){
    b[i] = a[20-i];
  }
  int c[20];
  for(int i = 0; i<20;i++){
    c[i]=b[i]*a[i];
  }
  mostrar(a);
  mostrar(b);
  mostrar(c);
}
