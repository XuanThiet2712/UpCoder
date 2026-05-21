#include <iostream>
using namespace std ; 
struct Stack{
	char a[100];
	int idx = -1 ;
	
	void push(int x){
		idx ++ ; 
		a[idx] = x ; 
	} ; 
	void init() {idx = -1 ; }
	char top() {	return a[idx] ; }
	void pop() {idx--;}
	bool empty() {return (idx < 0) ; }
	bool full() {return 100 - idx < 0 ;} 
};

int main(){
	Stack st ; 
	st.init() ; 
	string s ; cin >> s ; 
	for (char c : s ){
		if (c == '*' || c == '/') {
			if((st.top() == '*' && c == '/') || (st.top() == '/' && c == '*')){
				cout << st.top() << " " ;
				st.pop() ; 
			}
		}
		else if(c >= '0' && c <= '9')
			cout << c << " ";
		if (c == '+' || c == '-' || c == '^'|| c == '*' || c == '/') // + - * / ^
			st.push(c) ; 
		if(c == ')') {
			cout << st.top() << " " ;
			st.pop() ; 
		}
	}
	while(!st.empty()){
		cout << st.top() << " " ; 
		st.pop() ; 
	}	
		
}

