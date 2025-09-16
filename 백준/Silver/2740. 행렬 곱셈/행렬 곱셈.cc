#include <stdio.h>

int main(){
    
    int A[101][101], B[101][101];
    int N, M, K;
    
    scanf("%d %d \n", &N, &M);
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            scanf("%d", &A[i][j]);
        }
    }
    
    scanf("%d %d \n", &M, &K);
    for(int i = 0; i < M; i++){
        for(int j = 0; j < K; j++){
            scanf("%d", &B[i][j]);
        }
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < K; j++){
            int sum = 0;
            for(int p = 0; p < M; p++){
                sum += A[i][p] * B[p][j];
                
            }
            printf("%d ", sum);
        }
        printf("\n");
    }
    return 0;
    
}