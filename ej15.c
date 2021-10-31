#include <stdio.h>
void scan_array(int* a){
  for(int i = 0; i < 10; i++){
    scanf("%d", &a[i]);
  }
}
int main(){
  int a[10];
  int b[10];
  scan_array(a);
  scan_array(b);
  int c[10];
  for (int i = 0; i < 10; i++){
    if (i %2 == 0)
      c[i] = b[i];
    else
      c[i] = a[i];
  }
  for(int i = 0; i < 10; i++){
    printf("%d", c[i]);
  }
}
