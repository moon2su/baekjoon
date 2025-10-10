#include <bits/stdc++.h>

int main(){
    
    int a;
    int b;
    int c;
    
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    int mul = a * b * c;
    int num[10] = {};
    
    while(mul > 0){
        num[mul % 10]++;
        mul /= 10;
    }
    
    for(int i = 0; i < 10; i++){
        std::cout << num[i] << '\n';
    }
    
    return 0;
    
}