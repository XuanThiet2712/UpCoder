#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	getline(cin, s);	
	map<char, int> mp;	
	for (char c : s) {
		mp[c]++;
	}	
	char res;
	int mx = 0;
	for (auto x : mp) {		
		if (x.second > mx) {
			mx = x.second;
			res = x.first;
		}
	}
	cout << res << " " << mx;
}
