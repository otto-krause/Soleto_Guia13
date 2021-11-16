#include <stdio.h>
int main(){
  unsigned int a[8];
  for(int i = 0; i < 8; i++){
    scanf("%d", &a[i]);
  }
  int c = 0;
  for(int i = 0; i < 8; i++){
    for(int f = 0; f < 7; f++){
      if (a[i] < a[i+1]){
	c = a[i];
	a[i] = a[i+1];
	a[i+1] = c;
      }
    }
  }
  for(int i = 0; i < 8; i++){
    printf("%d.\t%d\n", i+1, a[i]);
  }
}
