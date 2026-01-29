#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    int A, B, V; cin >> A >> B >> V;
    int rst = (V - B) / (A - B);
    
    if((V - B) % (A - B) != 0){
        rst++;
    }
    
    cout << rst;
    
    return 0;
}