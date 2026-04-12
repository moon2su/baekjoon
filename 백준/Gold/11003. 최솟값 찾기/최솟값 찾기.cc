#include <bits/stdc++.h>
using namespace std;

int arr[5000001];

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    int N, L; cin >> N >> L;
    deque<pair<int, int>> D;
    
    for(int i = 1; i <= N; i++){
        cin >> arr[i];
    }
    
    for(int i = 1; i <= N; i++){
        if(!D.empty() && D.front().second < i - L + 1){ // D의 front값의 인덱스 조건
            D.pop_front();
        }
        while(!D.empty() && D.back().first >= arr[i]){
            D.pop_back();
        }
        D.push_back({arr[i], i});
        cout << D.front().first << ' ';
    }
    
    return 0;
}