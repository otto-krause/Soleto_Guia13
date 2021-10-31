#include <stdio.h>
int main(){
  int a[6];
  for(int i = 0; i < 6; i++){
    scanf("%d", &a[i]);
  }
  for (int i = 0; i < 6; i++){
    if (i %2 == 0){
      printf("%d ", a[i]);
    }
  }
}
