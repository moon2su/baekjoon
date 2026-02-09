#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    int N; cin >> N;
    
    for(int i = 1; i <= N; i++){
        
        for(int k = 1; k < i; k++){
            cout << ' ';
        }
        
        for(int j = 0; j < 2*N - (2*i - 1) ; j++){
            cout << '*';
        }
        
        cout << '\n';
    }
    
    for(int i = 1; i < N; i++){
        
        for(int j = i+1; j < N; j++){
            cout << ' ';
        }
        
        for(int k = 0; k < 2*i + 1; k++){
            cout << '*';
        }
        
        cout << '\n';
    }
    
    return 0;
}
