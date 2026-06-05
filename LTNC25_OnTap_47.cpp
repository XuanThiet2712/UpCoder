#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[20];
vector<int> cur;
void Try(int start) {
	if (cur.size() == k) {
		cout << "(";
		for (int i = 0; i < k; i++) {
			cout << cur[i];
			if (i + 1 < k) cout << " ";
		}
		cout << ")\n";
		return;
	}
 	
	for (int i = start; i < n; i++) {
		cur.push_back(a[i]);
		Try(i + 1);       
		cur.pop_back();
	}
}

int main() {
	cin >> n >> k;
	for (int i = 0; i < n; i++) cin >> a[i];
	Try(0);
}
