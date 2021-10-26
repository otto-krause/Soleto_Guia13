#include <stdio.h>
unsigned int fibonacci(unsigned int n){
  switch (n) {
    case 0 : return 1;
    case 1 : return 1;
    default : return (fibonacci(n - 1) + fibonacci(n - 2));
  }
}
int main() {
  unsigned int e;
  scanf("%u", &e);
  unsigned int s[e];
  for (int i = e; i > -1; i--){
    s[i] = fibonacci(i);
  }
  for (int i = 0; i < e; i++){
    printf("%u ", s[i]);
  }
}

