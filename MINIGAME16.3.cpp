#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	
	stringstream ss(s);
	string word;
	
	map<string, int> cnt;
	int n = 0;
	
	while (ss >> word) {
		cnt[word]++;
		n++;
	}
	
	unsigned long long ans = 1;
	
	for (int i = 2; i <= n; i++)
		ans *= i;
	
	for (auto p : cnt) {
		unsigned long long f = 1;
		for (int i = 2; i <= p.second; i++)
			f *= i;
		ans /= f;
	}
	
	cout << ans;
}
