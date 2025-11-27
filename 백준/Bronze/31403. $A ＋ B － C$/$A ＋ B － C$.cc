#include <bits/stdc++.h>
using namespace std;



int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    int A, B, C; cin >> A >> B >> C;
    
    cout << A + B - C << '\n';
    
    string strA = to_string(A);
    string strB = to_string(B);
    string strC = to_string(C);
    
    cout << stoi(strA + strB) - stoi(strC);
    
    return 0;
}