#include <stdio.h>

int main(){

  int r = 5;

  for(int i = 0; i < r; i++){
    for(int j = 0; j < r; j++){
      if(i == r/2 && j == r/2){
        printf("%d", 0);
      }else{
        printf("%d", 1);
      }
    }
    printf("\n");
  }

  return 0;
}
