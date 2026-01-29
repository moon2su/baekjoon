#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    int T; cin >> T;
    long long a, b;
    
    for(int i = 0; i < T; i++){
        cin >> a >> b;
        int rst = 1;
        
        for(int j = 0; j < b; j++){
            rst = (rst * a) % 10;
        }
    
        if(rst == 0){
            cout << 10 << '\n';
        }
        else{
            cout << rst << '\n';
        }
    }
    return 0;
}