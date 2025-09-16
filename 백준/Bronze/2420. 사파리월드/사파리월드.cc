#include <stdio.h>

int main(){
    
    long long N, M;
    scanf("%lld %lld \n", &N, &M);
    
    if(N < M)
        printf("%lld \n", (M - N));
    else
        printf("%lld \n", (N - M));
    
    return 0;
    
}