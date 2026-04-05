#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    int N; cin >> N;
    int cnt = 0;
    
    for(int i = 0; i < N; i++){
        stack<char> S;
        string str;
        cin >> str;
        
        for(int j = 0; j < str.length(); j++){
            
            if(!S.empty() && S.top() == str[j]){
                S.pop();
                continue;
            }
            S.push(str[j]);
        }
        
        if(S.empty()){
            cnt++;
        }
    }
    
    cout << cnt;
    
    return 0;
}