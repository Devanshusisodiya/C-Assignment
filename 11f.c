#include<stdio.h>

void display(int n);

int main(){

    int ub;
    scanf("%d", &ub); printf("\n");
    display(ub);

    return 0;
}

void display(int num){
    if(num){
        display(num-1);
    }else{
        return;
    }
    printf("%d\n", num);
}
