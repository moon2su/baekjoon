#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    long long A, B; cin >> A >> B;

    if(A > B){
        long long t;
        t = B;
        B = A;
        A = t;
    }
    
    if(A == B || B - A == 1){
        cout << 0;
    }
    
    else{
        cout << B - A - 1 << '\n';
        for(long long i = A + 1; i < B; i++){
            cout << i << ' ';
        }
    }
    
    return 0;
}