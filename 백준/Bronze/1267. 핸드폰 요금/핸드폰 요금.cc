#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int N; cin >> N;
    vector<int> v(N);
    int Y = 0;
    int M = 0;
    
    for(int i = 0; i < N; i++){
        cin >> v[i];
    }
    
    for(int i = 0; i < N; i++){
        
        if(v[i] / 30 < 1){
            Y += 10;
        }
        else{
            Y += ((v[i] / 30) + 1) * 10;
        }
        
        if(v[i] / 60 < 1){
            M += 15;
        }
        else{
            M += ((v[i] / 60) + 1) * 15;
        }
    }
    
    if(Y < M){
        cout << "Y " << Y;
    }
    else if(M < Y){
        cout << "M " << M;
    }
    else{
        cout << "Y M " << Y;
    }
    
    return 0;
    
}