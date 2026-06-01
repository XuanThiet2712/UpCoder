#include <bits/stdc++.h>
using namespace std ;
int main(){
	string s ; cin >> s ; 
	stack<char> st ; 
	for(char c : s )
		st.push(c) ; 
	while(1st.empty()){
		cout << st.top() ; 
		st.pop();
	}
}
