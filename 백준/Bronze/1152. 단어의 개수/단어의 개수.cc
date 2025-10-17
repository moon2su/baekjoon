#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    string s;
    int cnt = 1;
    
    getline(cin, s);
    
    if(s.length() == 1 && s[0] == ' ') {
        cout << 0;
        return 0;
    }
    
    for(int i = 1; i < s.length() - 1; i++){
        if(s[i] == ' ') { cnt++; }
        
    }
    
    cout << cnt;
    return 0;
    
}