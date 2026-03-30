#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    int N; cin >> N;
    
    for(int i = 1; i <= 2*N-1; i++){
        
        for(int j = 1; j <= i - 1; j++){
            if(j % 2 == 1){
                cout << '*';
            }
            else{
                cout << ' ';
            }
        }
        
        for(int k = 1; k <= N*4-2*i-1; k++){
            if(i%2 == 1){
                cout << '*';
            }
            else{
                cout << ' ';
            }
        }
        
        for(int l = 1; l <= i - 1; l++){
            if(i%2 == 1){
                if(l%2 == 1){
                    cout << ' ';
                }
                else{
                    cout << '*';
                }
            }
            else{
                if(l%2 == 1){
                    cout << '*';
                }
                else{
                    cout << ' ';
                }
            }
        }
        
        cout << '\n';
    }
    
    for(int i = 1; i <= 2*N-2; i++){
        
        for(int j = 1; j <= 2*N - 2 - i; j++){
            if(j%2 == 1){
                cout << '*';
            }
            else{
                cout << ' ';
            }
        }
        
        for(int k = 1; k <= 2 * i + 1; k++){
            if(i%2 == 1){
                cout << ' ';
            }
            else{
                cout << '*';
            }
        }
        
        for(int l = 1; l <= 2*N-2-i; l++){
            if(i%2==1){
                if(l%2==1){
                    cout << '*';
                }
                else{
                    cout << ' ';
                }
            }
            else{
                if(l%2 == 1){
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