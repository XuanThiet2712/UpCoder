#include <bits/stdc++.h>
using namespace std;
string s = "0123456789ABCDEF" ; 
void Hex(long long n) {
	if (n == 0) return;
	Hex(n / 16);
	int r = n % 16;
	cout << s[r] ; 
}

int main() {
	long long n;
	cin >> n;
	if (n == 0)
		cout << 0;
	else
		Hex(n);
}
