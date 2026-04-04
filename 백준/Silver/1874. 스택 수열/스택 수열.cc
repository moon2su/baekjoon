#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    stack<int> S;
    int n; cin >> n;
    vector<char> V;
    int cnt = 1;
    int num;
    
    for(int i = 0; i < n; i++){
        cin >> num;
        
        while(cnt <= num){
            S.push(cnt);
            cnt++;
            V.push_back('+');
        }
        
        if(num == S.top()){
            S.pop();
            V.push_back('-');
        }
        
        else{
            cout << "NO";
            return 0;
        }
    }
    
    for(int i = 0; i < V.size(); i++){
        cout << V[i] << '\n';
    }
    
    return 0;
}