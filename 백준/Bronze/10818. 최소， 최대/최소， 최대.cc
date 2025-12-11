#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    int N; cin >> N;
    vector<int> v(N);
    int min, max;
    
    for(int i = 0; i < N; i++){
        cin >> v[i];
    }
    
    min = v[0];
    max = v[0];
    
    for(int i = 0; i < v.size(); i++){
        
        if(min > v[i]){ min = v[i]; }
        
        
        if(v[i] > max){ max = v[i]; }
    }
    
    cout << min << ' ' << max;

    return 0;
}