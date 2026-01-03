#include <bits/stdc++.h>
using namespace std;

int main(){
    
    vector<vector<int>> v(3, vector<int>(4));
    int T1, T2, T3;
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cin >> v[i][j];
        }
    }
    
    for(int i = 0; i < 3; i++){
        int cnt = 0;
        for(int j = 0; j < 4; j++){
            if(v[i][j] == 0){
                cnt++;
            }
        }
        
        if(cnt == 1){cout << 'A' << '\n';}
        else if(cnt == 2){cout << 'B' << '\n';}
        else if(cnt == 3){cout << 'C' << '\n';}
        else if(cnt == 4){cout << 'D' << '\n';}
        else if(cnt == 0){cout << 'E' << '\n';}
        
    }
    
    return 0;
    
}