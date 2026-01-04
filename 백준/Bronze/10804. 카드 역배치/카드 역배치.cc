#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    vector<int> v(20);
    int a, b;
    
    for(int i = 0; i < 20; i++){
        v[i] = i + 1;
    }
    
    for(int i = 0; i < 10; i++){
        cin >> a >> b;
        // change vector
        reverse(v.begin() + a - 1, v.begin() + b);
    }
    
    for(int i = 0; i < 20; i++){
        cout << v[i] << ' ';
    }
    
    return 0;
}