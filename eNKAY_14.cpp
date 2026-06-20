#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	
	map<char, int> mp;
	
	for (char c : s) {
		if (isalpha(c)) {
			c = tolower(c);
			mp[c]++;
		}
		else if (isdigit(c)) {
			mp[c]++;
		}
	}
	
	// 0-9
	for (char c = '0'; c <= '9'; c++) {
		if (mp[c] > 0)
			cout << c << ' ' << mp[c] << '\n';
	}	
	// a-z
	for (char c = 'a'; c <= 'z'; c++) {
		if (mp[c] > 0)
			cout << c << ' ' << mp[c] << '\n';
	}
	
	return 0;
}
