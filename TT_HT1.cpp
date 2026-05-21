#include <iostream>
#include <stack>
using namespace std;  
int main(){
	string s ; cin >> s ; 
	stack<char> st ; 
	for (char c : s ){
//		if(c == '('){
//			st.push(c);
//		}
		if(c >= 'a' && c <= 'z'){
			cout << c ;
		}
		else if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^') // + - * / ^
			st.push(c) ; 
		if(c == ')') {
			cout << st.top() ;
			st.pop() ; 
		}
	}
}
