#include <stdio.h>

int main(){

  int r = 10;

  // these nested loops print the hollow pattern
  for(int i = 0; i < r; i++){
    for(int j = r-i; j > 0; j--){
      printf(" ");
    }
    for(int j = 0; j < i+1; j++){
      if(j==0||j==i){
        printf("* ");
      }else{
        printf("  ");
      }
    }
    printf("\n");
  }
  // this loop is especially for the last line of asterisks
  for(int k = 0; k < r+1; k++){
    printf("* ");
  }

  return 0;
}
