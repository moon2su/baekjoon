#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    int T; cin >> T;
    
    for(int i = 0; i < T; i++){
        string str;
        cin >> str;
        stack<char> S;
        int cnt = 0;
        
        for(int j = 0; j < str.length(); j++){
            
            if(str[j] == '('){
                S.push(str[j]);
            }
            
            else{
                if(!S.empty() && S.top() == '('){
                    S.pop();
                }
                else{
                    cnt++;
                    continue;
                }
            }
        }
        
        if(cnt == 0 && S.empty()){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }
    
    return 0;
}