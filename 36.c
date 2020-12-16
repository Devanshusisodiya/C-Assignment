#include <stdio.h>

int main(){

  int a = 0, b = 1, c = 0, num;
  scanf("%d", &num); printf("\n");
  printf("%d %d ", a, b);
  for(int i = 0; i < num; i++){
    c = a+b;
    a = b;
    b = c;
    printf("%d ", c);
  }

  return 0;
}
