#include <stdio.h>
void scan_array(int* a){
  for(int i = 0; i < 6; i++){
    scanf("%d", &a[i]);
  }
}
int main(){
  int a[6];
  int b[6];
  scan_array(a);
  scan_array(b);
  int n;
  printf("ingrese el valor de n");
  scanf("%d");
  if(n > 6 || n < 0)
    return 1;
  int c[n];
  for (int i = 0; i < n; i++){
    c[i] = a[i] * b[n-i*1];
  }
  for(int i = 0; i < 6; i++){
    printf("%d", c[i]);
  }
}
