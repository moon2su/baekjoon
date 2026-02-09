#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    int N; cin >> N;
    
    for(int i = 0; i < N; i++){
        
        if(i % 2 == 0){
            for(int j = 0; j < N; j++){
                cout << "* ";
            }
        }
        else{
            cout << ' ';
            for(int k = 0; k < N; k++){
                cout << "* ";
            }
        }
        
        cout << '\n';
    }
    
    return 0;
}
