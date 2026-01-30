#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    int N; cin >> N;
    
    for(int i = 1; i <= N; i++){
        
        for(int j = 1; j <= i; j++){
            cout << '*';
        }
        
        for(int k = 2*(i-2); k < 2*(N-2); k++){
            cout << ' ';
        }
        
        for(int l = 1; l <= i; l++){
            cout << '*';
        }
        
        cout << '\n';
    }
    
    for(int i = 1; i < N; i++){
        
        for(int j = i; j < N; j++){
            cout << '*';
        }
        
        for(int k = 0; k < 2*i; k++){
            cout << ' ';
        }
        
        for(int l = i; l < N; l++){
            cout << '*';
        }
        
        cout << '\n';
        
    }
    
    return 0;
}