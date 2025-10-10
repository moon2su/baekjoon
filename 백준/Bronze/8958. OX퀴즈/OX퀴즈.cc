#include <bits/stdc++.h>
#include <string>

int main() {
	int N;
	std::string s;

	std::cin >> N;
	for (int i = 0; i < N; i++) {
		std::cin >> s;
		int sum, cnt;
		sum = cnt = 0;
		for (int j = 0; j < s.length(); j++) {
			if (s[j] == 'O') cnt++;
			else cnt = 0;
			sum += cnt;
		}
		std::cout << sum << '\n';
	}
}