#include <bits/stdc++.h>

int main(){
    
    int T;
    int H;
    int W;
    int N;
    int result;
    
    std::cin >> T;
    
    for(int i = 0; i < T; i++){
        
        std::cin >> H >> W >> N;
        
        if(N % H == 0) result = H * 100 + (N / H);
        
        else result = (N % H) * 100 + (N / H) + 1;
        
        std::cout << result << std::endl;
        
    }
}