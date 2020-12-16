#include <stdio.h>

int main(){

  int orig[] = {1,0,1,1,1,0,1,0};

  // getting 1's complement
  for(int i = 0; i < 8; i++){
    printf("%d", *(orig+i));
    if(*(orig+i) == 1){
      *(orig+i) = 0;
    }else{
      *(orig+i) = 1;
    }
  }
  printf("\n");

  printf("1's complement : ");
  for(int i = 0; i < 8; i++){
    printf("%d", *(orig+i));
  }

  return 0;
}
