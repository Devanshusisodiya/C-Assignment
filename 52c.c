#include <stdio.h>

int main(){

  int r = 5;

  for(int i = 0; i < r; i++){
    for(int j = 1; j < r+1; j++){
      if(j%2 == 0){
        printf("%d", 1);
      }else{
        printf("%d", 0);
      }
    }
    printf("\n");
  }

  return 0;
}
