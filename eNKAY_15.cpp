#include <iostream>
#include <stack>
using namespace std ;
int main(){
	string s ; 
	cin >> s ; 
	stack<int> st;

	for (int i = 0 ; i < s.size() ; i++){
		if(s[i] == '('){
			st.push(i + 1);
		}
		if(s[i] == ')') {
			cout << st.top() <<" " <<i + 1 << endl ; 
			st.pop();
		}
	}
	
	return 0 ; 
}
