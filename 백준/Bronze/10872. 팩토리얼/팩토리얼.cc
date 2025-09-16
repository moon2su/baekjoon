#include <stdio.h>

int main(){
    
    int N, fac = 1;
    scanf("%d \n", &N);
    
    for(int i = 1; i <= N; i++){
        fac *= i;
    }
    
    printf("%d \n", fac);
    
    return 0;
    
}