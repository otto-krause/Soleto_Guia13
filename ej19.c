#include <stdio.h>
int main(){
  int a[15];
  for(int i = 0; i < 15; i++){
    scanf("%d", &a[i]);
    for(int f = 0; f < i; f++){
      if (a[i] == a[f]){
	printf("No ingrese el mismo valor!\n");
	i--;
	break;
      }
    }
    if (a[i] < 999 || a[i] > 9999){
      printf("ingrese un año válido\n");
      i--;
    }
  }
  printf("bisiestos:\n");
  for (int i = 0; i < 15; i++){
    if (a[i]%4==0 && a[i]%100!=0 || a[i]%400==0)
      printf("%d\n", a[i]);
  }
}
