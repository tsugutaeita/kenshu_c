#include<stdio.h>

int f(int x){
    int y;
    if(x == 0)      y = 0;
    else if(x == 1) y = 1;
    else            y = f(x - 1) + f(x - 2);
    return y;
}

int main(void){
    int y = f(10);
    printf("%d\n", y);
    return 0;
}