#include <stdio.h>

int main(){

  int r = 7;

  // this loop is especially for the last line of asterisks
  for(int k = 0; k < r+1; k++){
    printf("* ");
  }
  printf("\n");

  // these nested loops print the hollow pattern
  for(int i = 0; i < r; i++){
    for(int j = 0; j < i+1; j++){
      printf(" ");
    }
    for(int j = r-i; j > 0; j--){
      if(j == r-i||j == 1){
        printf("* ");
      }else{
        printf("  ");
      }
    }
    printf("\n");
  }

  return 0;
}
