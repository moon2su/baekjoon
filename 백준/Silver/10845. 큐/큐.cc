#include <bits/stdc++.h>
using namespace std;

int Q[1000005];
int head, tail;

void push(int X){
    Q[tail++] = X;
}

void pop(){
    if(head == tail) cout << -1 << '\n';
    else{
        cout << Q[head] << '\n';
        head++;
    }
}

void size(){
    cout << tail - head << '\n';
}

void empty(){
    if(head == tail) cout << 1 << '\n';
    else cout << 0 << '\n';
}

void front(){
    if(head == tail) cout << -1 << '\n';
    else{
        cout << Q[head] << '\n';
    }
}

void back(){
    if(head == tail) cout << -1 << '\n';
    else{
        cout << Q[tail - 1] << '\n';
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    int N; cin >> N;
    queue<int> Q;
    
    for(int i = 0; i < N; i++){
        string str;
        cin >> str;
        
        if(str == "push"){
            int X; cin >> X;
            push(X);
        }
        else if(str == "pop"){
            pop();
        }
        else if(str == "size"){
            size();
        }
        else if(str == "empty"){
            empty();
        }
        else if(str == "front"){
            front();
        }
        else if(str == "back"){
            back();
        }
    }
    
    return 0;
}