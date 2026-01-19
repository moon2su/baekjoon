#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    int T; cin >> T;
    int n;
    
    for(int i = 0; i < T; i++){
        string bin = "";
        cin >> n;
        
        while(n != 0){
            bin += to_string(n%2);
            n /= 2;
        }
        
        for(int j = 0; j < bin.length(); j++){
            if(bin[j] == '1'){
                cout << j << ' ';
            }
        }
    }

    
    return 0;
}