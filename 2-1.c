#include<stdio.h>
int main(void){
    int n0 = 0;
    int n1 = 1;
    for(int i = 0; i < 11; i++){
        if(i == 0)          printf("%d", i);
        else if(i == 1)     printf("%d", i);
        else{
            printf("%d", n0 + n1);
            int x = n0;
            n0 = n1;
            n1 += x;
        }
        printf("\n");
    }
    return 0;
}