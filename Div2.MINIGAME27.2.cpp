#include <iostream>
#include <stack>
using namespace std; 
int main(){
	stack<int> st ;
	int n , choice , x ;
	while(n--){
		if(choice == 1){
			cin >> x ; 
			st.push(x);
		}
		else if(choice == 2) st.pop() ;
		else if(choice == 3){
			int temp = st.top();
			st.pop() ; 
			cout << st.top() << endl ;  
			st.push(temp);
		}
	}
	
}
