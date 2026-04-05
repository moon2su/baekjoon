#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    while(1){
        string str;
        getline(cin, str);
        
        if(str == "."){
            break;
        }
        
        stack<char> S;
        int cnt = 0;
        
        for(int i = 0; i < str.length(); i++){
            char c = str[i];
            
            if((c == '(') || (c == '[')){
                S.push(c);
            }
            else if(c == ')'){
                if(!S.empty() && S.top() == '('){
                    S.pop();
                }
                else{
                    cnt++;
                    break;
                }
            }
            else if(c == ']'){
                if(!S.empty() && S.top() == '['){
                    S.pop();
                }
                else{
                    cnt++;
                    break;
                }
            }
        }
        if(cnt == 0 && S.empty()){
            cout << "yes" << '\n';
        }
        else{
            cout << "no" << '\n';
        }
    }
    
    return 0;
}