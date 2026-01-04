#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    vector<int> v(7);
    int sum = 0;
    int min = 100;
    
    for(int i = 0; i < 7; i++){
        cin >> v[i];
        
        if(v[i] % 2 != 0){
            sum += v[i];
            if(v[i] < min){
                min = v[i];
            }
        }
        
    }
    
    if(sum == 0){
        cout << -1;
    }
    else{
        cout << sum << '\n' << min;
    }
    
    return 0;
}