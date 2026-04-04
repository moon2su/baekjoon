#include <bits/stdc++.h>
using namespace std;

int arr[10001];
int topp = 0;

void push(int X){
    arr[topp++] = X;
}

void pop(){
    if(topp >= 1){
        cout << arr[--topp] << '\n';
        arr[topp] = 0;
    }
    else{
        cout << -1 << '\n';
    }
}

void size(){
    cout << topp << '\n';
}

void empty(){
    if(topp >= 1){
        cout << 0 << '\n';
    }
    else{
        cout << 1 << '\n';
    }
}

void top(){
    if(topp >= 1){
        cout << arr[--topp] << '\n';
        topp++;
    }
    else{
        cout << -1 << '\n';
    }
}

int main(){
    int N; cin >> N;
    string func;
    
    for(int i = 0; i < N; i++){
        cin >> func;
        if(func == "push"){
            int X; cin >> X;
            push(X);
        }
        else if(func == "pop"){
            pop();
        }
        else if(func == "size"){
            size();
        }
        else if(func == "empty"){
            empty();
        }
        else if(func == "top"){
            top();
        }
    }
    
    return 0;
}