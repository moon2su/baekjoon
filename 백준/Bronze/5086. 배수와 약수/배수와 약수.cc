#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    int A, B;
    
    while(1){
        cin >> A >> B;
        if(A == 0 && B == 0){break;}
        else if((A % B) == 0){cout << "multiple";}
        else if(B % A == 0){cout << "factor";}
        else {cout << "neither";}
        cout << '\n';
    }
    
    return 0;
}