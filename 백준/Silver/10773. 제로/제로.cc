#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    stack<int> S;
    int K; cin >> K;
    int num;
    int cnt = 0;
    
    for(int i = 0; i < K; i++){
        cin >> num;
        if(num != 0){
            S.push(num);
            cnt += num;
        }
        else{
            cnt -= S.top();
            S.pop();
        }
    }
    
    cout << cnt;
    
    return 0;
}