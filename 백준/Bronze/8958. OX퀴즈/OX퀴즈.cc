#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    
    int N; cin >> N;
    string S;
    
    for(int i = 0; i < N; i++){
        cin >> S;
        int cnt = 0;
        int sum = 0;
        
        for(int j = 0; j < S.length(); j++){
            if(S[j] == 'O'){ cnt++; }
            else cnt = 0;
            sum += cnt;
        }
        cout << sum << '\n';
    }

    return 0;
}