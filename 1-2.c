#include<stdio.h>
int main(void){
    for(int i = 1; i < 21; i++){
        printf("%d", i);
        if(!(i % 3))    printf("foo");
        if(!(i % 5))    printf("bar");
        if(!(i % 7))    printf("hoge");
        if(!(i % 11))    printf("piyo");
        printf("\n");
    }
    return 0;
}