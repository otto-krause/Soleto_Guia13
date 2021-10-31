#include <stdio.h>
int main(){
  int n;
  printf("ingrese el valor de n: ");
  scanf("%d");
  int a[n];
  for(int i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }
  int c[n];
  int c2[n];
  for (int i = 0; i < n; i++){
    c[i] = c2[n-1];
  }
  for(int i = 0; i < n; i++){
    printf("%d", c2[i]);
  }
}
