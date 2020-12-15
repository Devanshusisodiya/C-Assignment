#include <stdio.h>

int main(){

  int r = 5;

  for(int i = 0; i < r; i++){
    for(int j = r-1-i; j > 0; j--){
      printf(" ");
    }
    for(int j = 0; j < i+1; j++){
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}
