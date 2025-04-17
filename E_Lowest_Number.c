#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++){
        scanf("%d", &A[i]);
    }
    int min = A[0];
    for (int i = 1; i < N; i++){
        if (A[i] < min){
            min = A[i];
        }
    }
    printf("%d ", min);
    for (int i = 0; i < N; i++){
        if (A[i] == min){
            printf("%d\n", i + 1);
            break;
        }
    }
    return 0;
}