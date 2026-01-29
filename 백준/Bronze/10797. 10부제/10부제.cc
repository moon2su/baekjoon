#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    int day; cin >> day;
    vector<int> car(5);
    int cnt = 0;
    
    for(int i = 0; i < 5; i++){
        cin >> car[i];
        if(car[i] == day){
            cnt++;
        }
    }
    
    cout << cnt;
    
    return 0;
}