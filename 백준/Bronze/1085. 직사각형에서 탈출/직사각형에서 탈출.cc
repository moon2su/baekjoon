#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    int x, y, w, h; cin >> x >> y >> w >> h;
    int min_x = 0;
    int min_y = 0;
    
    min_x = min(x, w-x);
    min_y = min(y, h-y);
    
    cout << min(min_x, min_y);
    
    return 0;
}