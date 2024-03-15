#include<stdio.h>
#include<math.h>
#include<time.h>

int sosu[1000000];
int sfind(int n){
    int pref[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173};
    int prefNum = sizeof pref / sizeof pref[0], count = prefNum - 1;
    for(int i = 0; i < prefNum; i++){
        sosu[i] = pref[i];
    }
    for(int i = pref[prefNum - 1]; count < n; i += 2){
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
    printf("%d\n", count);
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
