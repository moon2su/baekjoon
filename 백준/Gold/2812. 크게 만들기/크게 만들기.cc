#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    int N, K; cin >> N >> K;
    int cnt = 0;
    string str; cin >> str;
    stack<char> S;
    stack<char> Copy_S;
    
    for(int i = 0; i < str.length(); i++){
        
        while(!S.empty() && cnt < K && str[i] > S.top()){
            cnt++;
            S.pop();
        }
        S.push(str[i]);
        
    }
    while(cnt < K){
        cnt++;
        S.pop();
    }
    
    while(!S.empty()){
        Copy_S.push(S.top());
        S.pop();
    }
    
    while(!Copy_S.empty()){
        cout << Copy_S.top();
        Copy_S.pop();
    }
    
    return 0;
}