#include <bits/stdc++.h>
#include <string>

int main() {
    
  int a;
  int b;
  int c;

  std::cin >> a;
  std::cin >> b;
  std::cin >> c;
  int result1 = a + b - c;

  std::cout << result1 << "\n";

  std::string strA = std::to_string(a);
  std::string strB = std::to_string(b);
  std::string strC = std::to_string(c);

  int result2 = stoi(strA + strB) - stoi(strC);
    
  std::cout << result2 << "\n";

  return 0;
}