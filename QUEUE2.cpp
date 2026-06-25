#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	queue<int> q;
	
	while (n--) {
		string cmd;
		cin >> cmd;
		
		if (cmd == "push") {
			int x;
			cin >> x;
			
			int sz = q.size();
			q.push(x);
			
			while (sz--) {
				q.push(q.front());
				q.pop();
			}
		}
		else if (cmd == "pop") {
			cout << q.front() << '\n';
			q.pop();
		}
		else if (cmd == "top") {
			cout << q.front() << '\n';
		}
		else if (cmd == "empty") {
			cout << (q.empty() ? "YES" : "NO") << '\n';
		}
	}
	
	return 0;
}
