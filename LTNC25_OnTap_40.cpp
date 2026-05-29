#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	int count = 0;
	bool inWord = false;	
	for (char c : s) {		
		if (isalpha(c)) {
			if (!inWord) {
				count++;
				inWord = true;
			}
		}
		else {
			inWord = false;
		}
	}
	
	cout << count;
	
	return 0;
}
