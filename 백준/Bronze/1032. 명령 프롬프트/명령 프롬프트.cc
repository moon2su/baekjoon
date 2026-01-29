#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    int N; cin >> N;
    string s; cin >> s;
    string t = s;
    string o;
    
    for(int i = 0; i < N-1; i++){
        cin >> o;
        for(int j = 0; j < s.length(); j++){
            if(t[j] != o[j]){t[j] = '?';}
        }
    }
    
    cout << t;
    
    return 0;
}