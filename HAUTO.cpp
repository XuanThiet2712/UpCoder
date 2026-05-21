#include <iostream>
using namespace std ; 
struct Stack{
	int a[100];
	int idx = -1 ;
	
	void push(int x){
		idx ++ ; 
		a[idx] = x ; 
	} ; 
	void init() {idx = -1 ; }
	int top() {	return a[idx] ; }
	void pop() {idx--;}
	bool empty() {return (idx < 0) ; }
	bool full() {return 100 - idx < 0 ;} 
};

int main(){
	Stack st ; 
	st.init() ; 
	string s ;
	int sum = 0 ; 
	while(cin >> s){
		if ( s == "+"){
			int tmp = st.top() ; 
			st.pop();
			sum = st.top() + tmp ;
			st.pop() ;
			st.push(sum) ; 
		}
		else if ( s == "-"){
			int tmp = st.top() ; 
			st.pop();
			sum = st.top() - tmp ;
			st.pop() ;
			st.push(sum) ; 
		}
		else if ( s == "*"){
			int tmp = st.top() ; 
			st.pop();
			sum = st.top() * tmp ;
			st.pop() ;
			st.push(sum) ; 
		}
		else if ( s == "/"){
			int tmp = st.top() ; 
			st.pop();
			sum = st.top() / tmp ;
			st.pop() ;
			st.push(sum) ; 
		}
		else{
			st.push(stoi(s)); 
		}
	}
	cout << st.top() ;
}
