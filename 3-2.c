#include<stdio.h>
#include<math.h>
#include<time.h>

int sosu[1000000];
int sfind(int n){
    int count = 0;
    sosu[0] = 2;
    for(int i = 3; count < n - 1; i += 2){
        int flag = 1;
        for(int j = 0; sosu[j] <= sqrt(i) && j <= count; j++){
            if(!(i % sosu[j])) {
                flag = 0;
                break;
            }
        }
        if(flag){
            count++;
            sosu[count] = i;
        }
    }
    return sosu[count];
}
int main(void){
    clock_t start, end;
    int n, ans;
    scanf("%d", &n);
    start = clock();
    ans = sfind(n);
    printf("%d\n", ans);
    end = clock();
    printf("clock time: %f\n", (double)(end - start) / CLOCKS_PER_SEC);
    return 0;
}