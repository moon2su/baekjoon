#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    int N; cin >> N;
    string str;
    deque<int> D;
    
    
    for(int i = 0; i < N; i++){
        cin >> str;
        
        if(str == "push_back"){
            int X; cin >> X;
            D.push_back(X);
        }
        else if(str == "push_front"){
            int X; cin >> X;
            D.push_front(X);
        }
        else if(str == "pop_back"){
            if(D.size() == 0){
                cout << -1 << '\n';
            }
            else{
                cout << D.back() << '\n';
                D.pop_back();
            }
        }
        else if(str == "pop_front"){
            if(D.size() == 0){
                cout << -1 << '\n';
            }
            else{
                cout << D.front() << '\n';
                D.pop_front();
            }
        }
        else if(str == "size"){
            cout << D.size() << '\n';
        }
        else if(str == "empty"){
            if(D.empty()){
                cout << 1 << '\n';
            }
            else{
                cout << 0 << '\n';
            }
        }
        else if(str == "back"){
            if(D.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << D.back() << '\n';
            }
        }
        else if(str == "front"){
            if(D.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << D.front() << '\n';
            }
        }
    }
    
    return 0;
    
}