#include <iostream>
#include <stack> 
using namespace std ; 
int main(){
	int n ; cin >> n ; 
	int x ; 
	stack<int> st ; 
	while(n--){
		cin >> x ;
		st.push(x);
	}
	while(!st.empty()){
		cout << st.top() <<" " ; 
		st.pop();
	}
}
