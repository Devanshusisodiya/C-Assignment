#include <stdio.h>

int main(){

  int r = 5;

  for(int i = 1; i < r+1; i++){
    if(i%2 == 1){
      for(int j = 1; j < r+1; j++){
        if(j%2 == 1){
          printf("%d", 1);
        }else{
          printf("%d", 0);
        }
      }
    }else{
      for(int j = 1; j < r+1; j++){
        if(j%2 == 1){
          printf("%d", 0);
        }else{
          printf("%d", 1);
        }
      }
    }
    printf("\n");
  }

  return 0;
}
