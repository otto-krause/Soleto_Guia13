#include <stdio.h>
int main(){
  int v[7];
  for(int i = 0; i < 7; i++){
    scanf("%d", &v[i]);
    if (v[i] < 0)
       i--;
  }
  int s = 0;
  for(int i = 0; i < 7; i++){
    if(v[i] > v[s]){
      s = i;
    }
  }
  for (int i = 0;i<7;i++){
    printf("%d", v[i]);
  }
  printf("el mayor es %d", v[s]);
  return 0;
}
