#include <stdio.h>

int main(){

  int r = 5;

  for(int i = 0; i < r; i++){
    for(int j = 0; j < r; j++){
      if(i == 0||i == r-1){
        printf("%d", 1);
      }else{
        if(j == 0||j == r-1){
          printf("%d", 1);
        }else{
          printf("%d", 0);
        }
      }
    }
    printf("\n");
  }

  return 0;
}
