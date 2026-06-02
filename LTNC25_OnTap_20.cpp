#include <iostream>
#include <stack>
using namespace std ; 
int main(){
	string s ; cin >> s ; 
	stack<char> st ; 
	for(char c : s){
		if(c == '(')
			st.push(c);
		else if(c == ')'){
			if(!st.empty())
				st.pop();
			else {
				cout << "NO" ;
				return 0; 
			}
		}
	}
	cout << (st.empty() ? "YES" : "NO");
	
}
