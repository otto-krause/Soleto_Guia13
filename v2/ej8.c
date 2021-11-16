#include <stdio.h>
int main(){
  unsigned int a[7];
  for(int i = 0; i < 7; i++){
    scanf("%d", &a[i]);
  }
  int c = 0;
  for(int i = 0; i < 7; i++){
    for(int f = 0; f < 6; f++){
      if (a[i] > a[i+1]){
	c = a[i];
	a[i] = a[i+1];
	a[i+1] = c;
      }
    }
  }
  for(int i = 0; i < 7; i++){
    printf("%d.\t%d\n", i+1, a[i]);
  }
}
