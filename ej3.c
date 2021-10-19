#include <stdio.h>
int main()
{
  int a,b;
  scanf("%d %d", &a, &b);
  if(a > b){
    int f = a;
    a = b;
    b = f;
  }
  int v[b];
  for(int i = a+1; i < b; i++){
     v[i-a] = i;
  }
  for(int i = a+1; i < b; i++){
    printf("%d", v[i-a]);
  }
}
