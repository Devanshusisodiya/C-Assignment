#include <stdio.h>

int main(){

  int r = 5;

  for(int i = 1; i < r+1; i++){
    for(int j = 0; j < r; j++){
      if(i%2 == 1){
        printf("%d", 1);
      }else{
        printf("%d", 0);
      }
    }
    printf("\n");
  }

  return 0;
}
