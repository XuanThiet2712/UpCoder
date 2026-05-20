#include <bits/stdc++.h>
using namespace std ; 
int main(){
	string s ; cin >> s ; 
	stack<char> st ; 
	for (char c : s){
		if(c != '*') st.push(c);
		if(!st.empty() && c == '*') {
			cout << st.top() ; 
			st.pop();
		}
	}
}
