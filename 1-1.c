#include <stdio.h>

int main(void){
    for(int i = 1; i < 21; i++){
        printf("%d", i);
        if(!(i % 3))    printf("foo");
        if(!(i % 5))    printf("bar");
        printf("\n");
    }
    return 0;
}