#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    vector<int> v(5);
    int mean = 0;
    int median = 0;
    
    for(int i = 0; i < 5; i++){
        cin >> v[i];
        mean += v[i];
    }
    
    sort(v.begin(), v.end());
    median = v[2];
    
    cout << mean / 5 << '\n' << median;
    
    return 0;
}