#include <bits/stdc++.h>
using namespace std ; 
int main(){
	string s ; cin >> s ; 
	stack<char> st ; 
	for (char c : s){
		if(c == '(' || c == '[' || c == '{')
			st.push(c);
		else if((c == ')' && !st.empty() && st.top() == '(') || 
			    (c == ']' && !st.empty() && st.top() == '[') ||
			    (c == '}' && !st.empty() && st.top() == '{' ))
			st.pop();
		else{
			cout << "no" ;
			return 0 ;
		}
	}
	if(st.empty()) cout << "yes" ;
	else cout << "no" ; 
}
