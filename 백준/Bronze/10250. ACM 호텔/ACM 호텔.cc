#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    int T; cin >> T;
    int H, W, N;
    int num;
    
    for(int i = 0; i < T; i++){
        cin >> H >> W >> N;
        
        for(int i = 1; i <= W; i++){
            
            if(H >= N){
                num = 100 * N + i;
                break;
            }
            
            if(N > H){ N = N - H; }
            
        }
        
        cout << num << '\n';
    }
    
    return 0;
}