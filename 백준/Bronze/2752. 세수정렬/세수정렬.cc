#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    vector<int> v(3);
    int t;
    
    for(int i = 0; i < 3; i++){
        cin >> v[i];
    }
    
    for(int i = 0; i < 2; i++){
        for(int j = i+1; j < 3; j++){
            if(v[i] > v[j]){
                t = v[i];
                v[i] = v[j];
                v[j] = t;
            }
        }
    }
    
    for(int i = 0; i < 3; i++){
        cout << v[i] << ' ';
    }
    
    return 0;
    
}