#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    int N, M; cin >> N >> M;
    int num;
    int cnt = 0;
    deque<int> D;
    int tmp;
    
    for(int i = 1; i <= N; i++){
        D.push_back(i);
    }
    
    for(int i = 0; i < M; i++){
        cin >> num;
        for(int j = 0; j < D.size(); j++){
            if(D[j] == num){
                tmp = j;
                break;
            }
        }
        
        while(true){
            if(tmp > D.size()/2){
                if(num == D.front()){
                    D.pop_front();
                    break;
                }
                else{
                    D.push_front(D.back());
                    D.pop_back();
                    cnt++;
                }
            }
            
            else{
                if(num == D.front()){
                    D.pop_front();
                    break;
                }
                else{
                    D.push_back(D.front());
                    D.pop_front();
                    cnt++;
                }
            }
        }
    }
    
    cout << cnt;
    
    return 0;
    
}