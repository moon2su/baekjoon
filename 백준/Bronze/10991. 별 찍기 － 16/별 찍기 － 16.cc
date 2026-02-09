#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    int N; cin >> N;
    
    for(int i = 0; i < N; i++){
        
        for(int k = i+ 1; k < N; k++){
            cout << ' ';
        }
        
        cout << '*';
        
        for(int j = 0; j < 2*i - 1; j++){
            if(j % 2 == 0){
                cout << ' ';
            }
            else{
                cout << '*';
            }
        }
        
        if(i >= 1){
            cout << '*';
        }
        
        cout << '\n';
    }
    
    return 0;
}
