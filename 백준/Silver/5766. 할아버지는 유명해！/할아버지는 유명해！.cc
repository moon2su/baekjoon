#include <bits/stdc++.h>
using namespace std;
int n, m;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    while(1){
        cin >> n >> m;
        if(n == 0 && m == 0) break;
        map<int, int> playerScoreMap;
        int num1 = 0, num2 = 0;
        for(int i = 0; i < n * m; i++){
            int x;
            cin >> x;
            playerScoreMap[x]++;
        }
        
        for(auto RankMap : playerScoreMap){
            num1 = max(num1, RankMap.second);
        }
        
        for(auto RankMap : playerScoreMap){
            if(RankMap.second == num1) continue;
            num2 = max(num2, RankMap.second);
        }
        for(auto RankMap : playerScoreMap){
            if(RankMap.second == num2){
                cout << RankMap.first << ' ';
            }
        }
        cout << '\n';
    }
    
    return 0;
}