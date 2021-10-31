#include <stdio.h>
int result(int* a){
  for(int i = 0; i < 9; i++){
    if(a[i] == a[i+1]){
      if(i == 8)
	return 1;
      continue;
    }
    break;
  }
  for(int i = 0; i < 9; i++){
    if(a[i] < a[i+1]){
      if(i == 8)
	return 2;
      continue;
    }
    break;
  }
  for(int i = 0; i < 9; i++){
    if(a[i] > a[i+1]){
      if(i == 8)
	return 3;
      continue;
    }
    break;
  }
  return 4;
}
int main(){
  int a[10];
  for(int i = 0; i < 10; i++){
    scanf("%d", &a[i]);
  }
  printf("%d", result(a));
}
