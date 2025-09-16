#include <stdio.h>
#include <string.h>

int main(){
    
    char C[100];
    scanf("%s", C);
    
    for(int i = 0; i < strlen(C); i++){
        if(C[i] >= 'A' && C[i] <= 'Z'){
            C[i] += 32;
        }
        else if (C[i] >= 'a' && C[i] <= 'z'){
            C[i] -= 32;
        }
    }
    printf("%s \n", C);
    
    return 0;
    
}