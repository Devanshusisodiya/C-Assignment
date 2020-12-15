#include <stdio.h>

void diameter(float a);
void circum(float b);
void area(float c);

int main(){

  float r = 3; // initialising radius
  diameter(r);
  circum(r);
  area(r);

  return 0;
}

void diameter(float a){
  float d = 2*a;
  printf("%.1f\n", d);

}
void circum(float b){
  float cir = 2*3.14*b;
  printf("%.1f\n", cir);
}
void area(float c){
  float ar = 3.14*c*c;
  printf("%.1f\n", ar);
}
