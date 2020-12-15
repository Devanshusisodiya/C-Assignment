#include <stdio.h>

int power(int n1, int n2);

int main(){

    int base, a, res;

    printf("base : ");
    scanf("%d", &base);
    printf("power : ");
    scanf("%d", &a);

    res = power(base, a);
    printf("%d\n", res);

    return 0;
}

int power(int base, int a){
    if (a != 0){
        return (base * power(base, a - 1));
    }else{
        return 1;
    }
}
