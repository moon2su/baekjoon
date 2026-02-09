#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    int N; cin >> N;
    
    for(int i = 0; i < 2 * N; i++){
        
        if(i % 2 == 0){
            for(int j = 0; j < N; j++){
                if(j % 2 == 0){
                    cout << '*';
                }
                else{
                    cout << ' ';
                }
            }
        }
        
        else{
            for(int k = 0; k < N; k++){
                if(k % 2 == 0){
                    cout << ' ';
                }
                else{
                    cout << '*';
                }
            }
        }
        
        cout << '\n';
    }
    
    return 0;
}
