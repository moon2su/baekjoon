#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    int N; cin >> N;
    int cnt = 0;
    
    while(N >= 0){
        if(N % 5 == 0){
            cout << cnt + N / 5;
            return 0;
        }
        N -= 3;
        cnt++;
    }
    
    cout << -1;
    
    return 0;
}