#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}	
	int dem = 0;
	for (int i = 0; i < m; i++) {
		int x;
		cin >> x;	
		if (find(a.begin(), a.end(), x) == a.end()) {
			dem++;
		}
	}
	
	cout << dem;
	
	return 0;
}
