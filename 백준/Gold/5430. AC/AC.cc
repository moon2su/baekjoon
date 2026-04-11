#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    int T; cin >> T;
    
    while(T--){
        
        string str; cin >> str;
        int n; cin >> n;
        deque<string> d;
        string num1; cin >> num1;
        string num2 = "";
        bool direction = false;
        bool error = false;
        
        for(int i = 0; i < num1.size(); i++){
            
            if(num1[i] != '[' && num1[i] != ',' && num1[i] != ']'){
                num2 += num1[i];
            }
            
            else{
                if(num2 != ""){
                    d.push_back(num2);
                    num2 = "";
                }
            }
        }
        
        for(int i = 0; i < str.size(); i++){
            
            if(str[i] == 'R'){
                direction = !direction;
            }
            
            else if(str[i] == 'D'){
                
                if(d.empty()){
                    error = !error;
                    break;
                }
                else{
                    if(direction == false){
                        d.pop_front();
                    }
                    else{
                        d.pop_back();
                    }
                }
            }
        }
        
        if(error == true){
            cout << "error" << '\n';
        }
        
        else{
            cout << '[';
            int size = d.size();
            for(int i = 0; i < size; i++){
                
                string cnt;
                
                if(direction == false){
                    cnt = d.front();
                    d.pop_front();
                }
                else{
                    cnt = d.back();
                    d.pop_back();
                }
                
                if(i > 0){
                    cout << ',';
                }
                
                cout << cnt;
            }
            cout << ']' << '\n';
        }
    }
    
    return 0;
}